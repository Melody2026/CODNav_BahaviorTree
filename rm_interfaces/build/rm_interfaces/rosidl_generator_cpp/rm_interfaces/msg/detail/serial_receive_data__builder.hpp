// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/serial_receive_data.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/serial_receive_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_SerialReceiveData_judge_system_data
{
public:
  Init_SerialReceiveData_judge_system_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_interfaces::msg::SerialReceiveData judge_system_data(::rm_interfaces::msg::SerialReceiveData::_judge_system_data_type arg)
  {
    msg_.judge_system_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::SerialReceiveData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::SerialReceiveData>()
{
  return rm_interfaces::msg::builder::Init_SerialReceiveData_judge_system_data();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__BUILDER_HPP_
