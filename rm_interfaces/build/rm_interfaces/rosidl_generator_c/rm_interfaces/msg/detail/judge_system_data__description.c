// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__JudgeSystemData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x25, 0x4b, 0x63, 0x5f, 0xbf, 0xbf, 0x39,
      0xbc, 0x21, 0xa3, 0x85, 0xad, 0xa2, 0xce, 0xaf,
      0x1a, 0x41, 0x40, 0xb2, 0xb4, 0x42, 0x74, 0x5f,
      0xed, 0x6f, 0xc3, 0xaa, 0xa9, 0x92, 0x4b, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_interfaces__msg__JudgeSystemData__TYPE_NAME[] = "rm_interfaces/msg/JudgeSystemData";

// Define type names, field names, and default values
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__hp[] = "hp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__zone_status[] = "zone_status";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_defence[] = "is_defence";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_attack[] = "is_attack";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__JudgeSystemData__FIELDS[] = {
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__hp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__zone_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_defence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_attack, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__JudgeSystemData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__JudgeSystemData__TYPE_NAME, 33, 33},
      {rm_interfaces__msg__JudgeSystemData__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 hp\n"
  "bool zone_status\n"
  "bool is_defence\n"
  "bool is_attack";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__JudgeSystemData__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__JudgeSystemData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
