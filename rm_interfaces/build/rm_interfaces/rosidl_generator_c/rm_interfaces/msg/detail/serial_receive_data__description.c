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
      0x01, 0xcf, 0x82, 0x20, 0xa2, 0x1b, 0x57, 0x94,
      0xa5, 0x01, 0x00, 0xf7, 0x58, 0xe5, 0x48, 0x5d,
      0x1d, 0x6d, 0x36, 0xd0, 0xc2, 0xff, 0x68, 0xb6,
      0x74, 0x38, 0xf1, 0xc1, 0x50, 0x56, 0xfd, 0xfe,
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
    0x4f, 0xa2, 0x72, 0x4b, 0xaa, 0x9f, 0xa0, 0x18,
    0x3b, 0x86, 0x2b, 0xae, 0x1e, 0xfa, 0xc8, 0x4b,
    0xee, 0x29, 0xb7, 0x55, 0x86, 0x1d, 0x93, 0x46,
    0x51, 0xb4, 0x2a, 0xe8, 0xf1, 0xa0, 0xa2, 0x51,
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
