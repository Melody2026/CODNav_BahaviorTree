//
// Created by ysl on 2025/12/11.
//
#include "../include/cod_behavior/tree_1_action.h"
#include "behaviortree_cpp/loggers/groot2_publisher.h"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    const auto node = std::make_shared<rclcpp::Node>("bt_demo_node");

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

        geometry_msgs::msg::PoseStamped maingoal = makePose(node.get(),1.0,1.0);
        blackboard->set<geometry_msgs::msg::PoseStamped>("main_position", maingoal);

        geometry_msgs::msg::PoseStamped homegoal = makePose(node.get(),1.0,1.0);
        blackboard->set<geometry_msgs::msg::PoseStamped>("home_position", homegoal);

/*
        position heroposition;
        heroposition.x = 0.0;
        heroposition.y = 0.0;
        blackboard->set<position>("position", heroposition);
*/

		//geometry_msgs::msg::PoseStamped heroposition;
        //blackboard->set<geometry_msgs::msg::PoseStamped>("position", heroposition);

		std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> pose_map;
        blackboard->set<std::unordered_map<std::string, geometry_msgs::msg::PoseStamped>>("position", pose_map);

		//记录血量
		double hp;
        blackboard->set<double>("hp", hp);

		//记录增益区状态
		bool zone_status;
        blackboard->set<bool>("zone_status", zone_status);

		//强攻巡逻路线
		std::vector<geometry_msgs::msg::PoseStamped> patrol_points;
		patrol_points.push_back(makePose(node.get(),1.0, 0.0));
		patrol_points.push_back(makePose(node.get(),2.0, 1.0));
		patrol_points.push_back(makePose(node.get(),0.0, -1.0));
		blackboard->set<std::vector<geometry_msgs::msg::PoseStamped>>("patrol_points", patrol_points);
		blackboard->set<int>("patrol_index", 0); //设置并初始化巡逻索引

        BT::Groot2Publisher publisher(tree,5555);
        tree.tickWhileRunning();

    } catch (const std::exception& e) {
        RCLCPP_ERROR(node->get_logger(), "加载或执行行为树时出错: %s", e.what());
        return 1;
    }

    rclcpp::shutdown();
    return 0;
}