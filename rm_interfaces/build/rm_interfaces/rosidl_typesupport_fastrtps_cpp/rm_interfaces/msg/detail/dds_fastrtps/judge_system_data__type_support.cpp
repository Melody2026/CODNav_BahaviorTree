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
  const rm_interfaces::msg::Point2d &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rm_interfaces::msg::Point2d &);
size_t get_serialized_size(
  const rm_interfaces::msg::Point2d &,
  size_t current_alignment);
size_t
max_serialized_size_Point2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const rm_interfaces::msg::Point2d &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const rm_interfaces::msg::Point2d &,
  size_t current_alignment);
size_t
max_serialized_size_key_Point2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rm_interfaces

// functions for rm_interfaces::msg::Point2d already declared above


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
  // Member: hp
  cdr << ros_message.hp;

  // Member: zone_status
  cdr << (ros_message.zone_status ? true : false);

  // Member: is_attacted
  cdr << (ros_message.is_attacted ? true : false);

  // Member: position_x
  cdr << ros_message.position_x;

  // Member: position_y
  cdr << ros_message.position_y;

  // Member: heroposition
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.heroposition,
    cdr);

  // Member: standard_3position
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.standard_3position,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_interfaces::msg::JudgeSystemData & ros_message)
{
  // Member: hp
  cdr >> ros_message.hp;

  // Member: zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.zone_status = tmp ? true : false;
  }

  // Member: is_attacted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_attacted = tmp ? true : false;
  }

  // Member: position_x
  cdr >> ros_message.position_x;

  // Member: position_y
  cdr >> ros_message.position_y;

  // Member: heroposition
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.heroposition);

  // Member: standard_3position
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.standard_3position);

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

  // Member: hp
  {
    size_t item_size = sizeof(ros_message.hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: zone_status
  {
    size_t item_size = sizeof(ros_message.zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_attacted
  {
    size_t item_size = sizeof(ros_message.is_attacted);
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

  // Member: heroposition
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.heroposition, current_alignment);

  // Member: standard_3position
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.standard_3position, current_alignment);

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

  // Member: hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: zone_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: is_attacted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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
  // Member: heroposition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: standard_3position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2d(
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
      offsetof(DataType, standard_3position) +
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
  // Member: hp
  cdr << ros_message.hp;

  // Member: zone_status
  cdr << (ros_message.zone_status ? true : false);

  // Member: is_attacted
  cdr << (ros_message.is_attacted ? true : false);

  // Member: position_x
  cdr << ros_message.position_x;

  // Member: position_y
  cdr << ros_message.position_y;

  // Member: heroposition
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.heroposition,
    cdr);

  // Member: standard_3position
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.standard_3position,
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

  // Member: hp
  {
    size_t item_size = sizeof(ros_message.hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: zone_status
  {
    size_t item_size = sizeof(ros_message.zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_attacted
  {
    size_t item_size = sizeof(ros_message.is_attacted);
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

  // Member: heroposition
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.heroposition, current_alignment);

  // Member: standard_3position
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.standard_3position, current_alignment);

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

  // Member: hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: zone_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_attacted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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

  // Member: heroposition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Point2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: standard_3position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Point2d(
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
      offsetof(DataType, standard_3position) +
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
