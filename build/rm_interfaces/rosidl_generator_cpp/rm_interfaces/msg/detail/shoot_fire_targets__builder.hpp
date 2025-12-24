// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/ShootFireTargets.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/shoot_fire_targets.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/shoot_fire_targets__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShootFireTargets_index
{
public:
  explicit Init_ShootFireTargets_index(::rm_interfaces::msg::ShootFireTargets & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::ShootFireTargets index(::rm_interfaces::msg::ShootFireTargets::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::ShootFireTargets msg_;
};

class Init_ShootFireTargets_targets
{
public:
  explicit Init_ShootFireTargets_targets(::rm_interfaces::msg::ShootFireTargets & msg)
  : msg_(msg)
  {}
  Init_ShootFireTargets_index targets(::rm_interfaces::msg::ShootFireTargets::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_ShootFireTargets_index(msg_);
  }

private:
  ::rm_interfaces::msg::ShootFireTargets msg_;
};

class Init_ShootFireTargets_header
{
public:
  Init_ShootFireTargets_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootFireTargets_targets header(::rm_interfaces::msg::ShootFireTargets::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ShootFireTargets_targets(msg_);
  }

private:
  ::rm_interfaces::msg::ShootFireTargets msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::ShootFireTargets>()
{
  return rm_interfaces::msg::builder::Init_ShootFireTargets_header();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__BUILDER_HPP_
