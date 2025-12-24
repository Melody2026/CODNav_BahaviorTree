// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/Measurement.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/measurement__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__Measurement__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0xde, 0xa8, 0x65, 0x73, 0x56, 0x5c, 0x5d,
      0x9a, 0x01, 0x03, 0x54, 0x1b, 0x34, 0xfc, 0x4e,
      0x0d, 0xcb, 0x61, 0xf2, 0xc0, 0xd9, 0x15, 0x14,
      0x36, 0x83, 0xd5, 0x41, 0x9b, 0xf2, 0xea, 0x15,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_interfaces__msg__Measurement__TYPE_NAME[] = "rm_interfaces/msg/Measurement";

// Define type names, field names, and default values
static char rm_interfaces__msg__Measurement__FIELD_NAME__x[] = "x";
static char rm_interfaces__msg__Measurement__FIELD_NAME__y[] = "y";
static char rm_interfaces__msg__Measurement__FIELD_NAME__z[] = "z";
static char rm_interfaces__msg__Measurement__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__Measurement__FIELDS[] = {
  {
    {rm_interfaces__msg__Measurement__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__Measurement__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__Measurement__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__Measurement__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__Measurement__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__Measurement__TYPE_NAME, 29, 29},
      {rm_interfaces__msg__Measurement__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__Measurement__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__Measurement__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__Measurement__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__Measurement__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
