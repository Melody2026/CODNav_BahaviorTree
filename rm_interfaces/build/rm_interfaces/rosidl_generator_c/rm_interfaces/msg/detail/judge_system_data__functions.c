// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_interfaces:msg/JudgeSystemData.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/judge_system_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `heroposition`
// Member `standard_3position`
#include "rm_interfaces/msg/detail/point2d__functions.h"

bool
rm_interfaces__msg__JudgeSystemData__init(rm_interfaces__msg__JudgeSystemData * msg)
{
  if (!msg) {
    return false;
  }
  // hp
  // zone_status
  // is_attacted
  // position_x
  // position_y
  // heroposition
  if (!rm_interfaces__msg__Point2d__init(&msg->heroposition)) {
    rm_interfaces__msg__JudgeSystemData__fini(msg);
    return false;
  }
  // standard_3position
  if (!rm_interfaces__msg__Point2d__init(&msg->standard_3position)) {
    rm_interfaces__msg__JudgeSystemData__fini(msg);
    return false;
  }
  return true;
}

void
rm_interfaces__msg__JudgeSystemData__fini(rm_interfaces__msg__JudgeSystemData * msg)
{
  if (!msg) {
    return;
  }
  // hp
  // zone_status
  // is_attacted
  // position_x
  // position_y
  // heroposition
  rm_interfaces__msg__Point2d__fini(&msg->heroposition);
  // standard_3position
  rm_interfaces__msg__Point2d__fini(&msg->standard_3position);
}

bool
rm_interfaces__msg__JudgeSystemData__are_equal(const rm_interfaces__msg__JudgeSystemData * lhs, const rm_interfaces__msg__JudgeSystemData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hp
  if (lhs->hp != rhs->hp) {
    return false;
  }
  // zone_status
  if (lhs->zone_status != rhs->zone_status) {
    return false;
  }
  // is_attacted
  if (lhs->is_attacted != rhs->is_attacted) {
    return false;
  }
  // position_x
  if (lhs->position_x != rhs->position_x) {
    return false;
  }
  // position_y
  if (lhs->position_y != rhs->position_y) {
    return false;
  }
  // heroposition
  if (!rm_interfaces__msg__Point2d__are_equal(
      &(lhs->heroposition), &(rhs->heroposition)))
  {
    return false;
  }
  // standard_3position
  if (!rm_interfaces__msg__Point2d__are_equal(
      &(lhs->standard_3position), &(rhs->standard_3position)))
  {
    return false;
  }
  return true;
}

bool
rm_interfaces__msg__JudgeSystemData__copy(
  const rm_interfaces__msg__JudgeSystemData * input,
  rm_interfaces__msg__JudgeSystemData * output)
{
  if (!input || !output) {
    return false;
  }
  // hp
  output->hp = input->hp;
  // zone_status
  output->zone_status = input->zone_status;
  // is_attacted
  output->is_attacted = input->is_attacted;
  // position_x
  output->position_x = input->position_x;
  // position_y
  output->position_y = input->position_y;
  // heroposition
  if (!rm_interfaces__msg__Point2d__copy(
      &(input->heroposition), &(output->heroposition)))
  {
    return false;
  }
  // standard_3position
  if (!rm_interfaces__msg__Point2d__copy(
      &(input->standard_3position), &(output->standard_3position)))
  {
    return false;
  }
  return true;
}

rm_interfaces__msg__JudgeSystemData *
rm_interfaces__msg__JudgeSystemData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__JudgeSystemData * msg = (rm_interfaces__msg__JudgeSystemData *)allocator.allocate(sizeof(rm_interfaces__msg__JudgeSystemData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_interfaces__msg__JudgeSystemData));
  bool success = rm_interfaces__msg__JudgeSystemData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_interfaces__msg__JudgeSystemData__destroy(rm_interfaces__msg__JudgeSystemData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_interfaces__msg__JudgeSystemData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_interfaces__msg__JudgeSystemData__Sequence__init(rm_interfaces__msg__JudgeSystemData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__JudgeSystemData * data = NULL;

  if (size) {
    data = (rm_interfaces__msg__JudgeSystemData *)allocator.zero_allocate(size, sizeof(rm_interfaces__msg__JudgeSystemData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_interfaces__msg__JudgeSystemData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_interfaces__msg__JudgeSystemData__fini(&data[i - 1]);
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
rm_interfaces__msg__JudgeSystemData__Sequence__fini(rm_interfaces__msg__JudgeSystemData__Sequence * array)
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
      rm_interfaces__msg__JudgeSystemData__fini(&array->data[i]);
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

rm_interfaces__msg__JudgeSystemData__Sequence *
rm_interfaces__msg__JudgeSystemData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_interfaces__msg__JudgeSystemData__Sequence * array = (rm_interfaces__msg__JudgeSystemData__Sequence *)allocator.allocate(sizeof(rm_interfaces__msg__JudgeSystemData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_interfaces__msg__JudgeSystemData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_interfaces__msg__JudgeSystemData__Sequence__destroy(rm_interfaces__msg__JudgeSystemData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_interfaces__msg__JudgeSystemData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_interfaces__msg__JudgeSystemData__Sequence__are_equal(const rm_interfaces__msg__JudgeSystemData__Sequence * lhs, const rm_interfaces__msg__JudgeSystemData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_interfaces__msg__JudgeSystemData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_interfaces__msg__JudgeSystemData__Sequence__copy(
  const rm_interfaces__msg__JudgeSystemData__Sequence * input,
  rm_interfaces__msg__JudgeSystemData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_interfaces__msg__JudgeSystemData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_interfaces__msg__JudgeSystemData * data =
      (rm_interfaces__msg__JudgeSystemData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_interfaces__msg__JudgeSystemData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_interfaces__msg__JudgeSystemData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_interfaces__msg__JudgeSystemData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
