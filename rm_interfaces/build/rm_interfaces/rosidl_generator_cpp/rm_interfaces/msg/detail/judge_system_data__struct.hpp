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
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hp = 0.0f;
      this->zone_status = false;
      this->is_defence = false;
      this->is_attack = false;
    }
  }

  explicit JudgeSystemData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hp = 0.0f;
      this->zone_status = false;
      this->is_defence = false;
      this->is_attack = false;
    }
  }

  // field types and members
  using _hp_type =
    float;
  _hp_type hp;
  using _zone_status_type =
    bool;
  _zone_status_type zone_status;
  using _is_defence_type =
    bool;
  _is_defence_type is_defence;
  using _is_attack_type =
    bool;
  _is_attack_type is_attack;

  // setters for named parameter idiom
  Type & set__hp(
    const float & _arg)
  {
    this->hp = _arg;
    return *this;
  }
  Type & set__zone_status(
    const bool & _arg)
  {
    this->zone_status = _arg;
    return *this;
  }
  Type & set__is_defence(
    const bool & _arg)
  {
    this->is_defence = _arg;
    return *this;
  }
  Type & set__is_attack(
    const bool & _arg)
  {
    this->is_attack = _arg;
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
    if (this->hp != other.hp) {
      return false;
    }
    if (this->zone_status != other.zone_status) {
      return false;
    }
    if (this->is_defence != other.is_defence) {
      return false;
    }
    if (this->is_attack != other.is_attack) {
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
