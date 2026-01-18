// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/serial_receive_data.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/msg/detail/serial_receive_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'judge_system_data'
#include "rm_interfaces/msg/detail/judge_system_data__traits.hpp"

namespace rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SerialReceiveData & msg,
  std::ostream & out)
{
  out << "{";
  // member: judge_system_data
  {
    out << "judge_system_data: ";
    to_flow_style_yaml(msg.judge_system_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SerialReceiveData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: judge_system_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "judge_system_data:\n";
    to_block_style_yaml(msg.judge_system_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SerialReceiveData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::msg::SerialReceiveData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::msg::SerialReceiveData & msg)
{
  return rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::msg::SerialReceiveData>()
{
  return "rm_interfaces::msg::SerialReceiveData";
}

template<>
inline const char * name<rm_interfaces::msg::SerialReceiveData>()
{
  return "rm_interfaces/msg/SerialReceiveData";
}

template<>
struct has_fixed_size<rm_interfaces::msg::SerialReceiveData>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::msg::JudgeSystemData>::value> {};

template<>
struct has_bounded_size<rm_interfaces::msg::SerialReceiveData>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::msg::JudgeSystemData>::value> {};

template<>
struct is_message<rm_interfaces::msg::SerialReceiveData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__TRAITS_HPP_
