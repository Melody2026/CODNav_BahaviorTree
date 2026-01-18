// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/SerialReceiveData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/serial_receive_data.hpp"


#ifndef RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'judge_system_data'
#include "rm_interfaces/msg/detail/judge_system_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__SerialReceiveData __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__SerialReceiveData __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerialReceiveData_
{
  using Type = SerialReceiveData_<ContainerAllocator>;

  explicit SerialReceiveData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : judge_system_data(_init)
  {
    (void)_init;
  }

  explicit SerialReceiveData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : judge_system_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _judge_system_data_type =
    rm_interfaces::msg::JudgeSystemData_<ContainerAllocator>;
  _judge_system_data_type judge_system_data;

  // setters for named parameter idiom
  Type & set__judge_system_data(
    const rm_interfaces::msg::JudgeSystemData_<ContainerAllocator> & _arg)
  {
    this->judge_system_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::SerialReceiveData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::SerialReceiveData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::SerialReceiveData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::SerialReceiveData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__SerialReceiveData
    std::shared_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__SerialReceiveData
    std::shared_ptr<rm_interfaces::msg::SerialReceiveData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialReceiveData_ & other) const
  {
    if (this->judge_system_data != other.judge_system_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialReceiveData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialReceiveData_

// alias to use template instance with default allocator
using SerialReceiveData =
  rm_interfaces::msg::SerialReceiveData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__SERIAL_RECEIVE_DATA__STRUCT_HPP_
