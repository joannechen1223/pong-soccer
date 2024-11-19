// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__STRUCT_H_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'audio'
#include "audio_common_msgs/msg/detail/audio__struct.h"

/// Struct defined in msg/AudioStamped in the package audio_common_msgs.
typedef struct audio_common_msgs__msg__AudioStamped
{
  std_msgs__msg__Header header;
  audio_common_msgs__msg__Audio audio;
} audio_common_msgs__msg__AudioStamped;

// Struct for a sequence of audio_common_msgs__msg__AudioStamped.
typedef struct audio_common_msgs__msg__AudioStamped__Sequence
{
  audio_common_msgs__msg__AudioStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__msg__AudioStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__STRUCT_H_
