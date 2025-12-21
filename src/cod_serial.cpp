#include "uart_transporter.hpp"
#include <Eigen/Eigen>
#include "colortxt/color_txt.hpp"
#include "iostream"
#include "iomanip"
class CODSerial
{
public:
  CODSerial()
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
  void receiveData(UartTransporter & uart)const
  {
    uint8_t header = 0xFF; //帧头
    uint8_t package[20]; //帧长
    uart.open();
    if (!uart.isOpen())
    {
      std::cout << color_text::RED << "OpenFailed" << std::endl;
      return;
    }
    if (uart.read(package,sizeof(package)) == sizeof(package))
    {
      if (package[0]==header)
      {
        std::cout << color_text::GREEN << "Received:";
        for (size_t i =0; i < sizeof(package);i++)
        {
          std::cout << color_text::BLUE << std::hex<< std::setfill('0')
                    << std::setw(2) << static_cast<int>(package[i]) << " ";
        }
        std::cout << std::dec << std::endl;

        int a = package[2]; //直接按位赋值即可
        std::cout <<color_text::GREEN <<a << std::endl;
      }
    }
  }
private:
  std::string SerialName{};
  Eigen::Vector3i sendData_ ;
};

int main(int argc, char * argv[])
{
  CODSerial ser1;
  UartTransporter uart("/dev/ttyACM0",115200);
  Eigen::Vector3i msg;
  msg << 1,2,3;
  while (1)
  {
    ser1.receiveData(uart);
  }
}