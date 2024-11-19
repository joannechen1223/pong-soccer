// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "audio_common_msgs/msg/detail/audio_data__rosidl_typesupport_introspection_c.h"
#include "audio_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "audio_common_msgs/msg/detail/audio_data__functions.h"
#include "audio_common_msgs/msg/detail/audio_data__struct.h"


// Include directives for member types
// Member `float32_data`
// Member `int32_data`
// Member `int16_data`
// Member `int8_data`
// Member `uint8_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  audio_common_msgs__msg__AudioData__init(message_memory);
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_fini_function(void * message_memory)
{
  audio_common_msgs__msg__AudioData__fini(message_memory);
}

size_t audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__float32_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__float32_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__float32_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__float32_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__float32_data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__float32_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__float32_data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__float32_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__int32_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int32_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int32_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__int32_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int32_data(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__int32_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int32_data(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__int32_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__int16_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int16_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int16_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__int16_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int16_data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__int16_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int16_data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__int16_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__int8_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int8_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int8_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__int8_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int8_data(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__int8_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int8_data(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__int8_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

size_t audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__uint8_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__uint8_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__uint8_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__uint8_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__uint8_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__uint8_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__uint8_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__uint8_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_member_array[5] = {
  {
    "float32_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs__msg__AudioData, float32_data),  // bytes offset in struct
    NULL,  // default value
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__float32_data,  // size() function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__float32_data,  // get_const(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__float32_data,  // get(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__float32_data,  // fetch(index, &value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__float32_data,  // assign(index, value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__float32_data  // resize(index) function pointer
  },
  {
    "int32_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs__msg__AudioData, int32_data),  // bytes offset in struct
    NULL,  // default value
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__int32_data,  // size() function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int32_data,  // get_const(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int32_data,  // get(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__int32_data,  // fetch(index, &value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__int32_data,  // assign(index, value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__int32_data  // resize(index) function pointer
  },
  {
    "int16_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs__msg__AudioData, int16_data),  // bytes offset in struct
    NULL,  // default value
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__int16_data,  // size() function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int16_data,  // get_const(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int16_data,  // get(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__int16_data,  // fetch(index, &value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__int16_data,  // assign(index, value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__int16_data  // resize(index) function pointer
  },
  {
    "int8_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs__msg__AudioData, int8_data),  // bytes offset in struct
    NULL,  // default value
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__int8_data,  // size() function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__int8_data,  // get_const(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__int8_data,  // get(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__int8_data,  // fetch(index, &value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__int8_data,  // assign(index, value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__int8_data  // resize(index) function pointer
  },
  {
    "uint8_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(audio_common_msgs__msg__AudioData, uint8_data),  // bytes offset in struct
    NULL,  // default value
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__size_function__AudioData__uint8_data,  // size() function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_const_function__AudioData__uint8_data,  // get_const(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__get_function__AudioData__uint8_data,  // get(index) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__fetch_function__AudioData__uint8_data,  // fetch(index, &value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__assign_function__AudioData__uint8_data,  // assign(index, value) function pointer
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__resize_function__AudioData__uint8_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_members = {
  "audio_common_msgs__msg",  // message namespace
  "AudioData",  // message name
  5,  // number of fields
  sizeof(audio_common_msgs__msg__AudioData),
  audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_member_array,  // message members
  audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_init_function,  // function to initialize message memory (memory has to be allocated)
  audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_type_support_handle = {
  0,
  &audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_audio_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_common_msgs, msg, AudioData)() {
  if (!audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_type_support_handle.typesupport_identifier) {
    audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &audio_common_msgs__msg__AudioData__rosidl_typesupport_introspection_c__AudioData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
