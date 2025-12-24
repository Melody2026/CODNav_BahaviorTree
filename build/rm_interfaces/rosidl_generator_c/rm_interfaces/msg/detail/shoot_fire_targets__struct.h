// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/ShootFireTargets.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/shoot_fire_targets.h"


#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__STRUCT_H_

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
// Member 'targets'
#include "rm_interfaces/msg/detail/shoot_fire_target__struct.h"

/// Struct defined in msg/ShootFireTargets in the package rm_interfaces.
typedef struct rm_interfaces__msg__ShootFireTargets
{
  std_msgs__msg__Header header;
  rm_interfaces__msg__ShootFireTarget__Sequence targets;
  uint8_t index;
} rm_interfaces__msg__ShootFireTargets;

// Struct for a sequence of rm_interfaces__msg__ShootFireTargets.
typedef struct rm_interfaces__msg__ShootFireTargets__Sequence
{
  rm_interfaces__msg__ShootFireTargets * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__ShootFireTargets__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__STRUCT_H_
