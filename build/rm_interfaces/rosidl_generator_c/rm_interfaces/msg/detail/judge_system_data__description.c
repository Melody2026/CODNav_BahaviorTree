// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__JudgeSystemData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0x7f, 0xb7, 0xef, 0x33, 0x45, 0x33, 0x06,
      0xc6, 0xac, 0xaa, 0x7c, 0xf8, 0x11, 0x4c, 0xae,
      0x9f, 0x01, 0x0e, 0x57, 0xef, 0xe8, 0xd1, 0x63,
      0xa1, 0xc0, 0x45, 0x8d, 0xfa, 0xb0, 0x4d, 0xd2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rm_interfaces/msg/detail/operator_command__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rm_interfaces__msg__OperatorCommand__EXPECTED_HASH = {1, {
    0x66, 0x69, 0xc8, 0x15, 0x1d, 0xe4, 0x36, 0x91,
    0x11, 0x87, 0x5e, 0x60, 0xd9, 0x39, 0x54, 0xd5,
    0x26, 0xc2, 0xb5, 0x98, 0xfd, 0x69, 0x40, 0x21,
    0x0b, 0x2f, 0x2f, 0xf6, 0x3d, 0x15, 0xed, 0xc9,
  }};
#endif

static char rm_interfaces__msg__JudgeSystemData__TYPE_NAME[] = "rm_interfaces/msg/JudgeSystemData";
static char rm_interfaces__msg__OperatorCommand__TYPE_NAME[] = "rm_interfaces/msg/OperatorCommand";

// Define type names, field names, and default values
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__game_status[] = "game_status";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__remaining_time[] = "remaining_time";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__blood[] = "blood";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__outpost_hp[] = "outpost_hp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_lowpower[] = "is_lowpower";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__hp[] = "hp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__shut_num[] = "shut_num";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__qs_hp[] = "qs_hp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__current_hp[] = "current_hp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__center_gain_point[] = "center_gain_point";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__friendly_supply_non_zone_exchange[] = "friendly_supply_non_zone_exchange";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__stage_remain_time[] = "stage_remain_time";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__game_type[] = "game_type";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__game_progress[] = "game_progress";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__dm_qs_hp[] = "dm_qs_hp";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__zone_status[] = "zone_status";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_x[] = "position_x";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_y[] = "position_y";
static char rm_interfaces__msg__JudgeSystemData__FIELD_NAME__operator_command[] = "operator_command";

static rosidl_runtime_c__type_description__Field rm_interfaces__msg__JudgeSystemData__FIELDS[] = {
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__game_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__remaining_time, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__blood, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__outpost_hp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__is_lowpower, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__hp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__shut_num, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__qs_hp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__current_hp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__center_gain_point, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__friendly_supply_non_zone_exchange, 33, 33},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__stage_remain_time, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__game_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__game_progress, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__dm_qs_hp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__zone_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_x, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__position_y, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rm_interfaces__msg__JudgeSystemData__FIELD_NAME__operator_command, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rm_interfaces__msg__OperatorCommand__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rm_interfaces__msg__JudgeSystemData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rm_interfaces__msg__OperatorCommand__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__JudgeSystemData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rm_interfaces__msg__JudgeSystemData__TYPE_NAME, 33, 33},
      {rm_interfaces__msg__JudgeSystemData__FIELDS, 19, 19},
    },
    {rm_interfaces__msg__JudgeSystemData__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rm_interfaces__msg__OperatorCommand__EXPECTED_HASH, rm_interfaces__msg__OperatorCommand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rm_interfaces__msg__OperatorCommand__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 game_status\n"
  "int16 remaining_time\n"
  "int16 blood\n"
  "int16 outpost_hp\n"
  "uint8 is_lowpower\n"
  "float32 hp\n"
  "int16 shut_num\n"
  "int16 qs_hp\n"
  "uint8 current_hp\n"
  "uint8 center_gain_point\n"
  "uint8 friendly_supply_non_zone_exchange\n"
  "uint8 stage_remain_time\n"
  "uint8 game_type\n"
  "uint8 game_progress\n"
  "int16 dm_qs_hp\n"
  "int32 zone_status\n"
  "float32 position_x\n"
  "float32 position_y\n"
  "OperatorCommand operator_command";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rm_interfaces__msg__JudgeSystemData__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 369, 369},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__JudgeSystemData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rm_interfaces__msg__JudgeSystemData__get_individual_type_description_source(NULL),
    sources[1] = *rm_interfaces__msg__OperatorCommand__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
