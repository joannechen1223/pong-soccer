// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/msg/detail/audio_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `float32_data`
// Member `int32_data`
// Member `int16_data`
// Member `int8_data`
// Member `uint8_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
audio_common_msgs__msg__AudioData__init(audio_common_msgs__msg__AudioData * msg)
{
  if (!msg) {
    return false;
  }
  // float32_data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->float32_data, 0)) {
    audio_common_msgs__msg__AudioData__fini(msg);
    return false;
  }
  // int32_data
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->int32_data, 0)) {
    audio_common_msgs__msg__AudioData__fini(msg);
    return false;
  }
  // int16_data
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->int16_data, 0)) {
    audio_common_msgs__msg__AudioData__fini(msg);
    return false;
  }
  // int8_data
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->int8_data, 0)) {
    audio_common_msgs__msg__AudioData__fini(msg);
    return false;
  }
  // uint8_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->uint8_data, 0)) {
    audio_common_msgs__msg__AudioData__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__msg__AudioData__fini(audio_common_msgs__msg__AudioData * msg)
{
  if (!msg) {
    return;
  }
  // float32_data
  rosidl_runtime_c__float__Sequence__fini(&msg->float32_data);
  // int32_data
  rosidl_runtime_c__int32__Sequence__fini(&msg->int32_data);
  // int16_data
  rosidl_runtime_c__int16__Sequence__fini(&msg->int16_data);
  // int8_data
  rosidl_runtime_c__int8__Sequence__fini(&msg->int8_data);
  // uint8_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->uint8_data);
}

bool
audio_common_msgs__msg__AudioData__are_equal(const audio_common_msgs__msg__AudioData * lhs, const audio_common_msgs__msg__AudioData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // float32_data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->float32_data), &(rhs->float32_data)))
  {
    return false;
  }
  // int32_data
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->int32_data), &(rhs->int32_data)))
  {
    return false;
  }
  // int16_data
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->int16_data), &(rhs->int16_data)))
  {
    return false;
  }
  // int8_data
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->int8_data), &(rhs->int8_data)))
  {
    return false;
  }
  // uint8_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->uint8_data), &(rhs->uint8_data)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__msg__AudioData__copy(
  const audio_common_msgs__msg__AudioData * input,
  audio_common_msgs__msg__AudioData * output)
{
  if (!input || !output) {
    return false;
  }
  // float32_data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->float32_data), &(output->float32_data)))
  {
    return false;
  }
  // int32_data
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->int32_data), &(output->int32_data)))
  {
    return false;
  }
  // int16_data
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->int16_data), &(output->int16_data)))
  {
    return false;
  }
  // int8_data
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->int8_data), &(output->int8_data)))
  {
    return false;
  }
  // uint8_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->uint8_data), &(output->uint8_data)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__msg__AudioData *
audio_common_msgs__msg__AudioData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__msg__AudioData * msg = (audio_common_msgs__msg__AudioData *)allocator.allocate(sizeof(audio_common_msgs__msg__AudioData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__msg__AudioData));
  bool success = audio_common_msgs__msg__AudioData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__msg__AudioData__destroy(audio_common_msgs__msg__AudioData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__msg__AudioData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__msg__AudioData__Sequence__init(audio_common_msgs__msg__AudioData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__msg__AudioData * data = NULL;

  if (size) {
    data = (audio_common_msgs__msg__AudioData *)allocator.zero_allocate(size, sizeof(audio_common_msgs__msg__AudioData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__msg__AudioData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__msg__AudioData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
audio_common_msgs__msg__AudioData__Sequence__fini(audio_common_msgs__msg__AudioData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      audio_common_msgs__msg__AudioData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

audio_common_msgs__msg__AudioData__Sequence *
audio_common_msgs__msg__AudioData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__msg__AudioData__Sequence * array = (audio_common_msgs__msg__AudioData__Sequence *)allocator.allocate(sizeof(audio_common_msgs__msg__AudioData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__msg__AudioData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__msg__AudioData__Sequence__destroy(audio_common_msgs__msg__AudioData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__msg__AudioData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__msg__AudioData__Sequence__are_equal(const audio_common_msgs__msg__AudioData__Sequence * lhs, const audio_common_msgs__msg__AudioData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__msg__AudioData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__msg__AudioData__Sequence__copy(
  const audio_common_msgs__msg__AudioData__Sequence * input,
  audio_common_msgs__msg__AudioData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__msg__AudioData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__msg__AudioData * data =
      (audio_common_msgs__msg__AudioData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__msg__AudioData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__msg__AudioData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__msg__AudioData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
