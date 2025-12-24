// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/OperatorCommand.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/operator_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__OperatorCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x69, 0xc8, 0x15, 0x1d, 0xe4, 0x36, 0x91,
      0x11, 0x87, 0x5e, 0x60, 0xd9, 0x39, 0x54, 0xd5,
      0x26, 0xc2, 0xb5, 0x98, 0xfd, 0x69, 0x40, 0x21,
      0x0b, 0x2f, 0x2f, 0xf6, 0x3d, 0x15, 0xed, 0xc9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rm_interfaces__msg__OperatorCommand__TYPE_NAME[] = "rm_interfaces/msg/OperatorCommand";

// Define type names, field names, and default values
static char rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_retreating[] = "is_retreating";
static char rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_drone_avoiding[] = "is_drone_avoiding";
static char rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_outpost_attacking[] = "is_outpost_attacking";
static char rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_spin[] = "is_spin";
static char rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_buyshut[] = "is_buyshut";
static char rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_attackqs[] = "is_attackqs";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__OperatorCommand__FIELDS[] = {
  {
    {rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_retreating, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_drone_avoiding, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_outpost_attacking, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_spin, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_buyshut, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__OperatorCommand__FIELD_NAME__is_attackqs, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__OperatorCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__OperatorCommand__TYPE_NAME, 33, 33},
      {rm_interfaces__msg__OperatorCommand__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 is_retreating\n"
  "uint8 is_drone_avoiding\n"
  "uint8 is_outpost_attacking\n"
  "uint8 is_spin\n"
  "uint8 is_buyshut\n"
  "uint8 is_attackqs";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__OperatorCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__OperatorCommand__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 119, 119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__OperatorCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__OperatorCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
