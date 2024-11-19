// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "audio_common_msgs/msg/detail/audio_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace audio_common_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) audio_common_msgs::msg::AudioStamped(_init);
}

void AudioStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<audio_common_msgs::msg::AudioStamped *>(message_memory);
  typed_message->~AudioStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs::msg::AudioStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "audio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<audio_common_msgs::msg::Audio>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs::msg::AudioStamped, audio),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioStamped_message_members = {
  "audio_common_msgs::msg",  // message namespace
  "AudioStamped",  // message name
  2,  // number of fields
  sizeof(audio_common_msgs::msg::AudioStamped),
  AudioStamped_message_member_array,  // message members
  AudioStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace audio_common_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<audio_common_msgs::msg::AudioStamped>()
{
  return &::audio_common_msgs::msg::rosidl_typesupport_introspection_cpp::AudioStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, audio_common_msgs, msg, AudioStamped)() {
  return &::audio_common_msgs::msg::rosidl_typesupport_introspection_cpp::AudioStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
