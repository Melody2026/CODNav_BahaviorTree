// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/EkfP.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/ekf_p.h"


#ifndef RM_INTERFACES__MSG__DETAIL__EKF_P__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__EKF_P__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/EkfP in the package rm_interfaces.
typedef struct rm_interfaces__msg__EkfP
{
  double mean_p;
} rm_interfaces__msg__EkfP;

// Struct for a sequence of rm_interfaces__msg__EkfP.
typedef struct rm_interfaces__msg__EkfP__Sequence
{
  rm_interfaces__msg__EkfP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__EkfP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__EKF_P__STRUCT_H_
