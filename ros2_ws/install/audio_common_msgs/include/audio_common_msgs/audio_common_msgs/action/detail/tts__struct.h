// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:action/TTS.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__STRUCT_H_
#define AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
// Member 'language'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_Goal
{
  rosidl_runtime_c__String text;
  rosidl_runtime_c__String language;
  float volume;
  float rate;
} audio_common_msgs__action__TTS_Goal;

// Struct for a sequence of audio_common_msgs__action__TTS_Goal.
typedef struct audio_common_msgs__action__TTS_Goal__Sequence
{
  audio_common_msgs__action__TTS_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'text'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_Result
{
  rosidl_runtime_c__String text;
} audio_common_msgs__action__TTS_Result;

// Struct for a sequence of audio_common_msgs__action__TTS_Result.
typedef struct audio_common_msgs__action__TTS_Result__Sequence
{
  audio_common_msgs__action__TTS_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} audio_common_msgs__action__TTS_Feedback;

// Struct for a sequence of audio_common_msgs__action__TTS_Feedback.
typedef struct audio_common_msgs__action__TTS_Feedback__Sequence
{
  audio_common_msgs__action__TTS_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "audio_common_msgs/action/detail/tts__struct.h"

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  audio_common_msgs__action__TTS_Goal goal;
} audio_common_msgs__action__TTS_SendGoal_Request;

// Struct for a sequence of audio_common_msgs__action__TTS_SendGoal_Request.
typedef struct audio_common_msgs__action__TTS_SendGoal_Request__Sequence
{
  audio_common_msgs__action__TTS_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} audio_common_msgs__action__TTS_SendGoal_Response;

// Struct for a sequence of audio_common_msgs__action__TTS_SendGoal_Response.
typedef struct audio_common_msgs__action__TTS_SendGoal_Response__Sequence
{
  audio_common_msgs__action__TTS_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} audio_common_msgs__action__TTS_GetResult_Request;

// Struct for a sequence of audio_common_msgs__action__TTS_GetResult_Request.
typedef struct audio_common_msgs__action__TTS_GetResult_Request__Sequence
{
  audio_common_msgs__action__TTS_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "audio_common_msgs/action/detail/tts__struct.h"

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_GetResult_Response
{
  int8_t status;
  audio_common_msgs__action__TTS_Result result;
} audio_common_msgs__action__TTS_GetResult_Response;

// Struct for a sequence of audio_common_msgs__action__TTS_GetResult_Response.
typedef struct audio_common_msgs__action__TTS_GetResult_Response__Sequence
{
  audio_common_msgs__action__TTS_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "audio_common_msgs/action/detail/tts__struct.h"

/// Struct defined in action/TTS in the package audio_common_msgs.
typedef struct audio_common_msgs__action__TTS_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  audio_common_msgs__action__TTS_Feedback feedback;
} audio_common_msgs__action__TTS_FeedbackMessage;

// Struct for a sequence of audio_common_msgs__action__TTS_FeedbackMessage.
typedef struct audio_common_msgs__action__TTS_FeedbackMessage__Sequence
{
  audio_common_msgs__action__TTS_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__TTS_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__STRUCT_H_
