// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/Point2d.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/point2d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__Point2d__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0xa9, 0x10, 0xe6, 0x6a, 0xf4, 0x73, 0xa6,
      0x81, 0x96, 0x1d, 0x99, 0x66, 0xf6, 0x43, 0xd4,
      0x23, 0x89, 0x2b, 0x87, 0xae, 0xe1, 0x5c, 0xe2,
      0x51, 0x38, 0xda, 0xb7, 0x3e, 0x21, 0x7d, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_interfaces__msg__Point2d__TYPE_NAME[] = "rm_interfaces/msg/Point2d";

// Define type names, field names, and default values
static char rm_interfaces__msg__Point2d__FIELD_NAME__x[] = "x";
static char rm_interfaces__msg__Point2d__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__Point2d__FIELDS[] = {
  {
    {rm_interfaces__msg__Point2d__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__Point2d__FIELD_NAME__y, 1, 1},
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
rm_interfaces__msg__Point2d__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__Point2d__TYPE_NAME, 25, 25},
      {rm_interfaces__msg__Point2d__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__Point2d__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__Point2d__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__Point2d__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__Point2d__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
