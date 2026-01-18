// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/serial_receive_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rm_interfaces/msg/detail/serial_receive_data__functions.h"
#include "rm_interfaces/msg/detail/serial_receive_data__struct.hpp"

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
  const rm_interfaces::msg::JudgeSystemData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rm_interfaces::msg::JudgeSystemData &);
size_t get_serialized_size(
  const rm_interfaces::msg::JudgeSystemData &,
  size_t current_alignment);
size_t
max_serialized_size_JudgeSystemData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const rm_interfaces::msg::JudgeSystemData &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const rm_interfaces::msg::JudgeSystemData &,
  size_t current_alignment);
size_t
max_serialized_size_key_JudgeSystemData(
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
  const rm_interfaces::msg::SerialReceiveData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: judge_system_data
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.judge_system_data,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rm_interfaces::msg::SerialReceiveData & ros_message)
{
  // Member: judge_system_data
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.judge_system_data);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
get_serialized_size(
  const rm_interfaces::msg::SerialReceiveData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: judge_system_data
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.judge_system_data, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
max_serialized_size_SerialReceiveData(
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

  // Member: judge_system_data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_JudgeSystemData(
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
    using DataType = rm_interfaces::msg::SerialReceiveData;
    is_plain =
      (
      offsetof(DataType, judge_system_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
cdr_serialize_key(
  const rm_interfaces::msg::SerialReceiveData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: judge_system_data
  rm_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.judge_system_data,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
get_serialized_size_key(
  const rm_interfaces::msg::SerialReceiveData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: judge_system_data
  current_alignment +=
    rm_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.judge_system_data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rm_interfaces
max_serialized_size_key_SerialReceiveData(
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

  // Member: judge_system_data
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rm_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_JudgeSystemData(
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
    using DataType = rm_interfaces::msg::SerialReceiveData;
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
  auto typed_message =
    static_cast<const rm_interfaces::msg::SerialReceiveData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SerialReceiveData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rm_interfaces::msg::SerialReceiveData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SerialReceiveData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rm_interfaces::msg::SerialReceiveData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SerialReceiveData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SerialReceiveData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SerialReceiveData__callbacks = {
  "rm_interfaces::msg",
  "SerialReceiveData",
  _SerialReceiveData__cdr_serialize,
  _SerialReceiveData__cdr_deserialize,
  _SerialReceiveData__get_serialized_size,
  _SerialReceiveData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SerialReceiveData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SerialReceiveData__callbacks,
  get_message_typesupport_handle_function,
  &rm_interfaces__msg__SerialReceiveData__get_type_hash,
  &rm_interfaces__msg__SerialReceiveData__get_type_description,
  &rm_interfaces__msg__SerialReceiveData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_interfaces::msg::SerialReceiveData>()
{
  return &rm_interfaces::msg::typesupport_fastrtps_cpp::_SerialReceiveData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rm_interfaces, msg, SerialReceiveData)() {
  return &rm_interfaces::msg::typesupport_fastrtps_cpp::_SerialReceiveData__handle;
}

#ifdef __cplusplus
}
#endif
