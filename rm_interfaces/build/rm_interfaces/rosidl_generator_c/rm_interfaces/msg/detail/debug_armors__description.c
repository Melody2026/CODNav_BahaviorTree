// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/debug_armors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__DebugArmors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0xf9, 0x74, 0x0f, 0x32, 0x45, 0x04, 0x2a,
      0xf1, 0xb9, 0xa6, 0x22, 0x31, 0x09, 0x96, 0x23,
      0x2c, 0xe3, 0x02, 0xce, 0x56, 0x4f, 0xde, 0x7f,
      0xdf, 0x9d, 0x7f, 0x87, 0xa0, 0xd1, 0xfe, 0x13,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rm_interfaces/msg/detail/debug_armor__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rm_interfaces__msg__DebugArmor__EXPECTED_HASH = {1, {
    0x21, 0x84, 0x7e, 0x48, 0x8b, 0xbd, 0xce, 0x6d,
    0xb2, 0x32, 0x4a, 0x3c, 0x3f, 0x75, 0x93, 0xbd,
    0xad, 0x53, 0xc6, 0xd5, 0xe0, 0x8f, 0xac, 0x93,
    0x82, 0xb7, 0x8f, 0xaf, 0x30, 0x4b, 0x88, 0x11,
  }};
#endif

static char rm_interfaces__msg__DebugArmors__TYPE_NAME[] = "rm_interfaces/msg/DebugArmors";
static char rm_interfaces__msg__DebugArmor__TYPE_NAME[] = "rm_interfaces/msg/DebugArmor";

// Define type names, field names, and default values
static char rm_interfaces__msg__DebugArmors__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__DebugArmors__FIELDS[] = {
  {
    {rm_interfaces__msg__DebugArmors__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rm_interfaces__msg__DebugArmor__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rm_interfaces__msg__DebugArmors__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rm_interfaces__msg__DebugArmor__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__DebugArmors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__DebugArmors__TYPE_NAME, 29, 29},
      {rm_interfaces__msg__DebugArmors__FIELDS, 1, 1},
    },
    {rm_interfaces__msg__DebugArmors__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rm_interfaces__msg__DebugArmor__EXPECTED_HASH, rm_interfaces__msg__DebugArmor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rm_interfaces__msg__DebugArmor__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "DebugArmor[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__DebugArmors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__DebugArmors__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__DebugArmors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__DebugArmors__get_individual_type_description_source(NULL),
    sources[1] = *rm_interfaces__msg__DebugArmor__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
