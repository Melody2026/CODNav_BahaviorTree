// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/debug_lights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__DebugLights__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x1d, 0x47, 0xa9, 0xd7, 0xa6, 0x10, 0x93,
      0xd3, 0xaf, 0x55, 0xfe, 0xa2, 0x4a, 0xe2, 0x82,
      0x1e, 0xfd, 0x9b, 0xf9, 0xc0, 0xd7, 0x27, 0x63,
      0x3b, 0x11, 0xb5, 0xc0, 0x4e, 0xc0, 0x5a, 0x87,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rm_interfaces/msg/detail/debug_light__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rm_interfaces__msg__DebugLight__EXPECTED_HASH = {1, {
    0xca, 0x12, 0x61, 0xde, 0xb3, 0x42, 0x73, 0x79,
    0xc8, 0x1f, 0x02, 0xe2, 0xa7, 0xbf, 0x4d, 0x05,
    0x28, 0x03, 0x68, 0xc1, 0xc9, 0x9a, 0x3e, 0x7b,
    0x5c, 0x47, 0x18, 0x5c, 0xdd, 0xcb, 0x82, 0x69,
  }};
#endif

static char rm_interfaces__msg__DebugLights__TYPE_NAME[] = "rm_interfaces/msg/DebugLights";
static char rm_interfaces__msg__DebugLight__TYPE_NAME[] = "rm_interfaces/msg/DebugLight";

// Define type names, field names, and default values
static char rm_interfaces__msg__DebugLights__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__DebugLights__FIELDS[] = {
  {
    {rm_interfaces__msg__DebugLights__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rm_interfaces__msg__DebugLight__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rm_interfaces__msg__DebugLights__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rm_interfaces__msg__DebugLight__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__DebugLights__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__DebugLights__TYPE_NAME, 29, 29},
      {rm_interfaces__msg__DebugLights__FIELDS, 1, 1},
    },
    {rm_interfaces__msg__DebugLights__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rm_interfaces__msg__DebugLight__EXPECTED_HASH, rm_interfaces__msg__DebugLight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rm_interfaces__msg__DebugLight__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "DebugLight[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__DebugLights__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__DebugLights__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__DebugLights__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__DebugLights__get_individual_type_description_source(NULL),
    sources[1] = *rm_interfaces__msg__DebugLight__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
