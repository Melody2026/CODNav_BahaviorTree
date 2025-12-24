// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/LimitAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/limit_angle.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/limit_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_LimitAngle_max_limit_yaw
{
public:
  explicit Init_LimitAngle_max_limit_yaw(::rm_interfaces::msg::LimitAngle & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::LimitAngle max_limit_yaw(::rm_interfaces::msg::LimitAngle::_max_limit_yaw_type arg)
  {
    msg_.max_limit_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::LimitAngle msg_;
};

class Init_LimitAngle_min_limit_yaw
{
public:
  explicit Init_LimitAngle_min_limit_yaw(::rm_interfaces::msg::LimitAngle & msg)
  : msg_(msg)
  {}
  Init_LimitAngle_max_limit_yaw min_limit_yaw(::rm_interfaces::msg::LimitAngle::_min_limit_yaw_type arg)
  {
    msg_.min_limit_yaw = std::move(arg);
    return Init_LimitAngle_max_limit_yaw(msg_);
  }

private:
  ::rm_interfaces::msg::LimitAngle msg_;
};

class Init_LimitAngle_header
{
public:
  Init_LimitAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimitAngle_min_limit_yaw header(::rm_interfaces::msg::LimitAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LimitAngle_min_limit_yaw(msg_);
  }

private:
  ::rm_interfaces::msg::LimitAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::LimitAngle>()
{
  return rm_interfaces::msg::builder::Init_LimitAngle_header();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__BUILDER_HPP_
