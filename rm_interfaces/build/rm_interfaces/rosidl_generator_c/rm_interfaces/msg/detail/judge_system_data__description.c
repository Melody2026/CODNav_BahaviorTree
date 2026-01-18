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
      0x3a, 0xfa, 0x3c, 0x6c, 0xf2, 0x4d, 0x5a, 0x3d,
      0x4d, 0x73, 0x66, 0xe0, 0x7e, 0x73, 0x1f, 0x40,
      0x7b, 0x77, 0x5a, 0x6a, 0xf6, 0x32, 0x2a, 0xd4,
      0x3a, 0xc9, 0xcc, 0x38, 0xca, 0xb7, 0x5f, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rm_interfaces/msg/detail/point2d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rm_interfaces__msg__Point2d__EXPECTED_HASH = {1, {
    0x80, 0xa9, 0x10, 0xe6, 0x6a, 0xf4, 0x73, 0xa6,
    0x81, 0x96, 0x1d, 0x99, 0x66, 0xf6, 0x43, 0xd4,
    0x23, 0x89, 0x2b, 0x87, 0xae, 0xe1, 0x5c, 0xe2,
    0x51, 0x38, 0xda, 0xb7, 0x3e, 0x21, 0x7d, 0x8e,
  }};
#endif

static char rm_interfaces__msg__JudgeSystemData__TYPE_NAME[] = "rm_interfaces/msg/JudgeSystemData";
static char rm_interfaces__msg__Point2d__TYPE_NAME[] = "rm_interfaces/msg/Point2d";

// Define type names, field names, and default values
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__hp[] = "hp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__zone_status[] = "zone_status";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_attacted[] = "is_attacted";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_x[] = "position_x";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_y[] = "position_y";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__heroposition[] = "heroposition";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__standard_3position[] = "standard_3position";

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
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_attacted, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__heroposition, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rm_interfaces__msg__Point2d__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__standard_3position, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rm_interfaces__msg__Point2d__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rm_interfaces__msg__JudgeSystemData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rm_interfaces__msg__Point2d__TYPE_NAME, 25, 25},
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
      {rm_interfaces__msg__JudgeSystemData__FIELDS, 7, 7},
    },
    {rm_interfaces__msg__JudgeSystemData__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rm_interfaces__msg__Point2d__EXPECTED_HASH, rm_interfaces__msg__Point2d__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rm_interfaces__msg__Point2d__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 hp\n"
  "bool zone_status\n"
  "bool is_attacted\n"
  "float32 position_x\n"
  "float32 position_y\n"
  "Point2d heroposition\n"
  "Point2d standard_3position";

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
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__JudgeSystemData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(NULL),
    sources[1] = *rm_interfaces__msg__Point2d__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
