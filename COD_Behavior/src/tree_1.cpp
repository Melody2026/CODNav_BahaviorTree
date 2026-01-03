//
// Created by ysl on 2025/12/11.
//
#include "../include/cod_behavior/tree_1_action.h"
#include "behaviortree_cpp/loggers/groot2_publisher.h"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);

	rclcpp::NodeOptions options;
	options.automatically_declare_parameters_from_overrides(true);

	auto node_ = std::make_shared<rclcpp::Node>(
		"cod_behavior",
		options
	);

    // 创建行为树工厂
    BT::BehaviorTreeFactory factory;

    // 注册我们的自定义节点
    factory.registerNodeType<SendNav2Goal>("SendNav2Goal");
    factory.registerNodeType<WriteToBlackboard>("WriteToBlackboard");
	factory.registerNodeType<test>("test");
	factory.registerNodeType<HpCondition>("HpCondition");
	factory.registerNodeType<IsPatrolCondition>("IsPatrolCondition");
	factory.registerNodeType<GetNextPatrolPose>("GetNextPatrolPose");
	factory.registerNodeType<UpdataPatrolIndex>("UpdataPatrolIndex");
	factory.registerNodeType<CheckNavArrived>("CheckNavArrived");

	//factory.registerNodeType<UpdataPatrolIndex>("UpdataPatrolIndex");



    //factory.registerNodeType<SetFinalOwnerMy>("SetFinalOwnerMy");
    //factory.registerNodeType<UpdatePrevState>("UpdatePrevState");
    //factory.registerNodeType<CheckBothOwned>("CheckBothOwned");
    // 使用XML字符串定义行为树
    const std::string cod_bt = "/home/ysl/ros2_ws/COD_Behavior/cod_bt/tree_1.xml";

    try {
        auto tree = factory.createTreeFromFile(cod_bt);
        // 创建目标位置
        auto blackboard = tree.rootBlackboard();

    	auto maingoal = loadPoseStamped(node_, "nav_pose.main");
    	auto homegoal = loadPoseStamped(node_, "nav_pose.home");

    	blackboard->set<geometry_msgs::msg::PoseStamped>("main_position", maingoal);
    	blackboard->set<geometry_msgs::msg::PoseStamped>("home_position", homegoal);

		std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> pose_map;
        blackboard->set<std::unordered_map<std::string, geometry_msgs::msg::PoseStamped>>("position", pose_map);

		//记录血量
		 double hp = {};
         blackboard->set<double>("hp", hp);

		//记录增益区状态
		bool zone_status = {};
        blackboard->set<bool>("zone_status", zone_status);

		//强攻巡逻路线
		std::vector<geometry_msgs::msg::PoseStamped> patrol_points;
		patrol_points.push_back(loadPoseStamped(node_, "patrol_pose.first"));
		patrol_points.push_back(loadPoseStamped(node_, "patrol_pose.second"));
		patrol_points.push_back(loadPoseStamped(node_, "patrol_pose.third"));
		blackboard->set<std::vector<geometry_msgs::msg::PoseStamped>>("patrol_points", patrol_points);
		blackboard->set<int>("patrol_index", 0); //设置并初始化巡逻索引

        BT::Groot2Publisher publisher(tree,5555);
        tree.tickWhileRunning();

    } catch (const std::exception& e) {
        RCLCPP_ERROR(node_->get_logger(), "加载或执行行为树时出错: %s", e.what());
        return 1;
    }

    rclcpp::shutdown();
    return 0;
}