// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/ShootFireTargets.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/shoot_fire_targets.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'targets'
#include "rm_interfaces/msg/detail/shoot_fire_target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__ShootFireTargets __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__ShootFireTargets __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShootFireTargets_
{
  using Type = ShootFireTargets_<ContainerAllocator>;

  explicit ShootFireTargets_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
    }
  }

  explicit ShootFireTargets_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _targets_type =
    std::vector<rm_interfaces::msg::ShootFireTarget_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_interfaces::msg::ShootFireTarget_<ContainerAllocator>>>;
  _targets_type targets;
  using _index_type =
    uint8_t;
  _index_type index;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__targets(
    const std::vector<rm_interfaces::msg::ShootFireTarget_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_interfaces::msg::ShootFireTarget_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }
  Type & set__index(
    const uint8_t & _arg)
  {
    this->index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::ShootFireTargets_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::ShootFireTargets_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::ShootFireTargets_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::ShootFireTargets_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__ShootFireTargets
    std::shared_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__ShootFireTargets
    std::shared_ptr<rm_interfaces::msg::ShootFireTargets_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShootFireTargets_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->targets != other.targets) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShootFireTargets_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShootFireTargets_

// alias to use template instance with default allocator
using ShootFireTargets =
  rm_interfaces::msg::ShootFireTargets_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SHOOT_FIRE_TARGETS__STRUCT_HPP_
