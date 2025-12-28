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

class SendNav2Goal : public BT::CoroActionNode
{
public:
    SendNav2Goal(const std::string& name, const BT::NodeConfiguration& config)
        : CoroActionNode(name, config)
    {
		std::cout<<"SendNav2Goal: start"<<std::endl;
        node_ = rclcpp::Node::make_shared("nav2_goal_client");
        action_client_ = rclcpp_action::create_client<nav2_msgs::action::NavigateToPose>(
            node_, "navigate_to_pose");
    }

    static BT::PortsList providedPorts()
    {
        return { BT::InputPort<geometry_msgs::msg::PoseStamped>("goal_pose", "导航目标位置") };
    }

    // 实现tick方法，使用协程
    BT::NodeStatus tick() override
{
    RCLCPP_INFO(node_->get_logger(), "发送导航目标...");

    // 检查服务器是否可用
    if (!action_client_->wait_for_action_server(std::chrono::seconds(5))) {
        RCLCPP_ERROR(node_->get_logger(), "Nav2 Action server not available");
        return BT::NodeStatus::FAILURE;
    }

    // 从端口获取目标位置
    auto goal_pose = getInput<geometry_msgs::msg::PoseStamped>("goal_pose");
    if (!goal_pose) {
        RCLCPP_ERROR(node_->get_logger(), "目标位置未指定");
        return BT::NodeStatus::FAILURE;
    }

    // 创建导航目标
    auto goal_msg = nav2_msgs::action::NavigateToPose::Goal();
    goal_msg.pose = *goal_pose;

    // 异步发送导航目标
    std::shared_future<rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateToPose>::SharedPtr> goal_handle_future = action_client_->async_send_goal(goal_msg);

    // 等待异步任务完成
    if (rclcpp::spin_until_future_complete(node_, goal_handle_future) != rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_ERROR(node_->get_logger(), "发送导航目标失败");
        return BT::NodeStatus::FAILURE;
    }

    RCLCPP_INFO(node_->get_logger(), "导航目标发送成功");
    return BT::NodeStatus::SUCCESS;
}

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SharedPtr action_client_;
};

//通过接收的消息将有用的消息写入黑板实现共享
class WriteToBlackboard : public BT::SyncActionNode
{
public:
    WriteToBlackboard(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config){
			node_ = rclcpp::Node::make_shared("WriteToBlackboard");
        	sub_ = node_->create_subscription<rm_interfaces::msg::SerialReceiveData>(
        	"/SerialReceiveData",10,
        	std::bind(&WriteToBlackboard::callback,this,std::placeholders::_1));
			is_WriteToBlackboard_ = false;
		}


        static BT::PortsList providedPorts()
        {
            return { BT::OutputPort<std::unordered_map<std::string, geometry_msgs::msg::PoseStamped>>("Position"),
					 BT::OutputPort<double>("Hp"),
					 BT::OutputPort<bool>("Zone_status") };
        }

		//设置参数
		std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> pose_map;
		double hp;
		bool zone_status;

        BT::NodeStatus tick() override
        {

            // 处理回调
            rclcpp::spin_some(node_); //只处理当前队列中的回s后就返回
			if(!is_WriteToBlackboard_)
				return BT::NodeStatus::SUCCESS;

           //设置英雄，步兵，哨兵的位置坐标 后面根据消息做修改
			// pose_map["heroposition"]   = makePose(node_.get(), 0.0, 0.0);
			// pose_map["infantryposition"] = makePose(node_.get(), 0.0, 0.0);
			// pose_map["sentinelposition"] = makePose(node_.get(), 1.0, 1.0);
			//写入黑板
            setOutput("Position",pose_map);
			setOutput("Hp",hp);
   			setOutput("Zone_status",zone_status);

			std::cout<<"zone_status:"<<zone_status<<std::endl;
             return BT::NodeStatus::SUCCESS;
        }
		void callback(const rm_interfaces::msg::SerialReceiveData::SharedPtr msg){
			hp = static_cast<double>(msg->judge_system_data.hp);
			zone_status = msg->judge_system_data.zone_status;
			is_WriteToBlackboard_ = true;
    		RCLCPP_INFO(node_->get_logger(), "Callback hp = %f", hp);

		}
private:
    rclcpp::Node::SharedPtr node_;
    rclcpp::Subscription<rm_interfaces::msg::SerialReceiveData>::SharedPtr sub_;
	bool is_WriteToBlackboard_;
};


class test : public BT::SyncActionNode
{
public:
    test(const std::string& name, const BT::NodeConfiguration& config)
        : BT::SyncActionNode(name, config){}
        static BT::PortsList providedPorts()
        {
			std::cout<<"test: start"<<std::endl;
            return { BT::InputPort<bool>("test"), };
        }

        BT::NodeStatus tick() override
        {
            auto pos_res = getInput<bool>("test");
			if (!pos_res)
			{
    			throw BT::RuntimeError("missing input [test]: ", pos_res.error());
			}

			bool test = pos_res.value();
			std::cout<<"test:"<<test<<std::endl;
			//std::unordered_map<std::string, geometry_msgs::msg::PoseStamped> pos_map = pos_res.value();
			//std::cout<<"sentinelposition.pose.position.x: "<<pos_map["sentinelposition"].pose.position.x<<"sentinelposition.pose.position.y: "<<pos_map["sentinelposition"].pose.position.y<<std::endl;

            return BT::NodeStatus::SUCCESS;
        }
private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SharedPtr action_client_;
};

class HpCondition : public BT::ConditionNode{
public:
	HpCondition(const std::string& name, const BT::NodeConfiguration& config)
		: BT::ConditionNode(name, config){ std::cout<<"HpCondition: start"<<std::endl; }
	static BT::PortsList providedPorts(){
		return { BT::InputPort<double>("Hp") };
	}
	BT::NodeStatus tick() override{
		auto hp_ = getInput<double>("Hp");

		if (!hp_)
		{
    		throw BT::RuntimeError(
        	"missing input [Hp]: ", hp_.error()
    		);
		}
double hp = hp_.value();
//double hp = 100;
std::cout<<"hp:"<<hp<<std::endl;
		if(hp<90){
		std::cout << "hp < 90\n";
		return BT::NodeStatus::SUCCESS;
}

		return BT::NodeStatus::FAILURE;
	}
private:

};

class IsPatrolCondition: public BT::ConditionNode{
public:
	IsPatrolCondition(const std::string& name, const BT::NodeConfiguration& config)
		: BT::ConditionNode(name, config){ std::cout<<"IsPatrolCondition: start"<<std::endl; }
	static BT::PortsList providedPorts(){
		return { BT::InputPort<double>("Hp"),
				 BT::InputPort<bool>("Zone_status") };
	}
	BT::NodeStatus tick() override{

		auto hp_ = getInput<double>("Hp");

		if (!hp_)
		{
    		throw BT::RuntimeError(
        	"missing input [Hp]: ", hp_.error()
    		);
		}
		std::cout<<"Hp:"<<hp_.value()<<std::endl;

		auto zone_status_ = getInput<bool>("Zone_status");
		//std::cout<<"zone_status:"<<zone_status_.value()<<std::endl;
		if (!zone_status_)
		{
    		throw BT::RuntimeError(
        	"missing input [Zone_status]: ", zone_status_.error()
    		);
		}


		bool zone_status = zone_status_.value();
		double hp = hp_.value();
		std::cout<<"zone_status:"<<zone_status<<std::endl;
		std::cout<<"hp:"<<hp<<std::endl;

		if(hp>50)
			return BT::NodeStatus::SUCCESS;
		return BT::NodeStatus::FAILURE;
	}
private:

};

class GetNextPatrolPose : public BT::SyncActionNode
{
public:
  GetNextPatrolPose(const std::string& name, const BT::NodeConfiguration& config)
    : SyncActionNode(name, config) { std::cout<<"GetNextPatrolPose: start"<<std::endl; }

  static BT::PortsList providedPorts()
  {
    return {
      BT::OutputPort<geometry_msgs::msg::PoseStamped>("Patrol_pose")
    };
  }

  BT::NodeStatus tick() override
  {
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
	std::cout<<"GetNextPatrolPose: success"<<std::endl;
    return BT::NodeStatus::SUCCESS;
  }
};

class UpdataPatrolIndex : public BT::SyncActionNode
{
public:
  UpdataPatrolIndex(const std::string& name, const BT::NodeConfiguration& config)
    : SyncActionNode(name, config) {std::cout<<"UpdataPatrolIndex: start"<<std::endl; }

  static BT::PortsList providedPorts(){ return{}; }
  BT::NodeStatus tick() override
  {
    auto bb = config().blackboard;

    int index = 0;
	if (!bb->get("patrol_index", index)) {
	  	return BT::NodeStatus::FAILURE;
	}

    	bb->set<int>("patrol_index", index + 1);

	std::cout<<"UpdataPatrolIndex: success"<<std::endl;
    return BT::NodeStatus::SUCCESS;
  }
};
