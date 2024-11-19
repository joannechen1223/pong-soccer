// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:srv/MusicPlay.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__STRUCT_H_
#define AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'audio'
// Member 'file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MusicPlay in the package audio_common_msgs.
typedef struct audio_common_msgs__srv__MusicPlay_Request
{
  rosidl_runtime_c__String audio;
  rosidl_runtime_c__String file_path;
  bool loop;
} audio_common_msgs__srv__MusicPlay_Request;

// Struct for a sequence of audio_common_msgs__srv__MusicPlay_Request.
typedef struct audio_common_msgs__srv__MusicPlay_Request__Sequence
{
  audio_common_msgs__srv__MusicPlay_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__srv__MusicPlay_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MusicPlay in the package audio_common_msgs.
typedef struct audio_common_msgs__srv__MusicPlay_Response
{
  bool success;
} audio_common_msgs__srv__MusicPlay_Response;

// Struct for a sequence of audio_common_msgs__srv__MusicPlay_Response.
typedef struct audio_common_msgs__srv__MusicPlay_Response__Sequence
{
  audio_common_msgs__srv__MusicPlay_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__srv__MusicPlay_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__STRUCT_H_
