// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audio_common_msgs:srv/MusicPlay.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/srv/detail/music_play__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `audio`
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

bool
audio_common_msgs__srv__MusicPlay_Request__init(audio_common_msgs__srv__MusicPlay_Request * msg)
{
  if (!msg) {
    return false;
  }
  // audio
  if (!rosidl_runtime_c__String__init(&msg->audio)) {
    audio_common_msgs__srv__MusicPlay_Request__fini(msg);
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__init(&msg->file_path)) {
    audio_common_msgs__srv__MusicPlay_Request__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->file_path, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  // loop
  msg->loop = false;
  return true;
abort_init_0:
  return false;
}

void
audio_common_msgs__srv__MusicPlay_Request__fini(audio_common_msgs__srv__MusicPlay_Request * msg)
{
  if (!msg) {
    return;
  }
  // audio
  rosidl_runtime_c__String__fini(&msg->audio);
  // file_path
  rosidl_runtime_c__String__fini(&msg->file_path);
  // loop
}

bool
audio_common_msgs__srv__MusicPlay_Request__are_equal(const audio_common_msgs__srv__MusicPlay_Request * lhs, const audio_common_msgs__srv__MusicPlay_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // audio
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->audio), &(rhs->audio)))
  {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_path), &(rhs->file_path)))
  {
    return false;
  }
  // loop
  if (lhs->loop != rhs->loop) {
    return false;
  }
  return true;
}

bool
audio_common_msgs__srv__MusicPlay_Request__copy(
  const audio_common_msgs__srv__MusicPlay_Request * input,
  audio_common_msgs__srv__MusicPlay_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // audio
  if (!rosidl_runtime_c__String__copy(
      &(input->audio), &(output->audio)))
  {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->file_path), &(output->file_path)))
  {
    return false;
  }
  // loop
  output->loop = input->loop;
  return true;
}

audio_common_msgs__srv__MusicPlay_Request *
audio_common_msgs__srv__MusicPlay_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__srv__MusicPlay_Request * msg = (audio_common_msgs__srv__MusicPlay_Request *)allocator.allocate(sizeof(audio_common_msgs__srv__MusicPlay_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__srv__MusicPlay_Request));
  bool success = audio_common_msgs__srv__MusicPlay_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__srv__MusicPlay_Request__destroy(audio_common_msgs__srv__MusicPlay_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__srv__MusicPlay_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__srv__MusicPlay_Request__Sequence__init(audio_common_msgs__srv__MusicPlay_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__srv__MusicPlay_Request * data = NULL;

  if (size) {
    data = (audio_common_msgs__srv__MusicPlay_Request *)allocator.zero_allocate(size, sizeof(audio_common_msgs__srv__MusicPlay_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__srv__MusicPlay_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__srv__MusicPlay_Request__fini(&data[i - 1]);
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
audio_common_msgs__srv__MusicPlay_Request__Sequence__fini(audio_common_msgs__srv__MusicPlay_Request__Sequence * array)
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
      audio_common_msgs__srv__MusicPlay_Request__fini(&array->data[i]);
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

audio_common_msgs__srv__MusicPlay_Request__Sequence *
audio_common_msgs__srv__MusicPlay_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__srv__MusicPlay_Request__Sequence * array = (audio_common_msgs__srv__MusicPlay_Request__Sequence *)allocator.allocate(sizeof(audio_common_msgs__srv__MusicPlay_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__srv__MusicPlay_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__srv__MusicPlay_Request__Sequence__destroy(audio_common_msgs__srv__MusicPlay_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__srv__MusicPlay_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__srv__MusicPlay_Request__Sequence__are_equal(const audio_common_msgs__srv__MusicPlay_Request__Sequence * lhs, const audio_common_msgs__srv__MusicPlay_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__srv__MusicPlay_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__srv__MusicPlay_Request__Sequence__copy(
  const audio_common_msgs__srv__MusicPlay_Request__Sequence * input,
  audio_common_msgs__srv__MusicPlay_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__srv__MusicPlay_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__srv__MusicPlay_Request * data =
      (audio_common_msgs__srv__MusicPlay_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__srv__MusicPlay_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__srv__MusicPlay_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__srv__MusicPlay_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
audio_common_msgs__srv__MusicPlay_Response__init(audio_common_msgs__srv__MusicPlay_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
audio_common_msgs__srv__MusicPlay_Response__fini(audio_common_msgs__srv__MusicPlay_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
audio_common_msgs__srv__MusicPlay_Response__are_equal(const audio_common_msgs__srv__MusicPlay_Response * lhs, const audio_common_msgs__srv__MusicPlay_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
audio_common_msgs__srv__MusicPlay_Response__copy(
  const audio_common_msgs__srv__MusicPlay_Response * input,
  audio_common_msgs__srv__MusicPlay_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

audio_common_msgs__srv__MusicPlay_Response *
audio_common_msgs__srv__MusicPlay_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__srv__MusicPlay_Response * msg = (audio_common_msgs__srv__MusicPlay_Response *)allocator.allocate(sizeof(audio_common_msgs__srv__MusicPlay_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__srv__MusicPlay_Response));
  bool success = audio_common_msgs__srv__MusicPlay_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__srv__MusicPlay_Response__destroy(audio_common_msgs__srv__MusicPlay_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__srv__MusicPlay_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__srv__MusicPlay_Response__Sequence__init(audio_common_msgs__srv__MusicPlay_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__srv__MusicPlay_Response * data = NULL;

  if (size) {
    data = (audio_common_msgs__srv__MusicPlay_Response *)allocator.zero_allocate(size, sizeof(audio_common_msgs__srv__MusicPlay_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__srv__MusicPlay_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__srv__MusicPlay_Response__fini(&data[i - 1]);
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
audio_common_msgs__srv__MusicPlay_Response__Sequence__fini(audio_common_msgs__srv__MusicPlay_Response__Sequence * array)
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
      audio_common_msgs__srv__MusicPlay_Response__fini(&array->data[i]);
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

audio_common_msgs__srv__MusicPlay_Response__Sequence *
audio_common_msgs__srv__MusicPlay_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__srv__MusicPlay_Response__Sequence * array = (audio_common_msgs__srv__MusicPlay_Response__Sequence *)allocator.allocate(sizeof(audio_common_msgs__srv__MusicPlay_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__srv__MusicPlay_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__srv__MusicPlay_Response__Sequence__destroy(audio_common_msgs__srv__MusicPlay_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__srv__MusicPlay_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__srv__MusicPlay_Response__Sequence__are_equal(const audio_common_msgs__srv__MusicPlay_Response__Sequence * lhs, const audio_common_msgs__srv__MusicPlay_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__srv__MusicPlay_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__srv__MusicPlay_Response__Sequence__copy(
  const audio_common_msgs__srv__MusicPlay_Response__Sequence * input,
  audio_common_msgs__srv__MusicPlay_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__srv__MusicPlay_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__srv__MusicPlay_Response * data =
      (audio_common_msgs__srv__MusicPlay_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__srv__MusicPlay_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__srv__MusicPlay_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__srv__MusicPlay_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
