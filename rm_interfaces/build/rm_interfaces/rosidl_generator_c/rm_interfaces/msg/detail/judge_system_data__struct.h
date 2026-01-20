// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/judge_system_data.h"


#ifndef RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/JudgeSystemData in the package rm_interfaces.
typedef struct rm_interfaces__msg__JudgeSystemData
{
  float hp;
  bool zone_status;
  bool is_defence;
  bool is_attack;
} rm_interfaces__msg__JudgeSystemData;

// Struct for a sequence of rm_interfaces__msg__JudgeSystemData.
typedef struct rm_interfaces__msg__JudgeSystemData__Sequence
{
  rm_interfaces__msg__JudgeSystemData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__JudgeSystemData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_H_
