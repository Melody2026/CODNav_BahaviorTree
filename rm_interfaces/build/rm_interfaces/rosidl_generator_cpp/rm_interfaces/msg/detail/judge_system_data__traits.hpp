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

  // member: herohp
  {
    out << "herohp: ";
    rosidl_generator_traits::value_to_yaml(msg.herohp, out);
    out << ", ";
  }

  // member: sentinelhp
  {
    out << "sentinelhp: ";
    rosidl_generator_traits::value_to_yaml(msg.sentinelhp, out);
    out << ", ";
  }

  // member: infantryhp
  {
    out << "infantryhp: ";
    rosidl_generator_traits::value_to_yaml(msg.infantryhp, out);
    out << ", ";
  }

  // member: zone_status
  {
    out << "zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.zone_status, out);
    out << ", ";
  }

  // member: self_status
  {
    out << "self_status: ";
    rosidl_generator_traits::value_to_yaml(msg.self_status, out);
    out << ", ";
  }

  // member: is_defence
  {
    out << "is_defence: ";
    rosidl_generator_traits::value_to_yaml(msg.is_defence, out);
    out << ", ";
  }

  // member: is_attack
  {
    out << "is_attack: ";
    rosidl_generator_traits::value_to_yaml(msg.is_attack, out);
    out << ", ";
  }

  // member: is_recover
  {
    out << "is_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recover, out);
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

  // member: herohp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "herohp: ";
    rosidl_generator_traits::value_to_yaml(msg.herohp, out);
    out << "\n";
  }

  // member: sentinelhp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentinelhp: ";
    rosidl_generator_traits::value_to_yaml(msg.sentinelhp, out);
    out << "\n";
  }

  // member: infantryhp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantryhp: ";
    rosidl_generator_traits::value_to_yaml(msg.infantryhp, out);
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

  // member: self_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_status: ";
    rosidl_generator_traits::value_to_yaml(msg.self_status, out);
    out << "\n";
  }

  // member: is_defence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_defence: ";
    rosidl_generator_traits::value_to_yaml(msg.is_defence, out);
    out << "\n";
  }

  // member: is_attack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_attack: ";
    rosidl_generator_traits::value_to_yaml(msg.is_attack, out);
    out << "\n";
  }

  // member: is_recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_recover: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recover, out);
    out << "\n";
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
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_interfaces::msg::JudgeSystemData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_interfaces::msg::JudgeSystemData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__TRAITS_HPP_
