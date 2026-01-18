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