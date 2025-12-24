// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/EkfP.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/ekf_p.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__EKF_P__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__EKF_P__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/ekf_p__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_EkfP_mean_p
{
public:
  Init_EkfP_mean_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_interfaces::msg::EkfP mean_p(::rm_interfaces::msg::EkfP::_mean_p_type arg)
  {
    msg_.mean_p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::EkfP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::EkfP>()
{
  return rm_interfaces::msg::builder::Init_EkfP_mean_p();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__EKF_P__BUILDER_HPP_
