// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/EkfP.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/ekf_p.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__EKF_P__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__EKF_P__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__EkfP __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__EkfP __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EkfP_
{
  using Type = EkfP_<ContainerAllocator>;

  explicit EkfP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean_p = 0.0;
    }
  }

  explicit EkfP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean_p = 0.0;
    }
  }

  // field types and members
  using _mean_p_type =
    double;
  _mean_p_type mean_p;

  // setters for named parameter idiom
  Type & set__mean_p(
    const double & _arg)
  {
    this->mean_p = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::EkfP_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::EkfP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::EkfP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::EkfP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__EkfP
    std::shared_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__EkfP
    std::shared_ptr<rm_interfaces::msg::EkfP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EkfP_ & other) const
  {
    if (this->mean_p != other.mean_p) {
      return false;
    }
    return true;
  }
  bool operator!=(const EkfP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EkfP_

// alias to use template instance with default allocator
using EkfP =
  rm_interfaces::msg::EkfP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__EKF_P__STRUCT_HPP_
