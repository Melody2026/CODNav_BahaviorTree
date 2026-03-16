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
      0x4f, 0xa2, 0x72, 0x4b, 0xaa, 0x9f, 0xa0, 0x18,
      0x3b, 0x86, 0x2b, 0xae, 0x1e, 0xfa, 0xc8, 0x4b,
      0xee, 0x29, 0xb7, 0x55, 0x86, 0x1d, 0x93, 0x46,
      0x51, 0xb4, 0x2a, 0xe8, 0xf1, 0xa0, 0xa2, 0x51,
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
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__herohp[] = "herohp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__sentinelhp[] = "sentinelhp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__infantryhp[] = "infantryhp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__zone_status[] = "zone_status";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__self_status[] = "self_status";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_defence[] = "is_defence";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_attack[] = "is_attack";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_recover[] = "is_recover";

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
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__herohp, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__sentinelhp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__infantryhp, 10, 10},
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
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__self_status, 11, 11},
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
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_recover, 10, 10},
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
      {rm_interfaces__msg__JudgeSystemData__FIELDS, 9, 9},
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
  "float32 herohp\n"
  "float32 sentinelhp\n"
  "float32 infantryhp\n"
  "uint8 zone_status\n"
  "bool self_status\n"
  "bool is_defence\n"
  "bool is_attack\n"
  "bool is_recover";

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
    {toplevel_type_raw_source, 145, 145},
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
