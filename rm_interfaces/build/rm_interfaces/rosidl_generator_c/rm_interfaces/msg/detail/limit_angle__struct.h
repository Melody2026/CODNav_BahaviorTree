// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/LimitAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/limit_angle.h"


#ifndef RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LimitAngle in the package rm_interfaces.
typedef struct rm_interfaces__msg__LimitAngle
{
  std_msgs__msg__Header header;
  double min_limit_yaw;
  double max_limit_yaw;
} rm_interfaces__msg__LimitAngle;

// Struct for a sequence of rm_interfaces__msg__LimitAngle.
typedef struct rm_interfaces__msg__LimitAngle__Sequence
{
  rm_interfaces__msg__LimitAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__LimitAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__STRUCT_H_
