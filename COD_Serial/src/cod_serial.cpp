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
// sendmsg 类
class sendmsg : public rclcpp::Node {
public:
    // 构造函数接受 CODSerial 对象的指针
    sendmsg()
        : Node("sendmsg") {
        // 创建发布器，发布到 SerialReceiveData 话题，队列大小为 10
        publisher_ = this->create_publisher<rm_interfaces::msg::SerialReceiveData>("SerialReceiveData", 10);
        // 创建定时器，每 50ms 调用一次回调函数
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(50),
            std::bind(&sendmsg::timer_callback, this));
        
        // 尝试打开串口
        if (uart_.open()) {
            RCLCPP_INFO(this->get_logger(), "串口打开成功");
        } else {
            RCLCPP_ERROR(this->get_logger(), "串口打开失败");
        }

    }

private:
    void timer_callback() {

        // 创建要发布的消息
        auto msg = rm_interfaces::msg::SerialReceiveData();

        if (receiveData(uart_)) {
            // 根据实际需求将浮点数映射到消息字段
            msg.judge_system_data.hp = hp;
            RCLCPP_INFO(this->get_logger(), "发布hp: %f", msg.judge_system_data.hp);

            msg.judge_system_data.is_attacted = is_attacted;
            RCLCPP_INFO(this->get_logger(), "发布is_attacted: %d", msg.judge_system_data.is_attacted);

            msg.judge_system_data.zone_status = zone_status;
            RCLCPP_INFO(this->get_logger(), "发布zone_status: %d", msg.judge_system_data.zone_status);

            msg.judge_system_data.position_x = position_x;
            RCLCPP_INFO(this->get_logger(), "发布position_x: %f", msg.judge_system_data.position_x);

            msg.judge_system_data.position_y = position_y;
            RCLCPP_INFO(this->get_logger(), "发布position_y: %f", msg.judge_system_data.position_y);

        } else {
            // 如果没有新数据，使用默认值
            msg.judge_system_data.hp = 70.0;
            msg.judge_system_data.zone_status = false;
            msg.judge_system_data.is_attacted = true;
            msg.judge_system_data.position_x = 3.0;
            msg.judge_system_data.position_y = 4.0;
            RCLCPP_INFO(this->get_logger(), "使用默认值...........................");
        }

        // 发布消息
        publisher_->publish(msg);
    }

    // 成员变量
    rclcpp::Publisher<rm_interfaces::msg::SerialReceiveData>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    UartTransporter uart_= UartTransporter("/dev/ttyACM0",115200);
    float hp;
    bool is_attacted;
    bool zone_status;
    float position_x;
    float position_y;
    bool receiveData(UartTransporter &uart) {
        uint8_t package[20];
        uint8_t header=0xfe;
        if (!uart.open()) {
            std::cout << "Failed to open serial port" << std::endl;
            return false;
        }
        // 读取数据
        if (uart.read(package, sizeof(package)) == sizeof(package)) {
            if (header == package[0]) {
                zone_status = package[1];
                is_attacted = package[2];
                std::memcpy(&hp,&package[5],sizeof(float));
                std::memcpy(&position_x,&package[9],sizeof(float));
                std::memcpy(&position_y,&package[13],sizeof(float));
                return true;
            }else {
                std::cout << "Failed to open serial port\n";
                std::cout << "invaild package header\n";
                return false;
            }
        }
        return false;
    }
};

// 主函数
int main(int argc, char *argv[]) {
    // 初始化 ROS2
    rclcpp::init(argc, argv);


    // 创建 sendmsg 节点，传入 CODSerial 对象
    auto node = std::make_shared<sendmsg>();

    while (rclcpp::ok()) {
        // 处理ROS2事件，包括定时器回调
        rclcpp::spin_some(node);

        // 这里可以添加其他自定义任务
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    // 运行 ROS2 节点
    //rclcpp::spin(node);

    // 关闭 ROS2
    rclcpp::shutdown();

    return 0;
}