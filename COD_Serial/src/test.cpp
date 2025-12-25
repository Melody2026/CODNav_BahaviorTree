#include "uart_transporter.hpp"
#include <Eigen/Eigen>
#include "colortxt/color_txt.hpp"
#include "iostream"
#include "iomanip"
#include <vector>
#include <mutex>
#include <atomic>
#include <thread>
#include <chrono>
#include <rm_interfaces/msg/serial_receive_data.hpp>
#include <rclcpp/rclcpp.hpp>

// 添加必要的头文件
#include <memory>
#include <optional>  // 用于可选的返回值

// 修改后的 CODSerial 类
class CODSerial
{
public:
  CODSerial() : has_new_data_(false)  // 初始化标志位
  {
  }

  void sendData(const Eigen::Vector3i msg, UartTransporter & uart) const
  {
    // 创建一个的数据包
    uint8_t header = 0xA5;
    uint8_t fire = 0;
    float vx = msg.x();
    // float vy = msg.y();
    // float vz = msg.z();

    // Convert the packet to a byte array
    uint8_t packet[6];
    packet[0] = header;
    std::memcpy(&packet[1], &fire, sizeof(float));
    std::memcpy(&packet[2], &vx, sizeof(float));
    // std::memcpy(&packet[5], &vy, sizeof(float));
    // std::memcpy(&packet[9], &vz, sizeof(float));

    // Print packet data for debugging
    std::cout << color_text::YELLOW << "Send data:";
    for (size_t i = 0; i < sizeof(packet); i++) {
      std::cout << color_text::BLUE <<std::hex<< std::setfill('0')<< std::setw(2)
                <<static_cast<int>(packet[i]) << " ";
    }

    // Send the packet to the UART
    uart.open();
    if (uart.isOpen()) {
      std::cout << color_text::YELLOW << "Opened UART" << std::endl;
      uart.writeBuffer(packet, sizeof(packet));
      uart.close();
    } else {
      std::cout << color_text::RED << "Failed to open UART" << std::endl;
    }
  }

  // 修改接收函数，使其有返回值
  // 使用 optional 表示可能没有数据的情况
  std::optional<std::vector<float>> receiveData(UartTransporter & uart)
  {
    uint8_t header = 0xfe; // 帧头
    uint8_t package[20];   // 帧长
    uint8_t data[16];      // 有用数据

    uart.open();
    if (!uart.isOpen())
    {
      std::cout << color_text::RED << "OpenFailed" << std::endl;
      return std::nullopt;  // 返回空值
    }

    // 读取数据
    if (uart.read(package, sizeof(package)) == sizeof(package))
    {
      if (package[0] == header)
      {
        // 提取数据部分
        for (int i = 2; i <= 17; i++) {
          data[i - 2] = package[i];  // 复制数据
        }

        // 转换为浮点数
        std::vector<float> floats;
        for (size_t i = 0; i < 16; i += 4) {
          float f;
          std::memcpy(&f, &data[i], sizeof(f));  // 将4个字节复制到float类型变量
          floats.push_back(f);  // 将转换后的float存储到vector中
        }

        // 打印接收到的数据
        std::cout << color_text::GREEN << "Received:";
        for (const auto& f : floats) {
          std::cout << color_text::BLUE << std::setfill(' ')
                     << std::setw(10) << f << " ";
        }
        std::cout << std::dec << std::endl;

        // 更新最新数据（线程安全）
        {
          std::lock_guard<std::mutex> lock(data_mutex_);
          latest_floats_ = floats;            // 保存数据
          has_new_data_ = true;               // 标记有新数据
        }

        uart.close();
        return floats;  // 返回解析的数据
      }
    }

    uart.close();
    return std::nullopt;  // 没有有效数据
  }

  // 添加获取最新数据的函数
  std::optional<std::vector<float>> getLatestData()
  {
    std::lock_guard<std::mutex> lock(data_mutex_);
    if (has_new_data_) {
      has_new_data_ = false;  // 重置标志
      return latest_floats_;   // 返回数据副本
    }
    return std::nullopt;  // 没有新数据
  }

  // 添加检查是否有新数据的函数
  bool hasNewData() const
  {
    return has_new_data_.load();  // 原子操作读取标志
  }

private:
  std::string SerialName{};
  Eigen::Vector3i sendData_;

  // 添加线程安全的成员变量
  std::vector<float> latest_floats_;  // 存储最新接收的数据
  mutable std::mutex data_mutex_;     // 保护数据的互斥锁
  std::atomic<bool> has_new_data_;    // 原子标志，指示是否有新数据
};

// 修改后的 sendmsg 类
class sendmsg : public rclcpp::Node
{
public:
  // 构造函数接受 CODSerial 对象的指针
  sendmsg(std::shared_ptr<CODSerial> serial)
      : Node("sendmsg"), serial_(serial)
  {
    // 创建发布器，发布到 SerialReceiveData 话题，队列大小为 10
    publisher_ = this->create_publisher<rm_interfaces::msg::SerialReceiveData>("SerialReceiveData", 10);

    // 创建定时器，每 500ms 调用一次回调函数
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      std::bind(&sendmsg::timer_callback, this));
  }

private:
  void timer_callback()
  {
    // 创建要发布的消息
    auto msg = rm_interfaces::msg::SerialReceiveData();

    // 尝试从串口对象获取最新数据
    auto data_opt = serial_->getLatestData();

    if (data_opt.has_value()) {
      // 如果有新数据，使用串口数据填充消息
      const auto& floats = data_opt.value();

      // 根据实际需求将浮点数映射到消息字段
      // 这里假设第一个浮点数表示hp，第二个表示zone_status
      if (floats.size() >= 1) {
        msg.judge_system_data.hp = floats[0];  // 转换为整数
        RCLCPP_INFO(this->get_logger(), "发布hp: %f", msg.judge_system_data.hp);
      }

      if (floats.size() >= 2) {
        msg.judge_system_data.zone_status = static_cast<int>(floats[1]);  // 转换为整数
        RCLCPP_INFO(this->get_logger(), "发布zone_status: %d", msg.judge_system_data.zone_status);
      }

	  if (floats.size() >= 3) {
        msg.judge_system_data.position_x = floats[2];  // 转换为整数
        RCLCPP_INFO(this->get_logger(), "发布position_x: %f", msg.judge_system_data.position_x);
      }

	  if (floats.size() >= 4) {
        msg.judge_system_data.position_y = floats[3];  // 转换为整数
        RCLCPP_INFO(this->get_logger(), "发布position_y: %f", msg.judge_system_data.position_y);
      }

      // 如果有更多数据，可以继续映射
      for (size_t i = 0; i < floats.size(); ++i) {
        RCLCPP_DEBUG(this->get_logger(), "浮点数[%zu]: %f", i, floats[i]);
      }
    } else {
      // 如果没有新数据，使用默认值
      msg.judge_system_data.hp = 200.0;
      msg.judge_system_data.zone_status = 1;
      msg.judge_system_data.position_x = 3.0;
      msg.judge_system_data.position_y = 4.0;

      RCLCPP_INFO(this->get_logger(), "使用默认值: hp=200, zone_status=1");
    }

    // 发布消息
    publisher_->publish(msg);
  }

  // 成员变量
  rclcpp::Publisher<rm_interfaces::msg::SerialReceiveData>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  std::shared_ptr<CODSerial> serial_;  // CODSerial 对象的智能指针
};

// 主函数
int main(int argc, char * argv[])
{
  // 初始化 ROS2
  rclcpp::init(argc, argv);

  // 创建 CODSerial 对象（使用智能指针管理）
  auto serial = std::make_shared<CODSerial>();

  // 创建 UART 传输器
  UartTransporter uart("/dev/ttyACM0", 115200);

  // 创建 sendmsg 节点，传入 CODSerial 对象
  auto node = std::make_shared<sendmsg>(serial);

  // 创建单独的线程用于串口读取
  std::thread serial_thread([serial, &uart]() {
    // 循环读取串口数据，直到 ROS2 关闭
    while (rclcpp::ok()) {
      // 调用 receiveData 函数，它会自动更新内部数据
      // 我们忽略返回值，因为数据已经存储在对象内部
      serial->receiveData(uart);

      // 添加适当延迟，避免过度占用 CPU
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
  });

  // 运行 ROS2 节点
  rclcpp::spin(node);

  // 等待串口线程结束
  serial_thread.join();

  // 关闭 ROS2
  rclcpp::shutdown();

  return 0;
}