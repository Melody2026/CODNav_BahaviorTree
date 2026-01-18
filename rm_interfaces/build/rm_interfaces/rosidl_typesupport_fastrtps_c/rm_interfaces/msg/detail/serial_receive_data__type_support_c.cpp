// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/serial_receive_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_interfaces/msg/detail/serial_receive_data__struct.h"
#include "rm_interfaces/msg/detail/serial_receive_data__functions.h"
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

#include "rm_interfaces/msg/detail/judge_system_data__functions.h"  // judge_system_data

// forward declare type support functions

bool cdr_serialize_rm_interfaces__msg__JudgeSystemData(
  const rm_interfaces__msg__JudgeSystemData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_rm_interfaces__msg__JudgeSystemData(
  eprosima::fastcdr::Cdr & cdr,
  rm_interfaces__msg__JudgeSystemData * ros_message);

size_t get_serialized_size_rm_interfaces__msg__JudgeSystemData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rm_interfaces__msg__JudgeSystemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_rm_interfaces__msg__JudgeSystemData(
  const rm_interfaces__msg__JudgeSystemData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_rm_interfaces__msg__JudgeSystemData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_rm_interfaces__msg__JudgeSystemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_interfaces, msg, JudgeSystemData)();


using _SerialReceiveData__ros_msg_type = rm_interfaces__msg__SerialReceiveData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
bool cdr_serialize_rm_interfaces__msg__SerialReceiveData(
  const rm_interfaces__msg__SerialReceiveData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: judge_system_data
  {
    cdr_serialize_rm_interfaces__msg__JudgeSystemData(
      &ros_message->judge_system_data, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
bool cdr_deserialize_rm_interfaces__msg__SerialReceiveData(
  eprosima::fastcdr::Cdr & cdr,
  rm_interfaces__msg__SerialReceiveData * ros_message)
{
  // Field name: judge_system_data
  {
    cdr_deserialize_rm_interfaces__msg__JudgeSystemData(cdr, &ros_message->judge_system_data);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t get_serialized_size_rm_interfaces__msg__SerialReceiveData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SerialReceiveData__ros_msg_type * ros_message = static_cast<const _SerialReceiveData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: judge_system_data
  current_alignment += get_serialized_size_rm_interfaces__msg__JudgeSystemData(
    &(ros_message->judge_system_data), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t max_serialized_size_rm_interfaces__msg__SerialReceiveData(
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

  // Field name: judge_system_data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rm_interfaces__msg__JudgeSystemData(
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
    using DataType = rm_interfaces__msg__SerialReceiveData;
    is_plain =
      (
      offsetof(DataType, judge_system_data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
bool cdr_serialize_key_rm_interfaces__msg__SerialReceiveData(
  const rm_interfaces__msg__SerialReceiveData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: judge_system_data
  {
    cdr_serialize_key_rm_interfaces__msg__JudgeSystemData(
      &ros_message->judge_system_data, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t get_serialized_size_key_rm_interfaces__msg__SerialReceiveData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SerialReceiveData__ros_msg_type * ros_message = static_cast<const _SerialReceiveData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: judge_system_data
  current_alignment += get_serialized_size_key_rm_interfaces__msg__JudgeSystemData(
    &(ros_message->judge_system_data), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t max_serialized_size_key_rm_interfaces__msg__SerialReceiveData(
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
  // Field name: judge_system_data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_rm_interfaces__msg__JudgeSystemData(
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
    using DataType = rm_interfaces__msg__SerialReceiveData;
    is_plain =
      (
      offsetof(DataType, judge_system_data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SerialReceiveData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rm_interfaces__msg__SerialReceiveData * ros_message = static_cast<const rm_interfaces__msg__SerialReceiveData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rm_interfaces__msg__SerialReceiveData(ros_message, cdr);
}

static bool _SerialReceiveData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rm_interfaces__msg__SerialReceiveData * ros_message = static_cast<rm_interfaces__msg__SerialReceiveData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rm_interfaces__msg__SerialReceiveData(cdr, ros_message);
}

static uint32_t _SerialReceiveData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_interfaces__msg__SerialReceiveData(
      untyped_ros_message, 0));
}

static size_t _SerialReceiveData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_interfaces__msg__SerialReceiveData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SerialReceiveData = {
  "rm_interfaces::msg",
  "SerialReceiveData",
  _SerialReceiveData__cdr_serialize,
  _SerialReceiveData__cdr_deserialize,
  _SerialReceiveData__get_serialized_size,
  _SerialReceiveData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SerialReceiveData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SerialReceiveData,
  get_message_typesupport_handle_function,
  &rm_interfaces__msg__SerialReceiveData__get_type_hash,
  &rm_interfaces__msg__SerialReceiveData__get_type_description,
  &rm_interfaces__msg__SerialReceiveData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_interfaces, msg, SerialReceiveData)() {
  return &_SerialReceiveData__type_support;
}

#if defined(__cplusplus)
}
#endif
