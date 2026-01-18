//
// Created by ysl on 2025/12/10.
//
#pragma once
#include <behaviortree_cpp/action_node.h>
#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/blackboard.h>
#include <behaviortree_cpp/tree_node.h>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include "rclcpp_action/rclcpp_action.hpp"
#include "std_msgs/msg/int32.hpp"
#include <rm_interfaces/msg/serial_receive_data.hpp>
#include <coroutine>
#include <unordered_map>
#include <chrono>
#include <../../BehaviorTree.ROS2/behaviortree_ros2/include/behaviortree_ros2/bt_action_node.hpp>

//读取自定义的航点函数
geometry_msgs::msg::PoseStamped
loadPoseStamped(
    const rclcpp::Node::SharedPtr &node,
    const std::string &prefix) {
    geometry_msgs::msg::PoseStamped pose;

    pose.header.frame_id =
            node->get_parameter(prefix + ".frame_id").as_string();

    pose.pose.position.x =
            node->get_parameter(prefix + ".position.x").as_double();
    pose.pose.position.y =
            node->get_parameter(prefix + ".position.y").as_double();
    pose.pose.position.z =
            node->get_parameter(prefix + ".position.z").as_double();
    pose.pose.orientation.w =
            node->get_parameter(prefix + ".orientation.w").as_double();
    return pose;
}

//发送导航节点
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

class CheckNavArrived : public BT::ConditionNode {
public:
    using NavigateToPose = nav2_msgs::action::NavigateToPose; // Nav2 Action 类型
    using GoalHandleNav = rclcpp_action::ClientGoalHandle<NavigateToPose>; // Goal 句柄
    CheckNavArrived(const std::string &name,
                    const BT::NodeConfiguration &config,
                    const std::shared_ptr<rclcpp::Node> &global_node)
        : BT::ConditionNode(name, config),
          global_node_(global_node) {
        // 创建 ROS2 节点，节点名为 check_nav_reached
        //node_ = rclcpp::Node::make_shared("check_nav_arrived");

        // 创建 Nav2 NavigateToPose Action Client
        action_client_ = rclcpp_action::create_client<NavigateToPose>(
            global_node_, // ROS2 节点
            "navigate_to_pose"); // Action 名称（Nav2 固定）
    }

    static BT::PortsList providedPorts() {
        return {}; // 无端口
    }

    BT::NodeStatus tick() override {
        // 让 ROS2 处理一次回调（用于接收 result）
        rclcpp::spin_some(global_node_);

        // 如果已经到达目标
        if (arrived_) {
            // 返回 SUCCESS，表示 reached
            return BT::NodeStatus::SUCCESS;
        }

        // 否则返回 FAILURE
        return BT::NodeStatus::FAILURE;
    }

private:
    void resultCallback(const GoalHandleNav::WrappedResult &result) {
        // 判断 Action 执行结果
        std::cout << "resultCallback......................" << std::endl;
        if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
            // 导航成功，到达目标
            arrived_ = true;

            // 打印日志
            RCLCPP_INFO(global_node_->get_logger(), "Nav2 reached target");
        } else {
            // 失败 / 被取消 / 中断
            arrived_ = false;

            // 打印警告
            RCLCPP_WARN(global_node_->get_logger(), "Nav2 not reached");
        }
    }

    // ====== ROS2 节点 ======
    std::shared_ptr<rclcpp::Node> global_node_; // ROS2 Node 指针

    // ====== Nav2 Action Client ======
    rclcpp_action::Client<NavigateToPose>::SharedPtr action_client_; // Action 客户端

    // ====== 是否已经到达目标 ======
    std::atomic_bool arrived_{false}; // 原子变量，避免多线程问题
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
            BT::OutputPort<std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> >("Position"),
            BT::OutputPort<double>("Hp"),
            BT::OutputPort<bool>("Zone_status")
        };
    }

    //设置参数
    std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> pose_map;
    double hp;
    bool zone_status;

    BT::NodeStatus tick() override {
        // 处理回调
        rclcpp::spin_some(global_node_); //只处理当前队列中的回s后就返回
        if (!is_ReadInterface_)
            return BT::NodeStatus::FAILURE;

        //写入黑板
        setOutput("Position", pose_map);
        setOutput("Hp", hp);
        setOutput("Zone_status", zone_status);

        std::cout << "zone_status:" << zone_status << std::endl;
        std::cout<<"Position........................"<<std::endl;
        // std::cout<<"heroposition:"<<pose_map["heroposition"].pose.position.x<<","<<pose_map["heroposition"].pose.position.y<<std::endl;
        // std::cout<<"standard_3position:"<<pose_map["standard_3position"].pose.position.x<<","<<pose_map["standard_3position"].pose.position.y<<std::endl;
        // std::cout<<"standard_4position:"<<pose_map["standard_4position"].pose.position.x<<","<<pose_map["standard_4position"].pose.position.y<<std::endl;
        std::cout<<"position:"<<pose_map["position"].pose.position.x<<","<<pose_map["position"].pose.position.y<<std::endl;

        return BT::NodeStatus::SUCCESS;
    }

    void callback(const rm_interfaces::msg::SerialReceiveData::SharedPtr msg) {
        hp = static_cast<double>(msg->judge_system_data.hp);
        zone_status = msg->judge_system_data.zone_status;
        //英雄，步兵，哨兵的位置坐标 后面根据消息做修改
        pose_map["heroposition"].pose.position.x = msg->judge_system_data.heroposition.x;
        pose_map["heroposition"].pose.position.y = msg->judge_system_data.heroposition.y;
        pose_map["standard_3position"].pose.position.x = msg->judge_system_data.standard_3position.x;
        pose_map["standard_3position"].pose.position.y = msg->judge_system_data.standard_3position.y;
        pose_map["standard_4position"].pose.position.x = msg->judge_system_data.standard_4position.x;
        pose_map["standard_4position"].pose.position.y = msg->judge_system_data.standard_4position.y;
        pose_map["position"].pose.position.x = msg->judge_system_data.position_x;
        pose_map["position"].pose.position.y = msg->judge_system_data.position_y;

        is_ReadInterface_ = true;
        RCLCPP_INFO(global_node_->get_logger(), "Callback hp = %f", hp);
    }

private:
    std::shared_ptr<rclcpp::Node> global_node_;
    rclcpp::Subscription<rm_interfaces::msg::SerialReceiveData>::SharedPtr sub_;
    bool is_ReadInterface_;
};

class test : public BT::SyncActionNode {
public:
    test(const std::string &name, const BT::NodeConfiguration &config)
        : BT::SyncActionNode(name, config) {
    }

    static BT::PortsList providedPorts() {
        std::cout << "test: start" << std::endl;
        return {BT::InputPort<bool>("test"),};
    }

    BT::NodeStatus tick() override {
        auto pos_res = getInput<bool>("test");
        if (!pos_res) {
            throw BT::RuntimeError("missing input [test]: ", pos_res.error());
        }

        bool test = pos_res.value();
        std::cout << "test:" << test << std::endl;

        return BT::NodeStatus::SUCCESS;
    }

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SharedPtr action_client_;
};

class HpCondition : public BT::ConditionNode {
public:
    HpCondition(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<double>("Hp")};
    }

    BT::NodeStatus tick() override {
        auto hp_ = getInput<double>("Hp");

        if (!hp_) {
            throw BT::RuntimeError(
                "missing input [Hp]: ", hp_.error()
            );
        }
        double hp = hp_.value();
        std::cout << "hp:" << hp << std::endl;
        if (hp < 90) {
            std::cout << "hp < 90\n";
            return BT::NodeStatus::SUCCESS;
        }

        return BT::NodeStatus::FAILURE;
    }
};

class IsPatrolCondition : public BT::ConditionNode {
public:
    IsPatrolCondition(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) { std::cout << "IsPatrolCondition: start" << std::endl; }

    static BT::PortsList providedPorts() {
        return {
            BT::InputPort<double>("Hp"),
            BT::InputPort<bool>("Zone_status")
        };
    }

    BT::NodeStatus tick() override {
        auto hp_ = getInput<double>("Hp");

        if (!hp_) {
            throw BT::RuntimeError(
                "missing input [Hp]: ", hp_.error()
            );
        }
        std::cout << "Hp:" << hp_.value() << std::endl;

        auto zone_status_ = getInput<bool>("Zone_status");
        if (!zone_status_) {
            throw BT::RuntimeError(
                "missing input [Zone_status]: ", zone_status_.error()
            );
        }


        bool zone_status = zone_status_.value();
        double hp = hp_.value();
        std::cout << "zone_status:" << zone_status << std::endl;
        std::cout << "hp:" << hp << std::endl;

        if (hp > 50)
            return BT::NodeStatus::SUCCESS;
        return BT::NodeStatus::FAILURE;
    }

private:
};

class GetNextPatrolPose : public BT::SyncActionNode {
public:
    GetNextPatrolPose(const std::string &name, const BT::NodeConfiguration &config)
        : SyncActionNode(name, config) { std::cout << "GetNextPatrolPose: start" << std::endl; }

    static BT::PortsList providedPorts() {
        return {
            BT::OutputPort<geometry_msgs::msg::PoseStamped>("Patrol_pose")
        };
    }

    BT::NodeStatus tick() override {
        auto bb = config().blackboard;

        std::vector<geometry_msgs::msg::PoseStamped> patrol_points;
        int index = 0;

        if (!bb->get("patrol_points", patrol_points) ||
            !bb->get("patrol_index", index) ||
            patrol_points.empty()) {
            return BT::NodeStatus::FAILURE;
        }

        index = index % patrol_points.size();
        setOutput("Patrol_pose", patrol_points[index]);
        std::cout << "GetNextPatrolPose: success" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};

class UpdataPatrolIndex : public BT::SyncActionNode {
public:
    UpdataPatrolIndex(const std::string &name, const BT::NodeConfiguration &config)
        : SyncActionNode(name, config) { std::cout << "UpdataPatrolIndex: start" << std::endl; }

    static BT::PortsList providedPorts() { return {}; }

    BT::NodeStatus tick() override {
        auto bb = config().blackboard;

        int index = 0;
        if (!bb->get("patrol_index", index)) {
            return BT::NodeStatus::FAILURE;
        }

        bb->set<int>("patrol_index", index + 1);

        std::cout << "UpdataPatrolIndex: success" << std::endl;
        return BT::NodeStatus::SUCCESS;
    }
};
