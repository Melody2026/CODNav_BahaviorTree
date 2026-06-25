#pragma once
#include "include.h"
#include <algorithm>

//血量检测
class HpCondition : public BT::ConditionNode {
public:
    HpCondition(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<float>("Hp")};
    }

    BT::NodeStatus tick() override {
        auto hp_ = getInput<float>("Hp");

        if (!hp_) {
            throw BT::RuntimeError(
                "missing input [Hp]: ", hp_.error()
            );
        }
        float hp = hp_.value();
        std::cout << "hp:" << hp << std::endl;
        if (hp < 210) {
            std::cout << "hp < 150\n";
            return BT::NodeStatus::SUCCESS;
        }

        return BT::NodeStatus::FAILURE;
    }
};

class ZsCondition : public BT::ConditionNode {
public:
    ZsCondition(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<bool>("Zone_status")};
    }

    BT::NodeStatus tick() override {
        auto zone_status_ = getInput<bool>("Zone_status");

        if (!zone_status_) {
            throw BT::RuntimeError(
                "missing input [Zone_status]: ", zone_status_.error()
            );
        }
        bool zone_status = zone_status_.value();
        if (zone_status) {
            std::cout << "zone_status:True......." <<std::endl;
            return BT::NodeStatus::SUCCESS;
        }
        return BT::NodeStatus::FAILURE;
    }
};

// 判断当前 base_link 是否位于两个点构成的轴对齐长方形内。
class BaseLinkInRectangle : public BT::ConditionNode {
public:
    BaseLinkInRectangle(const std::string &name,
                        const BT::NodeConfiguration &config,
                        const std::shared_ptr<rclcpp::Node> &node)
        : BT::ConditionNode(name, config), node_(node)
    {
        tf_buffer_ = std::make_shared<tf2_ros::Buffer>(node_->get_clock());
        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_, node_);
    }

    static BT::PortsList providedPorts() {
        return {
            BT::InputPort<geometry_msgs::msg::PoseStamped>("point1", "长方形对角点 1"),
            BT::InputPort<geometry_msgs::msg::PoseStamped>("point2", "长方形对角点 2"),
            BT::InputPort<std::string>("target_frame", "map", "查询 TF 的父坐标系"),
            BT::InputPort<std::string>("base_frame", "base_link", "机器人底盘坐标系"),
        };
    }

    BT::NodeStatus tick() override {
        auto point1_res = getInput<geometry_msgs::msg::PoseStamped>("point1");
        auto point2_res = getInput<geometry_msgs::msg::PoseStamped>("point2");
        if (!point1_res || !point2_res) {
            RCLCPP_ERROR(node_->get_logger(), "BaseLinkInRectangle: 读取 point1/point2 失败");
            return BT::NodeStatus::FAILURE;
        }

        auto target_frame_res = getInput<std::string>("target_frame");
        auto base_frame_res = getInput<std::string>("base_frame");
        const std::string target_frame =
            (target_frame_res && !target_frame_res.value().empty()) ? target_frame_res.value() : "map";
        const std::string base_frame =
            (base_frame_res && !base_frame_res.value().empty()) ? base_frame_res.value() : "base_link";

        geometry_msgs::msg::TransformStamped transform;
        try {
            transform = tf_buffer_->lookupTransform(target_frame, base_frame, tf2::TimePointZero);
        } catch (const tf2::TransformException &ex) {
            RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 2000,
                                 "BaseLinkInRectangle: TF 查询失败: %s", ex.what());
            return BT::NodeStatus::FAILURE;
        }

        const auto &p1 = point1_res.value().pose.position;
        const auto &p2 = point2_res.value().pose.position;
        const double min_x = std::min(p1.x, p2.x);
        const double max_x = std::max(p1.x, p2.x);
        const double min_y = std::min(p1.y, p2.y);
        const double max_y = std::max(p1.y, p2.y);
        const double robot_x = transform.transform.translation.x;
        const double robot_y = transform.transform.translation.y;

        const bool inside =
            robot_x >= min_x && robot_x <= max_x &&
            robot_y >= min_y && robot_y <= max_y;

        RCLCPP_INFO_THROTTLE(node_->get_logger(), *node_->get_clock(), 1000,
                             "BaseLinkInRectangle: base=[%.2f, %.2f], rect=[%.2f, %.2f]~[%.2f, %.2f], inside=%d",
                             robot_x, robot_y, min_x, min_y, max_x, max_y, inside);

        return inside ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
    }

private:
    std::shared_ptr<rclcpp::Node> node_;
    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
};

class StayHome : public BT::ConditionNode {
public:
    StayHome(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<float>("Hp")};
    }

    BT::NodeStatus tick() override {
        auto hp_ = getInput<float>("Hp");

        if (!hp_) {
            throw BT::RuntimeError(
                "missing input [Hp]: ", hp_.error()
            );
        }
        float hp = hp_.value();
        if (hp >= 350) {
            std::cout << "hp >= 300\n";
            return BT::NodeStatus::SUCCESS;
        }

        return BT::NodeStatus::RUNNING;
    }
};

class DefencePatrolConditioin : public BT::ConditionNode {
public:
    DefencePatrolConditioin(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<bool>("Is_defence")};
    }

    BT::NodeStatus tick() override {
        auto is_defence_ = getInput<bool>("Is_defence");

        if (!is_defence_) {
            throw BT::RuntimeError(
                "missing input [Is_defence]: ", is_defence_.error()
            );
        }
        bool is_defence = is_defence_.value();
        if (is_defence) {
            std::cout << "is_defence:True......." <<std::endl;
            return BT::NodeStatus::SUCCESS;
        }
        return BT::NodeStatus::FAILURE;
    }
};

class AttackPatrolCondition : public BT::ConditionNode {
public:
    AttackPatrolCondition(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<bool>("Is_attack")};
    }

    BT::NodeStatus tick() override {
        auto is_attack_ = getInput<bool>("Is_attack");

        if (!is_attack_) {
            throw BT::RuntimeError(
                "missing input [Is_defence]: ", is_attack_.error()
            );
        }
        bool is_attack = is_attack_.value();
        if (is_attack) {
            std::cout << "is_attack:True......." <<std::endl;
            return BT::NodeStatus::SUCCESS;
        }
        return BT::NodeStatus::FAILURE;
    }
};
