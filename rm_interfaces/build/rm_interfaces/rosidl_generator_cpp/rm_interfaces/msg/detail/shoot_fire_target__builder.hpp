// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/ShootFireTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/shoot_fire_target.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGET__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/shoot_fire_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShootFireTarget_pose
{
public:
  Init_ShootFireTarget_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_interfaces::msg::ShootFireTarget pose(::rm_interfaces::msg::ShootFireTarget::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::ShootFireTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::ShootFireTarget>()
{
  return rm_interfaces::msg::builder::Init_ShootFireTarget_pose();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGET__BUILDER_HPP_
