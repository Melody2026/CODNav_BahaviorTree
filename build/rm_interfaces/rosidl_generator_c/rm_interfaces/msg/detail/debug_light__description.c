// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/DebugLight.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/debug_light__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__DebugLight__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x12, 0x61, 0xde, 0xb3, 0x42, 0x73, 0x79,
      0xc8, 0x1f, 0x02, 0xe2, 0xa7, 0xbf, 0x4d, 0x05,
      0x28, 0x03, 0x68, 0xc1, 0xc9, 0x9a, 0x3e, 0x7b,
      0x5c, 0x47, 0x18, 0x5c, 0xdd, 0xcb, 0x82, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_interfaces__msg__DebugLight__TYPE_NAME[] = "rm_interfaces/msg/DebugLight";

// Define type names, field names, and default values
static char rm_interfaces__msg__DebugLight__FIELD_NAME__center_x[] = "center_x";
static char rm_interfaces__msg__DebugLight__FIELD_NAME__is_light[] = "is_light";
static char rm_interfaces__msg__DebugLight__FIELD_NAME__ratio[] = "ratio";
static char rm_interfaces__msg__DebugLight__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__DebugLight__FIELDS[] = {
  {
    {rm_interfaces__msg__DebugLight__FIELD_NAME__center_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__DebugLight__FIELD_NAME__is_light, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__DebugLight__FIELD_NAME__ratio, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__DebugLight__FIELD_NAME__angle, 5, 5},
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
rm_interfaces__msg__DebugLight__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__DebugLight__TYPE_NAME, 28, 28},
      {rm_interfaces__msg__DebugLight__FIELDS, 4, 4},
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
  "bool is_light\n"
  "float32 ratio\n"
  "float32 angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__DebugLight__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__DebugLight__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__DebugLight__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__DebugLight__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
