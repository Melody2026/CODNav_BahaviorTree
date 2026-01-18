// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/judge_system_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_interfaces/msg/detail/judge_system_data__struct.h"
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rm_interfaces/msg/detail/point2d__functions.h"  // heroposition, standard_3position

// forward declare type support functions

bool cdr_serialize_rm_interfaces__msg__Point2d(
  const rm_interfaces__msg__Point2d * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rm_interfaces__msg__Point2d(
  eprosima::fastcdr::Cdr & cdr,
  rm_interfaces__msg__Point2d * ros_message);

size_t get_serialized_size_rm_interfaces__msg__Point2d(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rm_interfaces__msg__Point2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rm_interfaces__msg__Point2d(
  const rm_interfaces__msg__Point2d * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rm_interfaces__msg__Point2d(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rm_interfaces__msg__Point2d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_interfaces, msg, Point2d)();


using _JudgeSystemData__ros_msg_type = rm_interfaces__msg__JudgeSystemData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
bool cdr_serialize_rm_interfaces__msg__JudgeSystemData(
  const rm_interfaces__msg__JudgeSystemData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: hp
  {
    cdr << ros_message->hp;
  }

  // Field name: zone_status
  {
    cdr << (ros_message->zone_status ? true : false);
  }

  // Field name: is_attacted
  {
    cdr << (ros_message->is_attacted ? true : false);
  }

  // Field name: position_x
  {
    cdr << ros_message->position_x;
  }

  // Field name: position_y
  {
    cdr << ros_message->position_y;
  }

  // Field name: heroposition
  {
    cdr_serialize_rm_interfaces__msg__Point2d(
      &ros_message->heroposition, cdr);
  }

  // Field name: standard_3position
  {
    cdr_serialize_rm_interfaces__msg__Point2d(
      &ros_message->standard_3position, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
bool cdr_deserialize_rm_interfaces__msg__JudgeSystemData(
  eprosima::fastcdr::Cdr & cdr,
  rm_interfaces__msg__JudgeSystemData * ros_message)
{
  // Field name: hp
  {
    cdr >> ros_message->hp;
  }

  // Field name: zone_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->zone_status = tmp ? true : false;
  }

  // Field name: is_attacted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_attacted = tmp ? true : false;
  }

  // Field name: position_x
  {
    cdr >> ros_message->position_x;
  }

  // Field name: position_y
  {
    cdr >> ros_message->position_y;
  }

  // Field name: heroposition
  {
    cdr_deserialize_rm_interfaces__msg__Point2d(cdr, &ros_message->heroposition);
  }

  // Field name: standard_3position
  {
    cdr_deserialize_rm_interfaces__msg__Point2d(cdr, &ros_message->standard_3position);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t get_serialized_size_rm_interfaces__msg__JudgeSystemData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JudgeSystemData__ros_msg_type * ros_message = static_cast<const _JudgeSystemData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: hp
  {
    size_t item_size = sizeof(ros_message->hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: zone_status
  {
    size_t item_size = sizeof(ros_message->zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_attacted
  {
    size_t item_size = sizeof(ros_message->is_attacted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_x
  {
    size_t item_size = sizeof(ros_message->position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_y
  {
    size_t item_size = sizeof(ros_message->position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heroposition
  current_alignment += get_serialized_size_rm_interfaces__msg__Point2d(
    &(ros_message->heroposition), current_alignment);

  // Field name: standard_3position
  current_alignment += get_serialized_size_rm_interfaces__msg__Point2d(
    &(ros_message->standard_3position), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t max_serialized_size_rm_interfaces__msg__JudgeSystemData(
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

  // Field name: hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: zone_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_attacted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: position_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heroposition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rm_interfaces__msg__Point2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: standard_3position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rm_interfaces__msg__Point2d(
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
    using DataType = rm_interfaces__msg__JudgeSystemData;
    is_plain =
      (
      offsetof(DataType, standard_3position) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
bool cdr_serialize_key_rm_interfaces__msg__JudgeSystemData(
  const rm_interfaces__msg__JudgeSystemData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: hp
  {
    cdr << ros_message->hp;
  }

  // Field name: zone_status
  {
    cdr << (ros_message->zone_status ? true : false);
  }

  // Field name: is_attacted
  {
    cdr << (ros_message->is_attacted ? true : false);
  }

  // Field name: position_x
  {
    cdr << ros_message->position_x;
  }

  // Field name: position_y
  {
    cdr << ros_message->position_y;
  }

  // Field name: heroposition
  {
    cdr_serialize_key_rm_interfaces__msg__Point2d(
      &ros_message->heroposition, cdr);
  }

  // Field name: standard_3position
  {
    cdr_serialize_key_rm_interfaces__msg__Point2d(
      &ros_message->standard_3position, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t get_serialized_size_key_rm_interfaces__msg__JudgeSystemData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JudgeSystemData__ros_msg_type * ros_message = static_cast<const _JudgeSystemData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: hp
  {
    size_t item_size = sizeof(ros_message->hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: zone_status
  {
    size_t item_size = sizeof(ros_message->zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_attacted
  {
    size_t item_size = sizeof(ros_message->is_attacted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_x
  {
    size_t item_size = sizeof(ros_message->position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_y
  {
    size_t item_size = sizeof(ros_message->position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heroposition
  current_alignment += get_serialized_size_key_rm_interfaces__msg__Point2d(
    &(ros_message->heroposition), current_alignment);

  // Field name: standard_3position
  current_alignment += get_serialized_size_key_rm_interfaces__msg__Point2d(
    &(ros_message->standard_3position), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t max_serialized_size_key_rm_interfaces__msg__JudgeSystemData(
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
  // Field name: hp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: zone_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: is_attacted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: position_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: position_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heroposition
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rm_interfaces__msg__Point2d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: standard_3position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rm_interfaces__msg__Point2d(
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
    using DataType = rm_interfaces__msg__JudgeSystemData;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rm_interfaces__msg__JudgeSystemData * ros_message = static_cast<const rm_interfaces__msg__JudgeSystemData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rm_interfaces__msg__JudgeSystemData(ros_message, cdr);
}

static bool _JudgeSystemData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rm_interfaces__msg__JudgeSystemData * ros_message = static_cast<rm_interfaces__msg__JudgeSystemData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rm_interfaces__msg__JudgeSystemData(cdr, ros_message);
}

static uint32_t _JudgeSystemData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_interfaces__msg__JudgeSystemData(
      untyped_ros_message, 0));
}

static size_t _JudgeSystemData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_interfaces__msg__JudgeSystemData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JudgeSystemData = {
  "rm_interfaces::msg",
  "JudgeSystemData",
  _JudgeSystemData__cdr_serialize,
  _JudgeSystemData__cdr_deserialize,
  _JudgeSystemData__get_serialized_size,
  _JudgeSystemData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _JudgeSystemData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JudgeSystemData,
  get_message_typesupport_handle_function,
  &rm_interfaces__msg__JudgeSystemData__get_type_hash,
  &rm_interfaces__msg__JudgeSystemData__get_type_description,
  &rm_interfaces__msg__JudgeSystemData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_interfaces, msg, JudgeSystemData)() {
  return &_JudgeSystemData__type_support;
}

#if defined(__cplusplus)
}
#endif
