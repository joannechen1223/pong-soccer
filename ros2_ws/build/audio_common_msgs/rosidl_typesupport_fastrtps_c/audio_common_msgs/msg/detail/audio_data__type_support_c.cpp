// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/msg/detail/audio_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "audio_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "audio_common_msgs/msg/detail/audio_data__struct.h"
#include "audio_common_msgs/msg/detail/audio_data__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // float32_data, int16_data, int32_data, int8_data, uint8_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // float32_data, int16_data, int32_data, int8_data, uint8_data

// forward declare type support functions


using _AudioData__ros_msg_type = audio_common_msgs__msg__AudioData;

static bool _AudioData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AudioData__ros_msg_type * ros_message = static_cast<const _AudioData__ros_msg_type *>(untyped_ros_message);
  // Field name: float32_data
  {
    size_t size = ros_message->float32_data.size;
    auto array_ptr = ros_message->float32_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int32_data
  {
    size_t size = ros_message->int32_data.size;
    auto array_ptr = ros_message->int32_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16_data
  {
    size_t size = ros_message->int16_data.size;
    auto array_ptr = ros_message->int16_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int8_data
  {
    size_t size = ros_message->int8_data.size;
    auto array_ptr = ros_message->int8_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint8_data
  {
    size_t size = ros_message->uint8_data.size;
    auto array_ptr = ros_message->uint8_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AudioData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AudioData__ros_msg_type * ros_message = static_cast<_AudioData__ros_msg_type *>(untyped_ros_message);
  // Field name: float32_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float32_data.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->float32_data);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->float32_data, size)) {
      fprintf(stderr, "failed to create array for field 'float32_data'");
      return false;
    }
    auto array_ptr = ros_message->float32_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int32_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int32_data.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->int32_data);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->int32_data, size)) {
      fprintf(stderr, "failed to create array for field 'int32_data'");
      return false;
    }
    auto array_ptr = ros_message->int32_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int16_data.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->int16_data);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->int16_data, size)) {
      fprintf(stderr, "failed to create array for field 'int16_data'");
      return false;
    }
    auto array_ptr = ros_message->int16_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int8_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int8_data.data) {
      rosidl_runtime_c__int8__Sequence__fini(&ros_message->int8_data);
    }
    if (!rosidl_runtime_c__int8__Sequence__init(&ros_message->int8_data, size)) {
      fprintf(stderr, "failed to create array for field 'int8_data'");
      return false;
    }
    auto array_ptr = ros_message->int8_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint8_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint8_data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->uint8_data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->uint8_data, size)) {
      fprintf(stderr, "failed to create array for field 'uint8_data'");
      return false;
    }
    auto array_ptr = ros_message->uint8_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_common_msgs
size_t get_serialized_size_audio_common_msgs__msg__AudioData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AudioData__ros_msg_type * ros_message = static_cast<const _AudioData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name float32_data
  {
    size_t array_size = ros_message->float32_data.size;
    auto array_ptr = ros_message->float32_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_data
  {
    size_t array_size = ros_message->int32_data.size;
    auto array_ptr = ros_message->int32_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_data
  {
    size_t array_size = ros_message->int16_data.size;
    auto array_ptr = ros_message->int16_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_data
  {
    size_t array_size = ros_message->int8_data.size;
    auto array_ptr = ros_message->int8_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_data
  {
    size_t array_size = ros_message->uint8_data.size;
    auto array_ptr = ros_message->uint8_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AudioData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_audio_common_msgs__msg__AudioData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_audio_common_msgs
size_t max_serialized_size_audio_common_msgs__msg__AudioData(
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

  // member: float32_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int32_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int16_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int8_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = audio_common_msgs__msg__AudioData;
    is_plain =
      (
      offsetof(DataType, uint8_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AudioData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_audio_common_msgs__msg__AudioData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AudioData = {
  "audio_common_msgs::msg",
  "AudioData",
  _AudioData__cdr_serialize,
  _AudioData__cdr_deserialize,
  _AudioData__get_serialized_size,
  _AudioData__max_serialized_size
};

static rosidl_message_type_support_t _AudioData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AudioData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_common_msgs, msg, AudioData)() {
  return &_AudioData__type_support;
}

#if defined(__cplusplus)
}
#endif
