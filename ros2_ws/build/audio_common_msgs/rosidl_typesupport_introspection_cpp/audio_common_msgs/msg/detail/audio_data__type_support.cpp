// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "audio_common_msgs/msg/detail/audio_data__struct.hpp"
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

void AudioData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) audio_common_msgs::msg::AudioData(_init);
}

void AudioData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<audio_common_msgs::msg::AudioData *>(message_memory);
  typed_message->~AudioData();
}

size_t size_function__AudioData__float32_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioData__float32_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioData__float32_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioData__float32_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AudioData__float32_data(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AudioData__float32_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AudioData__float32_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AudioData__float32_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AudioData__int32_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioData__int32_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioData__int32_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioData__int32_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__AudioData__int32_data(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__AudioData__int32_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__AudioData__int32_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__AudioData__int32_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AudioData__int16_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioData__int16_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioData__int16_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioData__int16_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__AudioData__int16_data(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__AudioData__int16_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__AudioData__int16_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__AudioData__int16_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AudioData__int8_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioData__int8_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioData__int8_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioData__int8_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__AudioData__int8_data(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__AudioData__int8_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__AudioData__int8_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__AudioData__int8_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AudioData__uint8_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AudioData__uint8_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AudioData__uint8_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AudioData__uint8_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__AudioData__uint8_data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__AudioData__uint8_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__AudioData__uint8_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__AudioData__uint8_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioData_message_member_array[5] = {
  {
    "float32_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs::msg::AudioData, float32_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioData__float32_data,  // size() function pointer
    get_const_function__AudioData__float32_data,  // get_const(index) function pointer
    get_function__AudioData__float32_data,  // get(index) function pointer
    fetch_function__AudioData__float32_data,  // fetch(index, &value) function pointer
    assign_function__AudioData__float32_data,  // assign(index, value) function pointer
    resize_function__AudioData__float32_data  // resize(index) function pointer
  },
  {
    "int32_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs::msg::AudioData, int32_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioData__int32_data,  // size() function pointer
    get_const_function__AudioData__int32_data,  // get_const(index) function pointer
    get_function__AudioData__int32_data,  // get(index) function pointer
    fetch_function__AudioData__int32_data,  // fetch(index, &value) function pointer
    assign_function__AudioData__int32_data,  // assign(index, value) function pointer
    resize_function__AudioData__int32_data  // resize(index) function pointer
  },
  {
    "int16_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs::msg::AudioData, int16_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioData__int16_data,  // size() function pointer
    get_const_function__AudioData__int16_data,  // get_const(index) function pointer
    get_function__AudioData__int16_data,  // get(index) function pointer
    fetch_function__AudioData__int16_data,  // fetch(index, &value) function pointer
    assign_function__AudioData__int16_data,  // assign(index, value) function pointer
    resize_function__AudioData__int16_data  // resize(index) function pointer
  },
  {
    "int8_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs::msg::AudioData, int8_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioData__int8_data,  // size() function pointer
    get_const_function__AudioData__int8_data,  // get_const(index) function pointer
    get_function__AudioData__int8_data,  // get(index) function pointer
    fetch_function__AudioData__int8_data,  // fetch(index, &value) function pointer
    assign_function__AudioData__int8_data,  // assign(index, value) function pointer
    resize_function__AudioData__int8_data  // resize(index) function pointer
  },
  {
    "uint8_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs::msg::AudioData, uint8_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AudioData__uint8_data,  // size() function pointer
    get_const_function__AudioData__uint8_data,  // get_const(index) function pointer
    get_function__AudioData__uint8_data,  // get(index) function pointer
    fetch_function__AudioData__uint8_data,  // fetch(index, &value) function pointer
    assign_function__AudioData__uint8_data,  // assign(index, value) function pointer
    resize_function__AudioData__uint8_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioData_message_members = {
  "audio_common_msgs::msg",  // message namespace
  "AudioData",  // message name
  5,  // number of fields
  sizeof(audio_common_msgs::msg::AudioData),
  AudioData_message_member_array,  // message members
  AudioData_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioData_message_members,
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
get_message_type_support_handle<audio_common_msgs::msg::AudioData>()
{
  return &::audio_common_msgs::msg::rosidl_typesupport_introspection_cpp::AudioData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, audio_common_msgs, msg, AudioData)() {
  return &::audio_common_msgs::msg::rosidl_typesupport_introspection_cpp::AudioData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
