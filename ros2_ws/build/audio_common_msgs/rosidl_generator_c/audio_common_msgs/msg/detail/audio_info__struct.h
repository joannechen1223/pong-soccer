// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_H_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AudioInfo in the package audio_common_msgs.
typedef struct audio_common_msgs__msg__AudioInfo
{
  int32_t format;
  int32_t channels;
  int32_t rate;
  int32_t chunk;
} audio_common_msgs__msg__AudioInfo;

// Struct for a sequence of audio_common_msgs__msg__AudioInfo.
typedef struct audio_common_msgs__msg__AudioInfo__Sequence
{
  audio_common_msgs__msg__AudioInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__msg__AudioInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_H_
