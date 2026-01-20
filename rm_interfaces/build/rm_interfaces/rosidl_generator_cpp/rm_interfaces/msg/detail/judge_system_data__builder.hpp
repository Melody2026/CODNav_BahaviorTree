// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/judge_system_data.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/judge_system_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_JudgeSystemData_is_attack
{
public:
  explicit Init_JudgeSystemData_is_attack(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::JudgeSystemData is_attack(::rm_interfaces::msg::JudgeSystemData::_is_attack_type arg)
  {
    msg_.is_attack = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_is_defence
{
public:
  explicit Init_JudgeSystemData_is_defence(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_is_attack is_defence(::rm_interfaces::msg::JudgeSystemData::_is_defence_type arg)
  {
    msg_.is_defence = std::move(arg);
    return Init_JudgeSystemData_is_attack(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_zone_status
{
public:
  explicit Init_JudgeSystemData_zone_status(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_is_defence zone_status(::rm_interfaces::msg::JudgeSystemData::_zone_status_type arg)
  {
    msg_.zone_status = std::move(arg);
    return Init_JudgeSystemData_is_defence(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_hp
{
public:
  Init_JudgeSystemData_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JudgeSystemData_zone_status hp(::rm_interfaces::msg::JudgeSystemData::_hp_type arg)
  {
    msg_.hp = std::move(arg);
    return Init_JudgeSystemData_zone_status(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::JudgeSystemData>()
{
  return rm_interfaces::msg::builder::Init_JudgeSystemData_hp();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__BUILDER_HPP_
