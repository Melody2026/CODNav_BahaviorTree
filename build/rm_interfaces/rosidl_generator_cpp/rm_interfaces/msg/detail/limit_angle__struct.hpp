// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/LimitAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/limit_angle.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__LimitAngle __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__LimitAngle __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LimitAngle_
{
  using Type = LimitAngle_<ContainerAllocator>;

  explicit LimitAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_limit_yaw = 0.0;
      this->max_limit_yaw = 0.0;
    }
  }

  explicit LimitAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_limit_yaw = 0.0;
      this->max_limit_yaw = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _min_limit_yaw_type =
    double;
  _min_limit_yaw_type min_limit_yaw;
  using _max_limit_yaw_type =
    double;
  _max_limit_yaw_type max_limit_yaw;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__min_limit_yaw(
    const double & _arg)
  {
    this->min_limit_yaw = _arg;
    return *this;
  }
  Type & set__max_limit_yaw(
    const double & _arg)
  {
    this->max_limit_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::LimitAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::LimitAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::LimitAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::LimitAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__LimitAngle
    std::shared_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__LimitAngle
    std::shared_ptr<rm_interfaces::msg::LimitAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LimitAngle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->min_limit_yaw != other.min_limit_yaw) {
      return false;
    }
    if (this->max_limit_yaw != other.max_limit_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const LimitAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LimitAngle_

// alias to use template instance with default allocator
using LimitAngle =
  rm_interfaces::msg::LimitAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__LIMIT_ANGLE__STRUCT_HPP_
