// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/debug_armor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__DebugArmor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x84, 0x7e, 0x48, 0x8b, 0xbd, 0xce, 0x6d,
      0xb2, 0x32, 0x4a, 0x3c, 0x3f, 0x75, 0x93, 0xbd,
      0xad, 0x53, 0xc6, 0xd5, 0xe0, 0x8f, 0xac, 0x93,
      0x82, 0xb7, 0x8f, 0xaf, 0x30, 0x4b, 0x88, 0x11,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_interfaces__msg__DebugArmor__TYPE_NAME[] = "rm_interfaces/msg/DebugArmor";

// Define type names, field names, and default values
static char rm_interfaces__msg__DebugArmor__FIELD_NAME__center_x[] = "center_x";
static char rm_interfaces__msg__DebugArmor__FIELD_NAME__type[] = "type";
static char rm_interfaces__msg__DebugArmor__FIELD_NAME__light_ratio[] = "light_ratio";
static char rm_interfaces__msg__DebugArmor__FIELD_NAME__center_distance[] = "center_distance";
static char rm_interfaces__msg__DebugArmor__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__DebugArmor__FIELDS[] = {
  {
    {rm_interfaces__msg__DebugArmor__FIELD_NAME__center_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__DebugArmor__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__DebugArmor__FIELD_NAME__light_ratio, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__DebugArmor__FIELD_NAME__center_distance, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__DebugArmor__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__DebugArmor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__DebugArmor__TYPE_NAME, 28, 28},
      {rm_interfaces__msg__DebugArmor__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 center_x\n"
  "string type\n"
  "float32 light_ratio\n"
  "float32 center_distance\n"
  "float32 angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__DebugArmor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__DebugArmor__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__DebugArmor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__DebugArmor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
