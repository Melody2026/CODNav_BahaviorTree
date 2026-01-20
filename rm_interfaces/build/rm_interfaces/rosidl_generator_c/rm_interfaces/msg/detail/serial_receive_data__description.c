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
      0x64, 0x7f, 0x8b, 0xca, 0xc6, 0x2b, 0xa9, 0xfb,
      0x99, 0x5a, 0x91, 0x9b, 0x4d, 0x1e, 0x4d, 0x6e,
      0xd7, 0xa1, 0xcc, 0x4b, 0xa2, 0x63, 0xe9, 0xcf,
      0xce, 0x83, 0x33, 0x35, 0xb0, 0xa7, 0xb5, 0x88,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rm_interfaces__msg__JudgeSystemData__EXPECTED_HASH = {1, {
    0xbf, 0x25, 0x4b, 0x63, 0x5f, 0xbf, 0xbf, 0x39,
    0xbc, 0x21, 0xa3, 0x85, 0xad, 0xa2, 0xce, 0xaf,
    0x1a, 0x41, 0x40, 0xb2, 0xb4, 0x42, 0x74, 0x5f,
    0xed, 0x6f, 0xc3, 0xaa, 0xa9, 0x92, 0x4b, 0x41,
  }};
#endif

static char rm_interfaces__msg__SerialReceiveData__TYPE_NAME[] = "rm_interfaces/msg/SerialReceiveData";
static char rm_interfaces__msg__JudgeSystemData__TYPE_NAME[] = "rm_interfaces/msg/JudgeSystemData";

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
    {rm_interfaces__msg__SerialReceiveData__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rm_interfaces__msg__JudgeSystemData__EXPECTED_HASH, rm_interfaces__msg__JudgeSystemData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rm_interfaces__msg__JudgeSystemData__get_type_description(NULL)->type_description.fields;
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
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__SerialReceiveData__get_individual_type_description_source(NULL),
    sources[1] = *rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
