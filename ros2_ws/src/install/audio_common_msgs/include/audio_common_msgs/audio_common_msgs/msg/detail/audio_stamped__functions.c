// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/msg/detail/audio_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `audio`
#include "audio_common_msgs/msg/detail/audio__functions.h"

bool
audio_common_msgs__msg__AudioStamped__init(audio_common_msgs__msg__AudioStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    audio_common_msgs__msg__AudioStamped__fini(msg);
    return false;
  }
  // audio
  if (!audio_common_msgs__msg__Audio__init(&msg->audio)) {
    audio_common_msgs__msg__AudioStamped__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__msg__AudioStamped__fini(audio_common_msgs__msg__AudioStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // audio
  audio_common_msgs__msg__Audio__fini(&msg->audio);
}

bool
audio_common_msgs__msg__AudioStamped__are_equal(const audio_common_msgs__msg__AudioStamped * lhs, const audio_common_msgs__msg__AudioStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // audio
  if (!audio_common_msgs__msg__Audio__are_equal(
      &(lhs->audio), &(rhs->audio)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__msg__AudioStamped__copy(
  const audio_common_msgs__msg__AudioStamped * input,
  audio_common_msgs__msg__AudioStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // audio
  if (!audio_common_msgs__msg__Audio__copy(
      &(input->audio), &(output->audio)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__msg__AudioStamped *
audio_common_msgs__msg__AudioStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__msg__AudioStamped * msg = (audio_common_msgs__msg__AudioStamped *)allocator.allocate(sizeof(audio_common_msgs__msg__AudioStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__msg__AudioStamped));
  bool success = audio_common_msgs__msg__AudioStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__msg__AudioStamped__destroy(audio_common_msgs__msg__AudioStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__msg__AudioStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__msg__AudioStamped__Sequence__init(audio_common_msgs__msg__AudioStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__msg__AudioStamped * data = NULL;

  if (size) {
    data = (audio_common_msgs__msg__AudioStamped *)allocator.zero_allocate(size, sizeof(audio_common_msgs__msg__AudioStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__msg__AudioStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__msg__AudioStamped__fini(&data[i - 1]);
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
audio_common_msgs__msg__AudioStamped__Sequence__fini(audio_common_msgs__msg__AudioStamped__Sequence * array)
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
      audio_common_msgs__msg__AudioStamped__fini(&array->data[i]);
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

audio_common_msgs__msg__AudioStamped__Sequence *
audio_common_msgs__msg__AudioStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__msg__AudioStamped__Sequence * array = (audio_common_msgs__msg__AudioStamped__Sequence *)allocator.allocate(sizeof(audio_common_msgs__msg__AudioStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__msg__AudioStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__msg__AudioStamped__Sequence__destroy(audio_common_msgs__msg__AudioStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__msg__AudioStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__msg__AudioStamped__Sequence__are_equal(const audio_common_msgs__msg__AudioStamped__Sequence * lhs, const audio_common_msgs__msg__AudioStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__msg__AudioStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__msg__AudioStamped__Sequence__copy(
  const audio_common_msgs__msg__AudioStamped__Sequence * input,
  audio_common_msgs__msg__AudioStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__msg__AudioStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__msg__AudioStamped * data =
      (audio_common_msgs__msg__AudioStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__msg__AudioStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__msg__AudioStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__msg__AudioStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
