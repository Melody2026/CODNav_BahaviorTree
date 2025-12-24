// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/LimitAngle.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/limit_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_interfaces__msg__LimitAngle__init(rm_interfaces__msg__LimitAngle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_interfaces__msg__LimitAngle__fini(msg);
    return false;
  }
  // min_limit_yaw
  // max_limit_yaw
  return true;
}

void
rm_interfaces__msg__LimitAngle__fini(rm_interfaces__msg__LimitAngle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // min_limit_yaw
  // max_limit_yaw
}

bool
rm_interfaces__msg__LimitAngle__are_equal(const rm_interfaces__msg__LimitAngle * lhs, const rm_interfaces__msg__LimitAngle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // min_limit_yaw
  if (lhs->min_limit_yaw != rhs->min_limit_yaw) {
    return false;
  }
  // max_limit_yaw
  if (lhs->max_limit_yaw != rhs->max_limit_yaw) {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__LimitAngle__copy(
  const rm_interfaces__msg__LimitAngle * input,
  rm_interfaces__msg__LimitAngle * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // min_limit_yaw
  output->min_limit_yaw = input->min_limit_yaw;
  // max_limit_yaw
  output->max_limit_yaw = input->max_limit_yaw;
  return true;
}

rm_interfaces__msg__LimitAngle *
rm_interfaces__msg__LimitAngle__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__LimitAngle * msg = (rm_interfaces__msg__LimitAngle *)allocator.allocate(sizeof(rm_interfaces__msg__LimitAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__LimitAngle));
  bool success = rm_interfaces__msg__LimitAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__LimitAngle__destroy(rm_interfaces__msg__LimitAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_interfaces__msg__LimitAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_interfaces__msg__LimitAngle__Sequence__init(rm_interfaces__msg__LimitAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__LimitAngle * data = NULL;

  if (size) {
    data = (rm_interfaces__msg__LimitAngle *)allocator.zero_allocate(size, sizeof(rm_interfaces__msg__LimitAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__LimitAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__LimitAngle__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_interfaces__msg__LimitAngle__Sequence__fini(rm_interfaces__msg__LimitAngle__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_interfaces__msg__LimitAngle__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_interfaces__msg__LimitAngle__Sequence *
rm_interfaces__msg__LimitAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__LimitAngle__Sequence * array = (rm_interfaces__msg__LimitAngle__Sequence *)allocator.allocate(sizeof(rm_interfaces__msg__LimitAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__LimitAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__LimitAngle__Sequence__destroy(rm_interfaces__msg__LimitAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_interfaces__msg__LimitAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_interfaces__msg__LimitAngle__Sequence__are_equal(const rm_interfaces__msg__LimitAngle__Sequence * lhs, const rm_interfaces__msg__LimitAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__LimitAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__LimitAngle__Sequence__copy(
  const rm_interfaces__msg__LimitAngle__Sequence * input,
  rm_interfaces__msg__LimitAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__LimitAngle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_interfaces__msg__LimitAngle * data =
      (rm_interfaces__msg__LimitAngle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__LimitAngle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__LimitAngle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_interfaces__msg__LimitAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
