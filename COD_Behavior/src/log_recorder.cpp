#include <rcl_interfaces/msg/log.hpp>

#include <chrono>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iomanip>
#include <memory>
#include <sstream>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include <sentry_msg/msg/sentry_msg.hpp>

class LogRecorder : public rclcpp::Node
{
public:
    LogRecorder() : Node("log_recorder")
    {
        // 创建日志订阅者
        log_subscription_ = this->create_subscription<rcl_interfaces::msg::Log>(
            "/rosout",
            10,
            std::bind(&LogRecorder::logCallback, this, std::placeholders::_1)
        );
        // 创建日志开关订阅者
        sentry_state_sub_ = this->create_subscription<sentry_msg::msg::SentryMsg>(
            "/sentry_state", 10,
            std::bind(&LogRecorder::sentryStateCallback, this, std::placeholders::_1)
        );
    }
private:
    bool is_recording_ = false;
    std::string log_file_path_;

    static const char *levelToString(uint8_t level)
    {
        switch (level)
        {
            case rcl_interfaces::msg::Log::DEBUG:
                return "DEBUG";
            case rcl_interfaces::msg::Log::INFO:
                return "INFO";
            case rcl_interfaces::msg::Log::WARN:
                return "WARN";
            case rcl_interfaces::msg::Log::ERROR:
                return "ERROR";
            case rcl_interfaces::msg::Log::FATAL:
                return "FATAL";
            default:
                return "UNKNOWN";
        }
    }

    bool startRecording()
    {
        namespace fs = std::filesystem;
        const fs::path log_directory{"log/sentry_logs"};
        std::error_code error;
        fs::create_directories(log_directory, error);
        if (error)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to create log directory: %s", error.message().c_str());
            return false;
        }

        const auto now = std::chrono::system_clock::now();
        const auto time = std::chrono::system_clock::to_time_t(now);
        const auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(
            now.time_since_epoch()).count() % 1000;
        std::tm local_time{};
        localtime_r(&time, &local_time);

        std::ostringstream filename;
        filename << "ros_logs_" << std::put_time(&local_time, "%Y%m%d_%H%M%S")
                 << '_' << std::setfill('0') << std::setw(3) << milliseconds;

        fs::path candidate = log_directory / (filename.str() + ".txt");
        for (unsigned int suffix = 1; fs::exists(candidate); ++suffix)
        {
            candidate = log_directory / (filename.str() + "_" + std::to_string(suffix) + ".txt");
        }
        log_file_path_ = candidate.string();

        std::ofstream log_file(log_file_path_, std::ios_base::trunc);
        if (!log_file.is_open())
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to create log file: %s", log_file_path_.c_str());
            return false;
        }
        log_file << "# Recording started" << std::endl;
        return true;
    }

    void logCallback(const rcl_interfaces::msg::Log::SharedPtr msg)
    {
        // 将日志消息写入文件
        if (!is_recording_)
        {
            return; // 如果不在记录状态，直接返回
        }
        std::ofstream log_file(log_file_path_, std::ios_base::app);
        if (log_file.is_open())
        {
            log_file << "[" << msg->stamp.sec << "." << std::setfill('0') << std::setw(9) << msg->stamp.nanosec << "] "
                     << "[" << levelToString(msg->level) << "] "
                     << msg->name << ": " << msg->msg << std::endl;
            log_file.close();
        }
    }

    void sentryStateCallback(const sentry_msg::msg::SentryMsg::SharedPtr msg)
    {
        // 根据 SentryMsg 的状态控制日志记录
        if (!is_recording_ && msg->match_started)
        {
            if (!startRecording())
            {
                return;
            }
            is_recording_ = true;
            RCLCPP_INFO(this->get_logger(), "Started recording logs to: %s", log_file_path_.c_str());
        }
        else if (is_recording_ && !msg->match_started)
        {
            is_recording_ = false;
            RCLCPP_INFO(this->get_logger(), "Stopped recording logs.");
        }
    }

    rclcpp::Subscription<rcl_interfaces::msg::Log>::SharedPtr log_subscription_;
    rclcpp::Subscription<sentry_msg::msg::SentryMsg>::SharedPtr sentry_state_sub_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto log_recorder_node = std::make_shared<LogRecorder>();
    rclcpp::spin(log_recorder_node);
    rclcpp::shutdown();
    return 0;
}
