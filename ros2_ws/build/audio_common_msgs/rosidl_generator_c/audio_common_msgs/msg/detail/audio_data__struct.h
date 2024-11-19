// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'float32_data'
// Member 'int32_data'
// Member 'int16_data'
// Member 'int8_data'
// Member 'uint8_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AudioData in the package audio_common_msgs.
typedef struct audio_common_msgs__msg__AudioData
{
  rosidl_runtime_c__float__Sequence float32_data;
  rosidl_runtime_c__int32__Sequence int32_data;
  rosidl_runtime_c__int16__Sequence int16_data;
  rosidl_runtime_c__int8__Sequence int8_data;
  rosidl_runtime_c__uint8__Sequence uint8_data;
} audio_common_msgs__msg__AudioData;

// Struct for a sequence of audio_common_msgs__msg__AudioData.
typedef struct audio_common_msgs__msg__AudioData__Sequence
{
  audio_common_msgs__msg__AudioData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__msg__AudioData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_H_
