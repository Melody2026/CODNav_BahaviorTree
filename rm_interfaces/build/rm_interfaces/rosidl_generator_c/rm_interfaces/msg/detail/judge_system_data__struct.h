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

// Include directives for member types
// Member 'operator_command'
#include "rm_interfaces/msg/detail/operator_command__struct.h"

/// Struct defined in msg/JudgeSystemData in the package rm_interfaces.
typedef struct rm_interfaces__msg__JudgeSystemData
{
  uint8_t game_status;
  int16_t remaining_time;
  int16_t blood;
  int16_t outpost_hp;
  uint8_t is_lowpower;
  int16_t hp;
  int16_t shut_num;
  int16_t qs_hp;
  uint8_t current_hp;
  uint8_t center_gain_point;
  uint8_t friendly_supply_non_zone_exchange;
  uint8_t stage_remain_time;
  uint8_t game_type;
  uint8_t game_progress;
  int16_t dm_qs_hp;
  uint32_t zone_status;
  rm_interfaces__msg__OperatorCommand operator_command;
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
