// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from audio_common_msgs:srv/MusicPlay.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/srv/detail/music_play__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "audio_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "audio_common_msgs/srv/detail/music_play__struct.h"
#include "audio_common_msgs/srv/detail/music_play__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // audio, file_path
#include "rosidl_runtime_c/string_functions.h"  // audio, file_path

// forward declare type support functions


using _MusicPlay_Request__ros_msg_type = audio_common_msgs__srv__MusicPlay_Request;

static bool _MusicPlay_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MusicPlay_Request__ros_msg_type * ros_message = static_cast<const _MusicPlay_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: audio
  {
    const rosidl_runtime_c__String * str = &ros_message->audio;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: file_path
  {
    const rosidl_runtime_c__String * str = &ros_message->file_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: loop
  {
    cdr << (ros_message->loop ? true : false);
  }

  return true;
}

static bool _MusicPlay_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MusicPlay_Request__ros_msg_type * ros_message = static_cast<_MusicPlay_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: audio
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->audio.data) {
      rosidl_runtime_c__String__init(&ros_message->audio);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->audio,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'audio'\n");
      return false;
    }
  }

  // Field name: file_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->file_path.data) {
      rosidl_runtime_c__String__init(&ros_message->file_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file_path'\n");
      return false;
    }
  }

  // Field name: loop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->loop = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_common_msgs
size_t get_serialized_size_audio_common_msgs__srv__MusicPlay_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MusicPlay_Request__ros_msg_type * ros_message = static_cast<const _MusicPlay_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->audio.size + 1);
  // field.name file_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->file_path.size + 1);
  // field.name loop
  {
    size_t item_size = sizeof(ros_message->loop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MusicPlay_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audio_common_msgs__srv__MusicPlay_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_common_msgs
size_t max_serialized_size_audio_common_msgs__srv__MusicPlay_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: audio
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: file_path
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: loop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = audio_common_msgs__srv__MusicPlay_Request;
    is_plain =
      (
      offsetof(DataType, loop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MusicPlay_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_audio_common_msgs__srv__MusicPlay_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MusicPlay_Request = {
  "audio_common_msgs::srv",
  "MusicPlay_Request",
  _MusicPlay_Request__cdr_serialize,
  _MusicPlay_Request__cdr_deserialize,
  _MusicPlay_Request__get_serialized_size,
  _MusicPlay_Request__max_serialized_size
};

static rosidl_message_type_support_t _MusicPlay_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MusicPlay_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_common_msgs, srv, MusicPlay_Request)() {
  return &_MusicPlay_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "audio_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "audio_common_msgs/srv/detail/music_play__struct.h"
// already included above
// #include "audio_common_msgs/srv/detail/music_play__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MusicPlay_Response__ros_msg_type = audio_common_msgs__srv__MusicPlay_Response;

static bool _MusicPlay_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MusicPlay_Response__ros_msg_type * ros_message = static_cast<const _MusicPlay_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _MusicPlay_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MusicPlay_Response__ros_msg_type * ros_message = static_cast<_MusicPlay_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_common_msgs
size_t get_serialized_size_audio_common_msgs__srv__MusicPlay_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MusicPlay_Response__ros_msg_type * ros_message = static_cast<const _MusicPlay_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MusicPlay_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audio_common_msgs__srv__MusicPlay_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_common_msgs
size_t max_serialized_size_audio_common_msgs__srv__MusicPlay_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = audio_common_msgs__srv__MusicPlay_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MusicPlay_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_audio_common_msgs__srv__MusicPlay_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MusicPlay_Response = {
  "audio_common_msgs::srv",
  "MusicPlay_Response",
  _MusicPlay_Response__cdr_serialize,
  _MusicPlay_Response__cdr_deserialize,
  _MusicPlay_Response__get_serialized_size,
  _MusicPlay_Response__max_serialized_size
};

static rosidl_message_type_support_t _MusicPlay_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MusicPlay_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_common_msgs, srv, MusicPlay_Response)() {
  return &_MusicPlay_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "audio_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "audio_common_msgs/srv/music_play.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MusicPlay__callbacks = {
  "audio_common_msgs::srv",
  "MusicPlay",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_common_msgs, srv, MusicPlay_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_common_msgs, srv, MusicPlay_Response)(),
};

static rosidl_service_type_support_t MusicPlay__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MusicPlay__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_common_msgs, srv, MusicPlay)() {
  return &MusicPlay__handle;
}

#if defined(__cplusplus)
}
#endif
