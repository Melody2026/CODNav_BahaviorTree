// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/ShootFireTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/shoot_fire_target.h"


#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGET__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ShootFireTarget in the package rm_interfaces.
typedef struct rm_interfaces__msg__ShootFireTarget
{
  geometry_msgs__msg__Pose pose;
} rm_interfaces__msg__ShootFireTarget;

// Struct for a sequence of rm_interfaces__msg__ShootFireTarget.
typedef struct rm_interfaces__msg__ShootFireTarget__Sequence
{
  rm_interfaces__msg__ShootFireTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__ShootFireTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGET__STRUCT_H_
