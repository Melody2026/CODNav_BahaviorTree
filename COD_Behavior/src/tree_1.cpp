//
// Created by ysl on 2025/12/11.
//
#include "behaviortree_cpp/loggers/groot2_publisher.h"
#include "cod_behavior/action.h"
#include "cod_behavior/condition.h"

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    rclcpp::NodeOptions options;
    options.automatically_declare_parameters_from_overrides(true);

    auto global_node_ = std::make_shared<rclcpp::Node>(
        "cod_behavior",
        options
    );

    // 配置 RosNodeParams
    BT::RosNodeParams params;
    params.nh = global_node_;
    params.default_port_value = "/navigate_to_pose";
    params.server_timeout = std::chrono::milliseconds(5000);
    params.wait_for_server_timeout = std::chrono::milliseconds(10000);

    // 创建行为树工厂
    BT::BehaviorTreeFactory factory;

    // 注册自定义节点（保持你的注册逻辑）
    factory.registerBuilder<SendNav2Goal>(
        "SendNav2Goal",
        [&](const std::string &name, const BT::NodeConfig &config) {
            return std::make_unique<SendNav2Goal>(name, config, params);
        }
    );
    factory.registerBuilder<WriteToBlackboard>(
        "WriteToBlackboard",
        [&](const std::string &name, const BT::NodeConfig &config) {
            return std::make_unique<WriteToBlackboard>(name, config, global_node_);
        }
    );

    factory.registerNodeType<HpCondition>("HpCondition");
    factory.registerNodeType<ZsCondition>("ZsCondition");
    factory.registerNodeType<IsPatrolCondition>("IsPatrolCondition");
    factory.registerNodeType<GetNextPatrolPose>("GetNextPatrolPose");
    factory.registerNodeType<UpdataPatrolIndex>("UpdataPatrolIndex");
    factory.registerNodeType<Rapid_spin>("Rapid_spin");


    const std::string cod_bt = "/home/ysl/ros2_ws/COD_Behavior/cod_bt/tree_1.xml";

    try {
        auto tree = factory.createTreeFromFile(cod_bt);
        auto blackboard = tree.rootBlackboard();

        // 存入全局节点，增加强引用
        blackboard->set<std::shared_ptr<rclcpp::Node> >("global_node", global_node_);

        // 初始化黑板数据（保持你的逻辑）
        auto maingoal = loadPoseStamped(global_node_, "nav_pose.main");
        auto homegoal = loadPoseStamped(global_node_, "nav_pose.home");
        blackboard->set<geometry_msgs::msg::PoseStamped>("main_position", maingoal);
        blackboard->set<geometry_msgs::msg::PoseStamped>("home_position", homegoal);

        std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> pose_map;
        blackboard->set<std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> >("position", pose_map);
        blackboard->set<double>("hp", 0.0);
        blackboard->set<bool>("zone_status", false);
        blackboard->set<bool>("is_attacked", false);

        std::vector<geometry_msgs::msg::PoseStamped> patrol_points;
        patrol_points.push_back(loadPoseStamped(global_node_, "patrol_pose.first"));
        patrol_points.push_back(loadPoseStamped(global_node_, "patrol_pose.second"));
        patrol_points.push_back(loadPoseStamped(global_node_, "patrol_pose.third"));
        blackboard->set<std::vector<geometry_msgs::msg::PoseStamped> >("patrol_points", patrol_points);
        blackboard->set<int>("patrol_index", 0);

        BT::Groot2Publisher publisher(tree, 5555);

        // ========== 核心：单线程主循环（同时处理 ROS 回调 + 行为树） ==========
        while (rclcpp::ok()) {
            // 处理 ROS 待处理的回调（非阻塞，立即返回）
            rclcpp::spin_some(global_node_);
            // 执行一次行为树 tick
            tree.tickOnce();
            // 控制循环频率（避免占用过多 CPU）
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    } catch (const std::exception &e) {
        RCLCPP_ERROR(global_node_->get_logger(), "加载或执行行为树时出错: %s", e.what());
        rclcpp::shutdown();
        return 1;
    }

    rclcpp::shutdown();
    return 0;
}
