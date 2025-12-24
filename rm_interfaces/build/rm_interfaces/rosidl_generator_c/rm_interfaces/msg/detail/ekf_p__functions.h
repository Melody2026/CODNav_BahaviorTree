// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rm_interfaces:msg/EkfP.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rm_interfaces/msg/ekf_p.h"


#ifndef RM_INTERFACES__MSG__DETAIL__EKF_P__FUNCTIONS_H_
#define RM_INTERFACES__MSG__DETAIL__EKF_P__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rm_interfaces/msg/detail/ekf_p__struct.h"

/// Initialize msg/EkfP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_interfaces__msg__EkfP
 * )) before or use
 * rm_interfaces__msg__EkfP__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
bool
rm_interfaces__msg__EkfP__init(rm_interfaces__msg__EkfP * msg);

/// Finalize msg/EkfP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
void
rm_interfaces__msg__EkfP__fini(rm_interfaces__msg__EkfP * msg);

/// Create msg/EkfP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_interfaces__msg__EkfP__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
rm_interfaces__msg__EkfP *
rm_interfaces__msg__EkfP__create(void);

/// Destroy msg/EkfP message.
/**
 * It calls
 * rm_interfaces__msg__EkfP__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
void
rm_interfaces__msg__EkfP__destroy(rm_interfaces__msg__EkfP * msg);

/// Check for msg/EkfP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
bool
rm_interfaces__msg__EkfP__are_equal(const rm_interfaces__msg__EkfP * lhs, const rm_interfaces__msg__EkfP * rhs);

/// Copy a msg/EkfP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
bool
rm_interfaces__msg__EkfP__copy(
  const rm_interfaces__msg__EkfP * input,
  rm_interfaces__msg__EkfP * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_type_hash_t *
rm_interfaces__msg__EkfP__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
rm_interfaces__msg__EkfP__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
rm_interfaces__msg__EkfP__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rm_interfaces__msg__EkfP__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/EkfP messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_interfaces__msg__EkfP__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
bool
rm_interfaces__msg__EkfP__Sequence__init(rm_interfaces__msg__EkfP__Sequence * array, size_t size);

/// Finalize array of msg/EkfP messages.
/**
 * It calls
 * rm_interfaces__msg__EkfP__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
void
rm_interfaces__msg__EkfP__Sequence__fini(rm_interfaces__msg__EkfP__Sequence * array);

/// Create array of msg/EkfP messages.
/**
 * It allocates the memory for the array and calls
 * rm_interfaces__msg__EkfP__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
rm_interfaces__msg__EkfP__Sequence *
rm_interfaces__msg__EkfP__Sequence__create(size_t size);

/// Destroy array of msg/EkfP messages.
/**
 * It calls
 * rm_interfaces__msg__EkfP__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
void
rm_interfaces__msg__EkfP__Sequence__destroy(rm_interfaces__msg__EkfP__Sequence * array);

/// Check for msg/EkfP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
bool
rm_interfaces__msg__EkfP__Sequence__are_equal(const rm_interfaces__msg__EkfP__Sequence * lhs, const rm_interfaces__msg__EkfP__Sequence * rhs);

/// Copy an array of msg/EkfP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_interfaces
bool
rm_interfaces__msg__EkfP__Sequence__copy(
  const rm_interfaces__msg__EkfP__Sequence * input,
  rm_interfaces__msg__EkfP__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__EKF_P__FUNCTIONS_H_
