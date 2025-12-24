// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/EkfP.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/ekf_p.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__EKF_P__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__EKF_P__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/msg/detail/ekf_p__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EkfP & msg,
  std::ostream & out)
{
  out << "{";
  // member: mean_p
  {
    out << "mean_p: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_p, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EkfP & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mean_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_p: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_p, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EkfP & msg, bool use_flow_style = false)
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
  const rm_interfaces::msg::EkfP & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::msg::EkfP & msg)
{
  return rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::msg::EkfP>()
{
  return "rm_interfaces::msg::EkfP";
}

template<>
inline const char * name<rm_interfaces::msg::EkfP>()
{
  return "rm_interfaces/msg/EkfP";
}

template<>
struct has_fixed_size<rm_interfaces::msg::EkfP>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_interfaces::msg::EkfP>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_interfaces::msg::EkfP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__EKF_P__TRAITS_HPP_
