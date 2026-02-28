#pragma once
#include "include.h"

class SendNav2Goal : public BT::RosActionNode<nav2_msgs::action::NavigateToPose> {
public:
    // 构造函数：初始化节点名称、配置和ROS2参数
    SendNav2Goal(
        const std::string &name,
        const BT::NodeConfiguration &conf,
        const BT::RosNodeParams &params)
        : RosActionNode<nav2_msgs::action::NavigateToPose>(name, conf, params) // 调用基类构造函数
    {
        // 构造函数体，可以在这里进行额外的初始化
    }

    // 定义节点需要的输入端口
    static BT::PortsList providedPorts() {
        return {
            // 输入端口：目标位置，类型为geometry_msgs::msg::PoseStamped
            BT::InputPort<geometry_msgs::msg::PoseStamped>("goal_pose", "导航目标位置")
        };
    }

    // 设置导航目标：从输入端口获取目标位置并设置到action goal中
    bool setGoal(Goal &goal) override {
        // 从输入端口"goal_pose"获取目标位置
        auto res = getInput<geometry_msgs::msg::PoseStamped>("goal_pose");
        if (!res) {
            // 如果获取失败，抛出运行时错误
            throw BT::RuntimeError("读取端口[goal_pose]时出错:", res.error());
        }

        // 将获取到的位姿赋值给goal的pose字段
        goal.pose = *res;
        // 设置时间戳为当前时间
        goal.pose.header.stamp = rclcpp::Clock().now();

        // 格式化输出目标位置信息（调试用）
        // clang-format off
        std::cout << "Goal_pose: [ "
            << std::fixed << std::setprecision(1)  // 设置输出精度
            << goal.pose.pose.position.x << ", "   // 输出x坐标
            << goal.pose.pose.position.y << ", "   // 输出y坐标
            << goal.pose.pose.position.z << ", " << " ]\n";  // 输出z坐标
        // clang-format on

        // 返回true表示成功设置目标
        return true;
    }

    // 当节点被中断时调用
    void onHalt() override {
        // 记录日志信息，表示节点已被中断
        RCLCPP_INFO(logger(), "SendGoalAction has been halted.");
    }

    // 当收到action结果时调用
    BT::NodeStatus onResultReceived(const WrappedResult &wr) override {
        // 根据action返回的结果码进行不同的处理
        switch (wr.code) {
            case rclcpp_action::ResultCode::SUCCEEDED:
                // 导航成功完成
                RCLCPP_INFO(logger(), "Success!!!");
                return BT::NodeStatus::SUCCESS; // 返回成功状态
                break;

            case rclcpp_action::ResultCode::ABORTED:
                // 导航被中止（通常是由于严重错误）
                RCLCPP_INFO(logger(), "Goal was aborted");
                return BT::NodeStatus::FAILURE; // 返回失败状态
                break;

            case rclcpp_action::ResultCode::CANCELED:
                // 导航被取消（通常是被用户或系统取消）
                RCLCPP_INFO(logger(), "Goal was canceled");
                std::cout << "Goal was canceled" << '\n';
                return BT::NodeStatus::FAILURE; // 返回失败状态
                break;

            default:
                // 未知的结果码
                RCLCPP_INFO(logger(), "Unknown result code");
                return BT::NodeStatus::FAILURE; // 返回失败状态
                break;
        }
    }

    // 当收到action反馈时调用
    BT::NodeStatus onFeedback(
        const std::shared_ptr<const nav2_msgs::action::NavigateToPose::Feedback> feedback) override {
        // 这里可以处理反馈信息，例如显示剩余距离
        std::cout << "Distance remaining: " << feedback->distance_remaining << '\n';

        // 可选：可以添加更多的反馈处理逻辑
        // 例如检查进度、更新UI等

        // 返回RUNNING状态表示动作仍在进行中
        return BT::NodeStatus::RUNNING;
    }

    // 当action失败时调用（例如连接失败、超时等）
    BT::NodeStatus onFailure(BT::ActionNodeErrorCode error) override {
        // 记录错误信息，包括错误码
        RCLCPP_ERROR(logger(), "SendGoalAction failed with error code: %d", error);

        // 返回失败状态
        return BT::NodeStatus::FAILURE;
    }
};

//通过接收的消息将有用的消息写入黑板实现共享
class WriteToBlackboard : public BT::SyncActionNode {
public:
    WriteToBlackboard(const std::string &name,
                      const BT::NodeConfiguration &config,
                      const std::shared_ptr<rclcpp::Node> &global_node)
        : BT::SyncActionNode(name, config),
          global_node_(global_node) {
        global_node_ = rclcpp::Node::make_shared("WriteToBlackboard");
        sub_ = global_node_->create_subscription<rm_interfaces::msg::SerialReceiveData>(
            "/SerialReceiveData", 10,
            std::bind(&WriteToBlackboard::callback, this, std::placeholders::_1));
        is_ReadInterface_ = false;
    }


    static BT::PortsList providedPorts() {
        return {
            BT::OutputPort<float>("Hp"),
            BT::OutputPort<float>("Hero_hp"),
            BT::OutputPort<float>("Sentinel_hp"),
            BT::OutputPort<float>("Infantry_hp"),
            BT::OutputPort<bool>("Zone_status"),
            BT::OutputPort<bool>("Self_status"),
            BT::OutputPort<bool>("Is_recover"),
            BT::OutputPort<bool>("Is_defence"),
            BT::OutputPort<bool>("Is_attack"),
        };
    }

    //设置参数
    float hp = 400.0;
    float herohp = 350.0;
    float sentinelhp = 400.0;
    float infantryhp = 300.0;
    bool self_status = false;
    bool is_defence = false;
    bool is_attack = false;
    bool is_recover = false;
    bool zone_status = false;

    BT::NodeStatus tick() override {
        // 处理回调
        rclcpp::spin_some(global_node_); //只处理当前队列中的回s后就返回
        if (!is_ReadInterface_)
            return BT::NodeStatus::FAILURE;

        //写入黑板
        setOutput("Hp", hp);
        setOutput("Hero_hp", herohp);
        setOutput("Sentinel_hp", sentinelhp);
        setOutput("Infantry_hp", infantryhp);
        setOutput("Self_status", self_status);
        setOutput("Is_defence", is_defence);
        setOutput("Is_attack", is_attack);
        setOutput("Is_recover", is_recover);
        setOutput("Zone_status", zone_status);

        return BT::NodeStatus::SUCCESS;
    }

    void callback(const rm_interfaces::msg::SerialReceiveData::SharedPtr msg) {
        hp = msg->judge_system_data.hp;
        herohp = msg->judge_system_data.herohp;
        sentinelhp = msg->judge_system_data.sentinelhp;
        infantryhp = msg->judge_system_data.infantryhp;
        self_status = msg->judge_system_data.self_status;
        is_defence = msg->judge_system_data.is_defence;
        is_attack = msg->judge_system_data.is_attack;
        is_recover = msg->judge_system_data.is_recover;
        zone_status = msg->judge_system_data.zone_status;

        is_ReadInterface_ = true;
    }

private:
    std::shared_ptr<rclcpp::Node> global_node_;
    rclcpp::Subscription<rm_interfaces::msg::SerialReceiveData>::SharedPtr sub_;
    bool is_ReadInterface_;
};
