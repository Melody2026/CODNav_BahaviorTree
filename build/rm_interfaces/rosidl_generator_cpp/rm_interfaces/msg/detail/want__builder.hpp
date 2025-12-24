// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/Want.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/want.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__WANT__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__WANT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/want__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Want_pitch
{
public:
  explicit Init_Want_pitch(::rm_interfaces::msg::Want & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::Want pitch(::rm_interfaces::msg::Want::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::Want msg_;
};

class Init_Want_yaw
{
public:
  explicit Init_Want_yaw(::rm_interfaces::msg::Want & msg)
  : msg_(msg)
  {}
  Init_Want_pitch yaw(::rm_interfaces::msg::Want::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Want_pitch(msg_);
  }

private:
  ::rm_interfaces::msg::Want msg_;
};

class Init_Want_header
{
public:
  Init_Want_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Want_yaw header(::rm_interfaces::msg::Want::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Want_yaw(msg_);
  }

private:
  ::rm_interfaces::msg::Want msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::Want>()
{
  return rm_interfaces::msg::builder::Init_Want_header();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__WANT__BUILDER_HPP_
