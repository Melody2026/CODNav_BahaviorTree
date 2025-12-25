// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/judge_system_data.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'operator_command'
#include "rm_interfaces/msg/detail/operator_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__JudgeSystemData __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__JudgeSystemData __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JudgeSystemData_
{
  using Type = JudgeSystemData_<ContainerAllocator>;

  explicit JudgeSystemData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operator_command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_status = 0;
      this->remaining_time = 0;
      this->blood = 0;
      this->outpost_hp = 0;
      this->is_lowpower = 0;
      this->hp = 0.0f;
      this->shut_num = 0;
      this->qs_hp = 0;
      this->current_hp = 0;
      this->center_gain_point = 0;
      this->friendly_supply_non_zone_exchange = 0;
      this->stage_remain_time = 0;
      this->game_type = 0;
      this->game_progress = 0;
      this->dm_qs_hp = 0;
      this->zone_status = 0l;
      this->position_x = 0.0f;
      this->position_y = 0.0f;
    }
  }

  explicit JudgeSystemData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : operator_command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_status = 0;
      this->remaining_time = 0;
      this->blood = 0;
      this->outpost_hp = 0;
      this->is_lowpower = 0;
      this->hp = 0.0f;
      this->shut_num = 0;
      this->qs_hp = 0;
      this->current_hp = 0;
      this->center_gain_point = 0;
      this->friendly_supply_non_zone_exchange = 0;
      this->stage_remain_time = 0;
      this->game_type = 0;
      this->game_progress = 0;
      this->dm_qs_hp = 0;
      this->zone_status = 0l;
      this->position_x = 0.0f;
      this->position_y = 0.0f;
    }
  }

  // field types and members
  using _game_status_type =
    uint8_t;
  _game_status_type game_status;
  using _remaining_time_type =
    int16_t;
  _remaining_time_type remaining_time;
  using _blood_type =
    int16_t;
  _blood_type blood;
  using _outpost_hp_type =
    int16_t;
  _outpost_hp_type outpost_hp;
  using _is_lowpower_type =
    uint8_t;
  _is_lowpower_type is_lowpower;
  using _hp_type =
    float;
  _hp_type hp;
  using _shut_num_type =
    int16_t;
  _shut_num_type shut_num;
  using _qs_hp_type =
    int16_t;
  _qs_hp_type qs_hp;
  using _current_hp_type =
    uint8_t;
  _current_hp_type current_hp;
  using _center_gain_point_type =
    uint8_t;
  _center_gain_point_type center_gain_point;
  using _friendly_supply_non_zone_exchange_type =
    uint8_t;
  _friendly_supply_non_zone_exchange_type friendly_supply_non_zone_exchange;
  using _stage_remain_time_type =
    uint8_t;
  _stage_remain_time_type stage_remain_time;
  using _game_type_type =
    uint8_t;
  _game_type_type game_type;
  using _game_progress_type =
    uint8_t;
  _game_progress_type game_progress;
  using _dm_qs_hp_type =
    int16_t;
  _dm_qs_hp_type dm_qs_hp;
  using _zone_status_type =
    int32_t;
  _zone_status_type zone_status;
  using _position_x_type =
    float;
  _position_x_type position_x;
  using _position_y_type =
    float;
  _position_y_type position_y;
  using _operator_command_type =
    rm_interfaces::msg::OperatorCommand_<ContainerAllocator>;
  _operator_command_type operator_command;

  // setters for named parameter idiom
  Type & set__game_status(
    const uint8_t & _arg)
  {
    this->game_status = _arg;
    return *this;
  }
  Type & set__remaining_time(
    const int16_t & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }
  Type & set__blood(
    const int16_t & _arg)
  {
    this->blood = _arg;
    return *this;
  }
  Type & set__outpost_hp(
    const int16_t & _arg)
  {
    this->outpost_hp = _arg;
    return *this;
  }
  Type & set__is_lowpower(
    const uint8_t & _arg)
  {
    this->is_lowpower = _arg;
    return *this;
  }
  Type & set__hp(
    const float & _arg)
  {
    this->hp = _arg;
    return *this;
  }
  Type & set__shut_num(
    const int16_t & _arg)
  {
    this->shut_num = _arg;
    return *this;
  }
  Type & set__qs_hp(
    const int16_t & _arg)
  {
    this->qs_hp = _arg;
    return *this;
  }
  Type & set__current_hp(
    const uint8_t & _arg)
  {
    this->current_hp = _arg;
    return *this;
  }
  Type & set__center_gain_point(
    const uint8_t & _arg)
  {
    this->center_gain_point = _arg;
    return *this;
  }
  Type & set__friendly_supply_non_zone_exchange(
    const uint8_t & _arg)
  {
    this->friendly_supply_non_zone_exchange = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const uint8_t & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }
  Type & set__game_type(
    const uint8_t & _arg)
  {
    this->game_type = _arg;
    return *this;
  }
  Type & set__game_progress(
    const uint8_t & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }
  Type & set__dm_qs_hp(
    const int16_t & _arg)
  {
    this->dm_qs_hp = _arg;
    return *this;
  }
  Type & set__zone_status(
    const int32_t & _arg)
  {
    this->zone_status = _arg;
    return *this;
  }
  Type & set__position_x(
    const float & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_y(
    const float & _arg)
  {
    this->position_y = _arg;
    return *this;
  }
  Type & set__operator_command(
    const rm_interfaces::msg::OperatorCommand_<ContainerAllocator> & _arg)
  {
    this->operator_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::JudgeSystemData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::JudgeSystemData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::JudgeSystemData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::JudgeSystemData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__JudgeSystemData
    std::shared_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__JudgeSystemData
    std::shared_ptr<rm_interfaces::msg::JudgeSystemData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JudgeSystemData_ & other) const
  {
    if (this->game_status != other.game_status) {
      return false;
    }
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    if (this->blood != other.blood) {
      return false;
    }
    if (this->outpost_hp != other.outpost_hp) {
      return false;
    }
    if (this->is_lowpower != other.is_lowpower) {
      return false;
    }
    if (this->hp != other.hp) {
      return false;
    }
    if (this->shut_num != other.shut_num) {
      return false;
    }
    if (this->qs_hp != other.qs_hp) {
      return false;
    }
    if (this->current_hp != other.current_hp) {
      return false;
    }
    if (this->center_gain_point != other.center_gain_point) {
      return false;
    }
    if (this->friendly_supply_non_zone_exchange != other.friendly_supply_non_zone_exchange) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    if (this->game_type != other.game_type) {
      return false;
    }
    if (this->game_progress != other.game_progress) {
      return false;
    }
    if (this->dm_qs_hp != other.dm_qs_hp) {
      return false;
    }
    if (this->zone_status != other.zone_status) {
      return false;
    }
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    if (this->operator_command != other.operator_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const JudgeSystemData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JudgeSystemData_

// alias to use template instance with default allocator
using JudgeSystemData =
  rm_interfaces::msg::JudgeSystemData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__JUDGE_SYSTEM_DATA__STRUCT_HPP_
