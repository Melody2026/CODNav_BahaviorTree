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

class Init_JudgeSystemData_standard_3position
{
public:
  explicit Init_JudgeSystemData_standard_3position(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::JudgeSystemData standard_3position(::rm_interfaces::msg::JudgeSystemData::_standard_3position_type arg)
  {
    msg_.standard_3position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_heroposition
{
public:
  explicit Init_JudgeSystemData_heroposition(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_standard_3position heroposition(::rm_interfaces::msg::JudgeSystemData::_heroposition_type arg)
  {
    msg_.heroposition = std::move(arg);
    return Init_JudgeSystemData_standard_3position(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_position_y
{
public:
  explicit Init_JudgeSystemData_position_y(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_heroposition position_y(::rm_interfaces::msg::JudgeSystemData::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_JudgeSystemData_heroposition(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_position_x
{
public:
  explicit Init_JudgeSystemData_position_x(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_position_y position_x(::rm_interfaces::msg::JudgeSystemData::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_JudgeSystemData_position_y(msg_);
  }

private:
  ::rm_interfaces::msg::JudgeSystemData msg_;
};

class Init_JudgeSystemData_is_attacted
{
public:
  explicit Init_JudgeSystemData_is_attacted(::rm_interfaces::msg::JudgeSystemData & msg)
  : msg_(msg)
  {}
  Init_JudgeSystemData_position_x is_attacted(::rm_interfaces::msg::JudgeSystemData::_is_attacted_type arg)
  {
    msg_.is_attacted = std::move(arg);
    return Init_JudgeSystemData_position_x(msg_);
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
  Init_JudgeSystemData_is_attacted zone_status(::rm_interfaces::msg::JudgeSystemData::_zone_status_type arg)
  {
    msg_.zone_status = std::move(arg);
    return Init_JudgeSystemData_is_attacted(msg_);
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
