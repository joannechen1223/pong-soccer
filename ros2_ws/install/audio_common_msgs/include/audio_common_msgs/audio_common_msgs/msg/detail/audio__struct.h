// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__STRUCT_H_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'audio_data'
#include "audio_common_msgs/msg/detail/audio_data__struct.h"
// Member 'info'
#include "audio_common_msgs/msg/detail/audio_info__struct.h"

/// Struct defined in msg/Audio in the package audio_common_msgs.
typedef struct audio_common_msgs__msg__Audio
{
  audio_common_msgs__msg__AudioData audio_data;
  audio_common_msgs__msg__AudioInfo info;
} audio_common_msgs__msg__Audio;

// Struct for a sequence of audio_common_msgs__msg__Audio.
typedef struct audio_common_msgs__msg__Audio__Sequence
{
  audio_common_msgs__msg__Audio * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__msg__Audio__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__STRUCT_H_
