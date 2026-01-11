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
      0x08, 0xc6, 0xff, 0x63, 0xe5, 0x6d, 0x2f, 0xdb,
      0x91, 0xb9, 0x4f, 0xc1, 0x15, 0x7e, 0x58, 0xe1,
      0x4f, 0x54, 0xe4, 0x2d, 0xd3, 0xf1, 0x1a, 0x3f,
      0x7c, 0xb1, 0x25, 0x83, 0x84, 0x37, 0x81, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "rm_interfaces/msg/detail/operator_command__functions.h"
#include "rm_interfaces/msg/detail/point2d__functions.h"
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rm_interfaces__msg__JudgeSystemData__EXPECTED_HASH = {1, {
    0x83, 0xb3, 0x50, 0x70, 0x2a, 0x98, 0x73, 0x92,
    0x27, 0xae, 0x70, 0x0c, 0x95, 0x2b, 0x5b, 0x81,
    0xe9, 0x23, 0x98, 0x75, 0xf5, 0xbe, 0x94, 0xad,
    0x90, 0x5e, 0xb7, 0x5e, 0xfe, 0x5a, 0x93, 0xee,
  }};
static const rosidl_type_hash_t rm_interfaces__msg__OperatorCommand__EXPECTED_HASH = {1, {
    0x66, 0x69, 0xc8, 0x15, 0x1d, 0xe4, 0x36, 0x91,
    0x11, 0x87, 0x5e, 0x60, 0xd9, 0x39, 0x54, 0xd5,
    0x26, 0xc2, 0xb5, 0x98, 0xfd, 0x69, 0x40, 0x21,
    0x0b, 0x2f, 0x2f, 0xf6, 0x3d, 0x15, 0xed, 0xc9,
  }};
static const rosidl_type_hash_t rm_interfaces__msg__Point2d__EXPECTED_HASH = {1, {
    0x80, 0xa9, 0x10, 0xe6, 0x6a, 0xf4, 0x73, 0xa6,
    0x81, 0x96, 0x1d, 0x99, 0x66, 0xf6, 0x43, 0xd4,
    0x23, 0x89, 0x2b, 0x87, 0xae, 0xe1, 0x5c, 0xe2,
    0x51, 0x38, 0xda, 0xb7, 0x3e, 0x21, 0x7d, 0x8e,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char rm_interfaces__msg__SerialReceiveData__TYPE_NAME[] = "rm_interfaces/msg/SerialReceiveData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rm_interfaces__msg__JudgeSystemData__TYPE_NAME[] = "rm_interfaces/msg/JudgeSystemData";
static char rm_interfaces__msg__OperatorCommand__TYPE_NAME[] = "rm_interfaces/msg/OperatorCommand";
static char rm_interfaces__msg__Point2d__TYPE_NAME[] = "rm_interfaces/msg/Point2d";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__header[] = "header";
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__mode[] = "mode";
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__bullet_speed[] = "bullet_speed";
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__roll[] = "roll";
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__yaw[] = "yaw";
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__pitch[] = "pitch";
static char rm_interfaces__msg__SerialReceiveData__FIELD_NAME__judge_system_data[] = "judge_system_data";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__SerialReceiveData__FIELDS[] = {
  {
    {rm_interfaces__msg__SerialReceiveData__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__SerialReceiveData__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__SerialReceiveData__FIELD_NAME__bullet_speed, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__SerialReceiveData__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__SerialReceiveData__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__SerialReceiveData__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
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
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__OperatorCommand__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__Point2d__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
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
      {rm_interfaces__msg__SerialReceiveData__FIELDS, 7, 7},
    },
    {rm_interfaces__msg__SerialReceiveData__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rm_interfaces__msg__JudgeSystemData__EXPECTED_HASH, rm_interfaces__msg__JudgeSystemData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rm_interfaces__msg__JudgeSystemData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rm_interfaces__msg__OperatorCommand__EXPECTED_HASH, rm_interfaces__msg__OperatorCommand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rm_interfaces__msg__OperatorCommand__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rm_interfaces__msg__Point2d__EXPECTED_HASH, rm_interfaces__msg__Point2d__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rm_interfaces__msg__Point2d__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "uint8 mode\n"
  "float32 bullet_speed\n"
  "float32 roll \n"
  "float32 yaw\n"
  "float32 pitch\n"
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
    {toplevel_type_raw_source, 128, 128},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__SerialReceiveData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__SerialReceiveData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(NULL);
    sources[3] = *rm_interfaces__msg__OperatorCommand__get_individual_type_description_source(NULL);
    sources[4] = *rm_interfaces__msg__Point2d__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
