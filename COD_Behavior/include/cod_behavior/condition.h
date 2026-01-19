#pragma once
#include "include.h"

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
        if (hp < 120) {
            std::cout << "hp < 120\n";
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

class IsPatrolCondition : public BT::ConditionNode {
public:
    IsPatrolCondition(const std::string &name, const BT::NodeConfiguration &config)
        : BT::ConditionNode(name, config) { std::cout << "IsPatrolCondition: start" << std::endl; }

    static BT::PortsList providedPorts() {
        return {
            BT::InputPort<float>("Hp"),
            BT::InputPort<bool>("Zone_status")
        };
    }

    BT::NodeStatus tick() override {
        auto hp_ = getInput<float>("Hp");

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
        float hp = hp_.value();
        std::cout << "zone_status:" << zone_status << std::endl;
        std::cout << "hp:" << hp << std::endl;

        if (hp > 50)
            return BT::NodeStatus::SUCCESS;
        return BT::NodeStatus::FAILURE;
    }

private:
};
