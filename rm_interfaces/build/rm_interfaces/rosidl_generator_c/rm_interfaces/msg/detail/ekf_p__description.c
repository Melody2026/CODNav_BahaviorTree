// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/EkfP.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/ekf_p__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__EkfP__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0xb2, 0xc4, 0x48, 0xc4, 0x5b, 0x34, 0x56,
      0x33, 0x92, 0x54, 0xdb, 0x20, 0x71, 0x4f, 0x01,
      0x78, 0xa9, 0x4f, 0x2d, 0x9b, 0xf7, 0xb3, 0x83,
      0xd0, 0xc6, 0xc6, 0x62, 0x0e, 0xb5, 0x70, 0x3a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_interfaces__msg__EkfP__TYPE_NAME[] = "rm_interfaces/msg/EkfP";

// Define type names, field names, and default values
static char rm_interfaces__msg__EkfP__FIELD_NAME__mean_p[] = "mean_p";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__EkfP__FIELDS[] = {
  {
    {rm_interfaces__msg__EkfP__FIELD_NAME__mean_p, 6, 6},
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
rm_interfaces__msg__EkfP__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__EkfP__TYPE_NAME, 22, 22},
      {rm_interfaces__msg__EkfP__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 mean_p";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__EkfP__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__EkfP__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__EkfP__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__EkfP__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
