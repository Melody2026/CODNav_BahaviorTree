// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/judge_system_data.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/msg/detail/judge_system_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'heroposition'
// Member 'standard_3position'
#include "rm_interfaces/msg/detail/point2d__traits.hpp"

namespace rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const JudgeSystemData & msg,
  std::ostream & out)
{
  out << "{";
  // member: hp
  {
    out << "hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hp, out);
    out << ", ";
  }

  // member: zone_status
  {
    out << "zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.zone_status, out);
    out << ", ";
  }

  // member: is_attacted
  {
    out << "is_attacted: ";
    rosidl_generator_traits::value_to_yaml(msg.is_attacted, out);
    out << ", ";
  }

  // member: position_x
  {
    out << "position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_x, out);
    out << ", ";
  }

  // member: position_y
  {
    out << "position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_y, out);
    out << ", ";
  }

  // member: heroposition
  {
    out << "heroposition: ";
    to_flow_style_yaml(msg.heroposition, out);
    out << ", ";
  }

  // member: standard_3position
  {
    out << "standard_3position: ";
    to_flow_style_yaml(msg.standard_3position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JudgeSystemData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hp, out);
    out << "\n";
  }

  // member: zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.zone_status, out);
    out << "\n";
  }

  // member: is_attacted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_attacted: ";
    rosidl_generator_traits::value_to_yaml(msg.is_attacted, out);
    out << "\n";
  }

  // member: position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_x, out);
    out << "\n";
  }

  // member: position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_y, out);
    out << "\n";
  }

  // member: heroposition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heroposition:\n";
    to_block_style_yaml(msg.heroposition, out, indentation + 2);
  }

  // member: standard_3position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_3position:\n";
    to_block_style_yaml(msg.standard_3position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JudgeSystemData & msg, bool use_flow_style = false)
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
  const rm_interfaces::msg::JudgeSystemData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::msg::JudgeSystemData & msg)
{
  return rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::msg::JudgeSystemData>()
{
  return "rm_interfaces::msg::JudgeSystemData";
}

template<>
inline const char * name<rm_interfaces::msg::JudgeSystemData>()
{
  return "rm_interfaces/msg/JudgeSystemData";
}

template<>
struct has_fixed_size<rm_interfaces::msg::JudgeSystemData>
  : std::integral_constant<bool, has_fixed_size<rm_interfaces::msg::Point2d>::value> {};

template<>
struct has_bounded_size<rm_interfaces::msg::JudgeSystemData>
  : std::integral_constant<bool, has_bounded_size<rm_interfaces::msg::Point2d>::value> {};

template<>
struct is_message<rm_interfaces::msg::JudgeSystemData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__TRAITS_HPP_
