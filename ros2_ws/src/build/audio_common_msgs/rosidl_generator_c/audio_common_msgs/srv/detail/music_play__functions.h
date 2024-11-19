// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from audio_common_msgs:srv/MusicPlay.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__FUNCTIONS_H_
#define AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "audio_common_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "audio_common_msgs/srv/detail/music_play__struct.h"

/// Initialize srv/MusicPlay message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audio_common_msgs__srv__MusicPlay_Request
 * )) before or use
 * audio_common_msgs__srv__MusicPlay_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Request__init(audio_common_msgs__srv__MusicPlay_Request * msg);

/// Finalize srv/MusicPlay message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Request__fini(audio_common_msgs__srv__MusicPlay_Request * msg);

/// Create srv/MusicPlay message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audio_common_msgs__srv__MusicPlay_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
audio_common_msgs__srv__MusicPlay_Request *
audio_common_msgs__srv__MusicPlay_Request__create();

/// Destroy srv/MusicPlay message.
/**
 * It calls
 * audio_common_msgs__srv__MusicPlay_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Request__destroy(audio_common_msgs__srv__MusicPlay_Request * msg);

/// Check for srv/MusicPlay message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Request__are_equal(const audio_common_msgs__srv__MusicPlay_Request * lhs, const audio_common_msgs__srv__MusicPlay_Request * rhs);

/// Copy a srv/MusicPlay message.
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
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Request__copy(
  const audio_common_msgs__srv__MusicPlay_Request * input,
  audio_common_msgs__srv__MusicPlay_Request * output);

/// Initialize array of srv/MusicPlay messages.
/**
 * It allocates the memory for the number of elements and calls
 * audio_common_msgs__srv__MusicPlay_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Request__Sequence__init(audio_common_msgs__srv__MusicPlay_Request__Sequence * array, size_t size);

/// Finalize array of srv/MusicPlay messages.
/**
 * It calls
 * audio_common_msgs__srv__MusicPlay_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Request__Sequence__fini(audio_common_msgs__srv__MusicPlay_Request__Sequence * array);

/// Create array of srv/MusicPlay messages.
/**
 * It allocates the memory for the array and calls
 * audio_common_msgs__srv__MusicPlay_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
audio_common_msgs__srv__MusicPlay_Request__Sequence *
audio_common_msgs__srv__MusicPlay_Request__Sequence__create(size_t size);

/// Destroy array of srv/MusicPlay messages.
/**
 * It calls
 * audio_common_msgs__srv__MusicPlay_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Request__Sequence__destroy(audio_common_msgs__srv__MusicPlay_Request__Sequence * array);

/// Check for srv/MusicPlay message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Request__Sequence__are_equal(const audio_common_msgs__srv__MusicPlay_Request__Sequence * lhs, const audio_common_msgs__srv__MusicPlay_Request__Sequence * rhs);

/// Copy an array of srv/MusicPlay messages.
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
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Request__Sequence__copy(
  const audio_common_msgs__srv__MusicPlay_Request__Sequence * input,
  audio_common_msgs__srv__MusicPlay_Request__Sequence * output);

/// Initialize srv/MusicPlay message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * audio_common_msgs__srv__MusicPlay_Response
 * )) before or use
 * audio_common_msgs__srv__MusicPlay_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Response__init(audio_common_msgs__srv__MusicPlay_Response * msg);

/// Finalize srv/MusicPlay message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Response__fini(audio_common_msgs__srv__MusicPlay_Response * msg);

/// Create srv/MusicPlay message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * audio_common_msgs__srv__MusicPlay_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
audio_common_msgs__srv__MusicPlay_Response *
audio_common_msgs__srv__MusicPlay_Response__create();

/// Destroy srv/MusicPlay message.
/**
 * It calls
 * audio_common_msgs__srv__MusicPlay_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Response__destroy(audio_common_msgs__srv__MusicPlay_Response * msg);

/// Check for srv/MusicPlay message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Response__are_equal(const audio_common_msgs__srv__MusicPlay_Response * lhs, const audio_common_msgs__srv__MusicPlay_Response * rhs);

/// Copy a srv/MusicPlay message.
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
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Response__copy(
  const audio_common_msgs__srv__MusicPlay_Response * input,
  audio_common_msgs__srv__MusicPlay_Response * output);

/// Initialize array of srv/MusicPlay messages.
/**
 * It allocates the memory for the number of elements and calls
 * audio_common_msgs__srv__MusicPlay_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Response__Sequence__init(audio_common_msgs__srv__MusicPlay_Response__Sequence * array, size_t size);

/// Finalize array of srv/MusicPlay messages.
/**
 * It calls
 * audio_common_msgs__srv__MusicPlay_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Response__Sequence__fini(audio_common_msgs__srv__MusicPlay_Response__Sequence * array);

/// Create array of srv/MusicPlay messages.
/**
 * It allocates the memory for the array and calls
 * audio_common_msgs__srv__MusicPlay_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
audio_common_msgs__srv__MusicPlay_Response__Sequence *
audio_common_msgs__srv__MusicPlay_Response__Sequence__create(size_t size);

/// Destroy array of srv/MusicPlay messages.
/**
 * It calls
 * audio_common_msgs__srv__MusicPlay_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
void
audio_common_msgs__srv__MusicPlay_Response__Sequence__destroy(audio_common_msgs__srv__MusicPlay_Response__Sequence * array);

/// Check for srv/MusicPlay message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Response__Sequence__are_equal(const audio_common_msgs__srv__MusicPlay_Response__Sequence * lhs, const audio_common_msgs__srv__MusicPlay_Response__Sequence * rhs);

/// Copy an array of srv/MusicPlay messages.
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
ROSIDL_GENERATOR_C_PUBLIC_audio_common_msgs
bool
audio_common_msgs__srv__MusicPlay_Response__Sequence__copy(
  const audio_common_msgs__srv__MusicPlay_Response__Sequence * input,
  audio_common_msgs__srv__MusicPlay_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__FUNCTIONS_H_
