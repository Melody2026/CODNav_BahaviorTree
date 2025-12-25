// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/judge_system_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"
#include "rm_interfaces/msg/detail/judge_system_data__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace rm_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rm_interfaces::msg::OperatorCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rm_interfaces::msg::OperatorCommand &);
size_t get_serialized_size(
  const rm_interfaces::msg::OperatorCommand &,
  size_t current_alignment);
size_t
max_serialized_size_OperatorCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const rm_interfaces::msg::OperatorCommand &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const rm_interfaces::msg::OperatorCommand &,
  size_t current_alignment);
size_t
max_serialized_size_key_OperatorCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rm_interfaces


namespace rm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
cdr_serialize(
  const rm_interfaces::msg::JudgeSystemData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: game_status
  cdr << ros_message.game_status;

  // Member: remaining_time
  cdr << ros_message.remaining_time;

  // Member: blood
  cdr << ros_message.blood;

  // Member: outpost_hp
  cdr << ros_message.outpost_hp;

  // Member: is_lowpower
  cdr << ros_message.is_lowpower;

  // Member: hp
  cdr << ros_message.hp;

  // Member: shut_num
  cdr << ros_message.shut_num;

  // Member: qs_hp
  cdr << ros_message.qs_hp;

  // Member: current_hp
  cdr << ros_message.current_hp;

  // Member: center_gain_point
  cdr << ros_message.center_gain_point;

  // Member: friendly_supply_non_zone_exchange
  cdr << ros_message.friendly_supply_non_zone_exchange;

  // Member: stage_remain_time
  cdr << ros_message.stage_remain_time;

  // Member: game_type
  cdr << ros_message.game_type;

  // Member: game_progress
  cdr << ros_message.game_progress;

  // Member: dm_qs_hp
  cdr << ros_message.dm_qs_hp;

  // Member: zone_status
  cdr << ros_message.zone_status;

  // Member: position_x
  cdr << ros_message.position_x;

  // Member: position_y
  cdr << ros_message.position_y;

  // Member: operator_command
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.operator_command,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_interfaces::msg::JudgeSystemData & ros_message)
{
  // Member: game_status
  cdr >> ros_message.game_status;

  // Member: remaining_time
  cdr >> ros_message.remaining_time;

  // Member: blood
  cdr >> ros_message.blood;

  // Member: outpost_hp
  cdr >> ros_message.outpost_hp;

  // Member: is_lowpower
  cdr >> ros_message.is_lowpower;

  // Member: hp
  cdr >> ros_message.hp;

  // Member: shut_num
  cdr >> ros_message.shut_num;

  // Member: qs_hp
  cdr >> ros_message.qs_hp;

  // Member: current_hp
  cdr >> ros_message.current_hp;

  // Member: center_gain_point
  cdr >> ros_message.center_gain_point;

  // Member: friendly_supply_non_zone_exchange
  cdr >> ros_message.friendly_supply_non_zone_exchange;

  // Member: stage_remain_time
  cdr >> ros_message.stage_remain_time;

  // Member: game_type
  cdr >> ros_message.game_type;

  // Member: game_progress
  cdr >> ros_message.game_progress;

  // Member: dm_qs_hp
  cdr >> ros_message.dm_qs_hp;

  // Member: zone_status
  cdr >> ros_message.zone_status;

  // Member: position_x
  cdr >> ros_message.position_x;

  // Member: position_y
  cdr >> ros_message.position_y;

  // Member: operator_command
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.operator_command);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
get_serialized_size(
  const rm_interfaces::msg::JudgeSystemData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: game_status
  {
    size_t item_size = sizeof(ros_message.game_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: remaining_time
  {
    size_t item_size = sizeof(ros_message.remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blood
  {
    size_t item_size = sizeof(ros_message.blood);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: outpost_hp
  {
    size_t item_size = sizeof(ros_message.outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_lowpower
  {
    size_t item_size = sizeof(ros_message.is_lowpower);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hp
  {
    size_t item_size = sizeof(ros_message.hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: shut_num
  {
    size_t item_size = sizeof(ros_message.shut_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: qs_hp
  {
    size_t item_size = sizeof(ros_message.qs_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_hp
  {
    size_t item_size = sizeof(ros_message.current_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: center_gain_point
  {
    size_t item_size = sizeof(ros_message.center_gain_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: friendly_supply_non_zone_exchange
  {
    size_t item_size = sizeof(ros_message.friendly_supply_non_zone_exchange);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stage_remain_time
  {
    size_t item_size = sizeof(ros_message.stage_remain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: game_type
  {
    size_t item_size = sizeof(ros_message.game_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: game_progress
  {
    size_t item_size = sizeof(ros_message.game_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dm_qs_hp
  {
    size_t item_size = sizeof(ros_message.dm_qs_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: zone_status
  {
    size_t item_size = sizeof(ros_message.zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: position_x
  {
    size_t item_size = sizeof(ros_message.position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: position_y
  {
    size_t item_size = sizeof(ros_message.position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: operator_command
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.operator_command, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
max_serialized_size_JudgeSystemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: game_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: remaining_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: blood
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: outpost_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: is_lowpower
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: shut_num
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: qs_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: current_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: center_gain_point
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: friendly_supply_non_zone_exchange
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: stage_remain_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: game_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: game_progress
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dm_qs_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: zone_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: position_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: position_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: operator_command
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_OperatorCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_interfaces::msg::JudgeSystemData;
    is_plain =
      (
      offsetof(DataType, operator_command) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
cdr_serialize_key(
  const rm_interfaces::msg::JudgeSystemData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: game_status
  cdr << ros_message.game_status;

  // Member: remaining_time
  cdr << ros_message.remaining_time;

  // Member: blood
  cdr << ros_message.blood;

  // Member: outpost_hp
  cdr << ros_message.outpost_hp;

  // Member: is_lowpower
  cdr << ros_message.is_lowpower;

  // Member: hp
  cdr << ros_message.hp;

  // Member: shut_num
  cdr << ros_message.shut_num;

  // Member: qs_hp
  cdr << ros_message.qs_hp;

  // Member: current_hp
  cdr << ros_message.current_hp;

  // Member: center_gain_point
  cdr << ros_message.center_gain_point;

  // Member: friendly_supply_non_zone_exchange
  cdr << ros_message.friendly_supply_non_zone_exchange;

  // Member: stage_remain_time
  cdr << ros_message.stage_remain_time;

  // Member: game_type
  cdr << ros_message.game_type;

  // Member: game_progress
  cdr << ros_message.game_progress;

  // Member: dm_qs_hp
  cdr << ros_message.dm_qs_hp;

  // Member: zone_status
  cdr << ros_message.zone_status;

  // Member: position_x
  cdr << ros_message.position_x;

  // Member: position_y
  cdr << ros_message.position_y;

  // Member: operator_command
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.operator_command,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
get_serialized_size_key(
  const rm_interfaces::msg::JudgeSystemData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: game_status
  {
    size_t item_size = sizeof(ros_message.game_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: remaining_time
  {
    size_t item_size = sizeof(ros_message.remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: blood
  {
    size_t item_size = sizeof(ros_message.blood);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: outpost_hp
  {
    size_t item_size = sizeof(ros_message.outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_lowpower
  {
    size_t item_size = sizeof(ros_message.is_lowpower);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: hp
  {
    size_t item_size = sizeof(ros_message.hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: shut_num
  {
    size_t item_size = sizeof(ros_message.shut_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: qs_hp
  {
    size_t item_size = sizeof(ros_message.qs_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_hp
  {
    size_t item_size = sizeof(ros_message.current_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: center_gain_point
  {
    size_t item_size = sizeof(ros_message.center_gain_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: friendly_supply_non_zone_exchange
  {
    size_t item_size = sizeof(ros_message.friendly_supply_non_zone_exchange);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stage_remain_time
  {
    size_t item_size = sizeof(ros_message.stage_remain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: game_type
  {
    size_t item_size = sizeof(ros_message.game_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: game_progress
  {
    size_t item_size = sizeof(ros_message.game_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dm_qs_hp
  {
    size_t item_size = sizeof(ros_message.dm_qs_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: zone_status
  {
    size_t item_size = sizeof(ros_message.zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: position_x
  {
    size_t item_size = sizeof(ros_message.position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: position_y
  {
    size_t item_size = sizeof(ros_message.position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: operator_command
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.operator_command, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
max_serialized_size_key_JudgeSystemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: game_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remaining_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blood
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: outpost_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: is_lowpower
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: shut_num
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: qs_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: current_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: center_gain_point
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: friendly_supply_non_zone_exchange
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stage_remain_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: game_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: game_progress
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dm_qs_hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: zone_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: operator_command
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_OperatorCommand(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_interfaces::msg::JudgeSystemData;
    is_plain =
      (
      offsetof(DataType, operator_command) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _JudgeSystemData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rm_interfaces::msg::JudgeSystemData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JudgeSystemData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_interfaces::msg::JudgeSystemData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JudgeSystemData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_interfaces::msg::JudgeSystemData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JudgeSystemData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JudgeSystemData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JudgeSystemData__callbacks = {
  "rm_interfaces::msg",
  "JudgeSystemData",
  _JudgeSystemData__cdr_serialize,
  _JudgeSystemData__cdr_deserialize,
  _JudgeSystemData__get_serialized_size,
  _JudgeSystemData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JudgeSystemData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JudgeSystemData__callbacks,
  get_message_typesupport_handle_function,
  &rm_interfaces__msg__JudgeSystemData__get_type_hash,
  &rm_interfaces__msg__JudgeSystemData__get_type_description,
  &rm_interfaces__msg__JudgeSystemData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_interfaces::msg::JudgeSystemData>()
{
  return &rm_interfaces::msg::typesupport_fastrtps_cpp::_JudgeSystemData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_interfaces, msg, JudgeSystemData)() {
  return &rm_interfaces::msg::typesupport_fastrtps_cpp::_JudgeSystemData__handle;
}

#ifdef __cplusplus
}
#endif
