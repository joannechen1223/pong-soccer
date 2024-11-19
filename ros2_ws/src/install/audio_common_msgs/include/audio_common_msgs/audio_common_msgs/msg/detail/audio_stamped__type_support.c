// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "audio_common_msgs/msg/detail/audio_stamped__rosidl_typesupport_introspection_c.h"
#include "audio_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "audio_common_msgs/msg/detail/audio_stamped__functions.h"
#include "audio_common_msgs/msg/detail/audio_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `audio`
#include "audio_common_msgs/msg/audio.h"
// Member `audio`
#include "audio_common_msgs/msg/detail/audio__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audio_common_msgs__msg__AudioStamped__init(message_memory);
}

void audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_fini_function(void * message_memory)
{
  audio_common_msgs__msg__AudioStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs__msg__AudioStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "audio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs__msg__AudioStamped, audio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_members = {
  "audio_common_msgs__msg",  // message namespace
  "AudioStamped",  // message name
  2,  // number of fields
  sizeof(audio_common_msgs__msg__AudioStamped),
  audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_member_array,  // message members
  audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_type_support_handle = {
  0,
  &audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audio_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_common_msgs, msg, AudioStamped)() {
  audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_common_msgs, msg, Audio)();
  if (!audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_type_support_handle.typesupport_identifier) {
    audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &audio_common_msgs__msg__AudioStamped__rosidl_typesupport_introspection_c__AudioStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
