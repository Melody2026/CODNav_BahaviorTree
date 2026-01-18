// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/serial_receive_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__SerialReceiveData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0xaf, 0x4a, 0x71, 0x9e, 0x34, 0x23, 0x61,
      0x50, 0xd6, 0x0a, 0x19, 0x43, 0x25, 0x39, 0x9c,
      0xf3, 0x7b, 0xe4, 0x17, 0xaf, 0xd4, 0x1e, 0x27,
      0x64, 0x0c, 0xc0, 0x8b, 0x35, 0x18, 0x0b, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rm_interfaces/msg/detail/point2d__functions.h"
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rm_interfaces__msg__JudgeSystemData__EXPECTED_HASH = {1, {
    0x3a, 0xfa, 0x3c, 0x6c, 0xf2, 0x4d, 0x5a, 0x3d,
    0x4d, 0x73, 0x66, 0xe0, 0x7e, 0x73, 0x1f, 0x40,
    0x7b, 0x77, 0x5a, 0x6a, 0xf6, 0x32, 0x2a, 0xd4,
    0x3a, 0xc9, 0xcc, 0x38, 0xca, 0xb7, 0x5f, 0xcb,
  }};
static const rosidl_type_hash_t rm_interfaces__msg__Point2d__EXPECTED_HASH = {1, {
    0x80, 0xa9, 0x10, 0xe6, 0x6a, 0xf4, 0x73, 0xa6,
    0x81, 0x96, 0x1d, 0x99, 0x66, 0xf6, 0x43, 0xd4,
    0x23, 0x89, 0x2b, 0x87, 0xae, 0xe1, 0x5c, 0xe2,
    0x51, 0x38, 0xda, 0xb7, 0x3e, 0x21, 0x7d, 0x8e,
  }};
#endif

static char rm_interfaces__msg__SerialReceiveData__TYPE_NAME[] = "rm_interfaces/msg/SerialReceiveData";
static char rm_interfaces__msg__JudgeSystemData__TYPE_NAME[] = "rm_interfaces/msg/JudgeSystemData";
static char rm_interfaces__msg__Point2d__TYPE_NAME[] = "rm_interfaces/msg/Point2d";

// Define type names, field names, and default values
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__judge_system_data[] = "judge_system_data";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__SerialReceiveData__FIELDS[] = {
  {
    {rm_interfaces__msg__SerialReceiveData__FIELD_NAME__judge_system_data, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rm_interfaces__msg__JudgeSystemData__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rm_interfaces__msg__SerialReceiveData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rm_interfaces__msg__JudgeSystemData__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__Point2d__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__SerialReceiveData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__SerialReceiveData__TYPE_NAME, 35, 35},
      {rm_interfaces__msg__SerialReceiveData__FIELDS, 1, 1},
    },
    {rm_interfaces__msg__SerialReceiveData__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&rm_interfaces__msg__JudgeSystemData__EXPECTED_HASH, rm_interfaces__msg__JudgeSystemData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rm_interfaces__msg__JudgeSystemData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rm_interfaces__msg__Point2d__EXPECTED_HASH, rm_interfaces__msg__Point2d__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rm_interfaces__msg__Point2d__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "JudgeSystemData judge_system_data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__SerialReceiveData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__SerialReceiveData__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__SerialReceiveData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__SerialReceiveData__get_individual_type_description_source(NULL),
    sources[1] = *rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(NULL);
    sources[2] = *rm_interfaces__msg__Point2d__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
