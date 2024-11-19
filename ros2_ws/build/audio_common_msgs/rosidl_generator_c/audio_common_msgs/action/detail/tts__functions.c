// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from audio_common_msgs:action/TTS.idl
// generated code does not contain a copyright notice
#include "audio_common_msgs/action/detail/tts__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `text`
// Member `language`
#include "rosidl_runtime_c/string_functions.h"

bool
audio_common_msgs__action__TTS_Goal__init(audio_common_msgs__action__TTS_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    audio_common_msgs__action__TTS_Goal__fini(msg);
    return false;
  }
  // language
  if (!rosidl_runtime_c__String__init(&msg->language)) {
    audio_common_msgs__action__TTS_Goal__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->language, "en");
    if (!success) {
      goto abort_init_0;
    }
  }
  // volume
  msg->volume = 0.5f;
  // rate
  msg->rate = 0.5f;
  return true;
abort_init_0:
  return false;
}

void
audio_common_msgs__action__TTS_Goal__fini(audio_common_msgs__action__TTS_Goal * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // language
  rosidl_runtime_c__String__fini(&msg->language);
  // volume
  // rate
}

bool
audio_common_msgs__action__TTS_Goal__are_equal(const audio_common_msgs__action__TTS_Goal * lhs, const audio_common_msgs__action__TTS_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // language
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->language), &(rhs->language)))
  {
    return false;
  }
  // volume
  if (lhs->volume != rhs->volume) {
    return false;
  }
  // rate
  if (lhs->rate != rhs->rate) {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_Goal__copy(
  const audio_common_msgs__action__TTS_Goal * input,
  audio_common_msgs__action__TTS_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // language
  if (!rosidl_runtime_c__String__copy(
      &(input->language), &(output->language)))
  {
    return false;
  }
  // volume
  output->volume = input->volume;
  // rate
  output->rate = input->rate;
  return true;
}

audio_common_msgs__action__TTS_Goal *
audio_common_msgs__action__TTS_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Goal * msg = (audio_common_msgs__action__TTS_Goal *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_Goal));
  bool success = audio_common_msgs__action__TTS_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_Goal__destroy(audio_common_msgs__action__TTS_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_Goal__Sequence__init(audio_common_msgs__action__TTS_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Goal * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_Goal *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_Goal__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_Goal__Sequence__fini(audio_common_msgs__action__TTS_Goal__Sequence * array)
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
      audio_common_msgs__action__TTS_Goal__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_Goal__Sequence *
audio_common_msgs__action__TTS_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Goal__Sequence * array = (audio_common_msgs__action__TTS_Goal__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_Goal__Sequence__destroy(audio_common_msgs__action__TTS_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_Goal__Sequence__are_equal(const audio_common_msgs__action__TTS_Goal__Sequence * lhs, const audio_common_msgs__action__TTS_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_Goal__Sequence__copy(
  const audio_common_msgs__action__TTS_Goal__Sequence * input,
  audio_common_msgs__action__TTS_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_Goal * data =
      (audio_common_msgs__action__TTS_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `text`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
audio_common_msgs__action__TTS_Result__init(audio_common_msgs__action__TTS_Result * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    audio_common_msgs__action__TTS_Result__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__action__TTS_Result__fini(audio_common_msgs__action__TTS_Result * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
audio_common_msgs__action__TTS_Result__are_equal(const audio_common_msgs__action__TTS_Result * lhs, const audio_common_msgs__action__TTS_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_Result__copy(
  const audio_common_msgs__action__TTS_Result * input,
  audio_common_msgs__action__TTS_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__action__TTS_Result *
audio_common_msgs__action__TTS_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Result * msg = (audio_common_msgs__action__TTS_Result *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_Result));
  bool success = audio_common_msgs__action__TTS_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_Result__destroy(audio_common_msgs__action__TTS_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_Result__Sequence__init(audio_common_msgs__action__TTS_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Result * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_Result *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_Result__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_Result__Sequence__fini(audio_common_msgs__action__TTS_Result__Sequence * array)
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
      audio_common_msgs__action__TTS_Result__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_Result__Sequence *
audio_common_msgs__action__TTS_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Result__Sequence * array = (audio_common_msgs__action__TTS_Result__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_Result__Sequence__destroy(audio_common_msgs__action__TTS_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_Result__Sequence__are_equal(const audio_common_msgs__action__TTS_Result__Sequence * lhs, const audio_common_msgs__action__TTS_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_Result__Sequence__copy(
  const audio_common_msgs__action__TTS_Result__Sequence * input,
  audio_common_msgs__action__TTS_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_Result * data =
      (audio_common_msgs__action__TTS_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
audio_common_msgs__action__TTS_Feedback__init(audio_common_msgs__action__TTS_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
audio_common_msgs__action__TTS_Feedback__fini(audio_common_msgs__action__TTS_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
audio_common_msgs__action__TTS_Feedback__are_equal(const audio_common_msgs__action__TTS_Feedback * lhs, const audio_common_msgs__action__TTS_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_Feedback__copy(
  const audio_common_msgs__action__TTS_Feedback * input,
  audio_common_msgs__action__TTS_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

audio_common_msgs__action__TTS_Feedback *
audio_common_msgs__action__TTS_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Feedback * msg = (audio_common_msgs__action__TTS_Feedback *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_Feedback));
  bool success = audio_common_msgs__action__TTS_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_Feedback__destroy(audio_common_msgs__action__TTS_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_Feedback__Sequence__init(audio_common_msgs__action__TTS_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Feedback * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_Feedback *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_Feedback__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_Feedback__Sequence__fini(audio_common_msgs__action__TTS_Feedback__Sequence * array)
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
      audio_common_msgs__action__TTS_Feedback__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_Feedback__Sequence *
audio_common_msgs__action__TTS_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_Feedback__Sequence * array = (audio_common_msgs__action__TTS_Feedback__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_Feedback__Sequence__destroy(audio_common_msgs__action__TTS_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_Feedback__Sequence__are_equal(const audio_common_msgs__action__TTS_Feedback__Sequence * lhs, const audio_common_msgs__action__TTS_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_Feedback__Sequence__copy(
  const audio_common_msgs__action__TTS_Feedback__Sequence * input,
  audio_common_msgs__action__TTS_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_Feedback * data =
      (audio_common_msgs__action__TTS_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "audio_common_msgs/action/detail/tts__functions.h"

bool
audio_common_msgs__action__TTS_SendGoal_Request__init(audio_common_msgs__action__TTS_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    audio_common_msgs__action__TTS_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!audio_common_msgs__action__TTS_Goal__init(&msg->goal)) {
    audio_common_msgs__action__TTS_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__action__TTS_SendGoal_Request__fini(audio_common_msgs__action__TTS_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  audio_common_msgs__action__TTS_Goal__fini(&msg->goal);
}

bool
audio_common_msgs__action__TTS_SendGoal_Request__are_equal(const audio_common_msgs__action__TTS_SendGoal_Request * lhs, const audio_common_msgs__action__TTS_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!audio_common_msgs__action__TTS_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_SendGoal_Request__copy(
  const audio_common_msgs__action__TTS_SendGoal_Request * input,
  audio_common_msgs__action__TTS_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!audio_common_msgs__action__TTS_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__action__TTS_SendGoal_Request *
audio_common_msgs__action__TTS_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_SendGoal_Request * msg = (audio_common_msgs__action__TTS_SendGoal_Request *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_SendGoal_Request));
  bool success = audio_common_msgs__action__TTS_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_SendGoal_Request__destroy(audio_common_msgs__action__TTS_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_SendGoal_Request__Sequence__init(audio_common_msgs__action__TTS_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_SendGoal_Request * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_SendGoal_Request *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_SendGoal_Request__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_SendGoal_Request__Sequence__fini(audio_common_msgs__action__TTS_SendGoal_Request__Sequence * array)
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
      audio_common_msgs__action__TTS_SendGoal_Request__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_SendGoal_Request__Sequence *
audio_common_msgs__action__TTS_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_SendGoal_Request__Sequence * array = (audio_common_msgs__action__TTS_SendGoal_Request__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_SendGoal_Request__Sequence__destroy(audio_common_msgs__action__TTS_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_SendGoal_Request__Sequence__are_equal(const audio_common_msgs__action__TTS_SendGoal_Request__Sequence * lhs, const audio_common_msgs__action__TTS_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_SendGoal_Request__Sequence__copy(
  const audio_common_msgs__action__TTS_SendGoal_Request__Sequence * input,
  audio_common_msgs__action__TTS_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_SendGoal_Request * data =
      (audio_common_msgs__action__TTS_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
audio_common_msgs__action__TTS_SendGoal_Response__init(audio_common_msgs__action__TTS_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    audio_common_msgs__action__TTS_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__action__TTS_SendGoal_Response__fini(audio_common_msgs__action__TTS_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
audio_common_msgs__action__TTS_SendGoal_Response__are_equal(const audio_common_msgs__action__TTS_SendGoal_Response * lhs, const audio_common_msgs__action__TTS_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_SendGoal_Response__copy(
  const audio_common_msgs__action__TTS_SendGoal_Response * input,
  audio_common_msgs__action__TTS_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__action__TTS_SendGoal_Response *
audio_common_msgs__action__TTS_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_SendGoal_Response * msg = (audio_common_msgs__action__TTS_SendGoal_Response *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_SendGoal_Response));
  bool success = audio_common_msgs__action__TTS_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_SendGoal_Response__destroy(audio_common_msgs__action__TTS_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_SendGoal_Response__Sequence__init(audio_common_msgs__action__TTS_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_SendGoal_Response * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_SendGoal_Response *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_SendGoal_Response__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_SendGoal_Response__Sequence__fini(audio_common_msgs__action__TTS_SendGoal_Response__Sequence * array)
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
      audio_common_msgs__action__TTS_SendGoal_Response__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_SendGoal_Response__Sequence *
audio_common_msgs__action__TTS_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_SendGoal_Response__Sequence * array = (audio_common_msgs__action__TTS_SendGoal_Response__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_SendGoal_Response__Sequence__destroy(audio_common_msgs__action__TTS_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_SendGoal_Response__Sequence__are_equal(const audio_common_msgs__action__TTS_SendGoal_Response__Sequence * lhs, const audio_common_msgs__action__TTS_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_SendGoal_Response__Sequence__copy(
  const audio_common_msgs__action__TTS_SendGoal_Response__Sequence * input,
  audio_common_msgs__action__TTS_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_SendGoal_Response * data =
      (audio_common_msgs__action__TTS_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
audio_common_msgs__action__TTS_GetResult_Request__init(audio_common_msgs__action__TTS_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    audio_common_msgs__action__TTS_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__action__TTS_GetResult_Request__fini(audio_common_msgs__action__TTS_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
audio_common_msgs__action__TTS_GetResult_Request__are_equal(const audio_common_msgs__action__TTS_GetResult_Request * lhs, const audio_common_msgs__action__TTS_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_GetResult_Request__copy(
  const audio_common_msgs__action__TTS_GetResult_Request * input,
  audio_common_msgs__action__TTS_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__action__TTS_GetResult_Request *
audio_common_msgs__action__TTS_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_GetResult_Request * msg = (audio_common_msgs__action__TTS_GetResult_Request *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_GetResult_Request));
  bool success = audio_common_msgs__action__TTS_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_GetResult_Request__destroy(audio_common_msgs__action__TTS_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_GetResult_Request__Sequence__init(audio_common_msgs__action__TTS_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_GetResult_Request * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_GetResult_Request *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_GetResult_Request__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_GetResult_Request__Sequence__fini(audio_common_msgs__action__TTS_GetResult_Request__Sequence * array)
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
      audio_common_msgs__action__TTS_GetResult_Request__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_GetResult_Request__Sequence *
audio_common_msgs__action__TTS_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_GetResult_Request__Sequence * array = (audio_common_msgs__action__TTS_GetResult_Request__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_GetResult_Request__Sequence__destroy(audio_common_msgs__action__TTS_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_GetResult_Request__Sequence__are_equal(const audio_common_msgs__action__TTS_GetResult_Request__Sequence * lhs, const audio_common_msgs__action__TTS_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_GetResult_Request__Sequence__copy(
  const audio_common_msgs__action__TTS_GetResult_Request__Sequence * input,
  audio_common_msgs__action__TTS_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_GetResult_Request * data =
      (audio_common_msgs__action__TTS_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "audio_common_msgs/action/detail/tts__functions.h"

bool
audio_common_msgs__action__TTS_GetResult_Response__init(audio_common_msgs__action__TTS_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!audio_common_msgs__action__TTS_Result__init(&msg->result)) {
    audio_common_msgs__action__TTS_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__action__TTS_GetResult_Response__fini(audio_common_msgs__action__TTS_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  audio_common_msgs__action__TTS_Result__fini(&msg->result);
}

bool
audio_common_msgs__action__TTS_GetResult_Response__are_equal(const audio_common_msgs__action__TTS_GetResult_Response * lhs, const audio_common_msgs__action__TTS_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!audio_common_msgs__action__TTS_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_GetResult_Response__copy(
  const audio_common_msgs__action__TTS_GetResult_Response * input,
  audio_common_msgs__action__TTS_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!audio_common_msgs__action__TTS_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__action__TTS_GetResult_Response *
audio_common_msgs__action__TTS_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_GetResult_Response * msg = (audio_common_msgs__action__TTS_GetResult_Response *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_GetResult_Response));
  bool success = audio_common_msgs__action__TTS_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_GetResult_Response__destroy(audio_common_msgs__action__TTS_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_GetResult_Response__Sequence__init(audio_common_msgs__action__TTS_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_GetResult_Response * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_GetResult_Response *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_GetResult_Response__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_GetResult_Response__Sequence__fini(audio_common_msgs__action__TTS_GetResult_Response__Sequence * array)
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
      audio_common_msgs__action__TTS_GetResult_Response__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_GetResult_Response__Sequence *
audio_common_msgs__action__TTS_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_GetResult_Response__Sequence * array = (audio_common_msgs__action__TTS_GetResult_Response__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_GetResult_Response__Sequence__destroy(audio_common_msgs__action__TTS_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_GetResult_Response__Sequence__are_equal(const audio_common_msgs__action__TTS_GetResult_Response__Sequence * lhs, const audio_common_msgs__action__TTS_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_GetResult_Response__Sequence__copy(
  const audio_common_msgs__action__TTS_GetResult_Response__Sequence * input,
  audio_common_msgs__action__TTS_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_GetResult_Response * data =
      (audio_common_msgs__action__TTS_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "audio_common_msgs/action/detail/tts__functions.h"

bool
audio_common_msgs__action__TTS_FeedbackMessage__init(audio_common_msgs__action__TTS_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    audio_common_msgs__action__TTS_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!audio_common_msgs__action__TTS_Feedback__init(&msg->feedback)) {
    audio_common_msgs__action__TTS_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
audio_common_msgs__action__TTS_FeedbackMessage__fini(audio_common_msgs__action__TTS_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  audio_common_msgs__action__TTS_Feedback__fini(&msg->feedback);
}

bool
audio_common_msgs__action__TTS_FeedbackMessage__are_equal(const audio_common_msgs__action__TTS_FeedbackMessage * lhs, const audio_common_msgs__action__TTS_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!audio_common_msgs__action__TTS_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
audio_common_msgs__action__TTS_FeedbackMessage__copy(
  const audio_common_msgs__action__TTS_FeedbackMessage * input,
  audio_common_msgs__action__TTS_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!audio_common_msgs__action__TTS_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

audio_common_msgs__action__TTS_FeedbackMessage *
audio_common_msgs__action__TTS_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_FeedbackMessage * msg = (audio_common_msgs__action__TTS_FeedbackMessage *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(audio_common_msgs__action__TTS_FeedbackMessage));
  bool success = audio_common_msgs__action__TTS_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
audio_common_msgs__action__TTS_FeedbackMessage__destroy(audio_common_msgs__action__TTS_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    audio_common_msgs__action__TTS_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
audio_common_msgs__action__TTS_FeedbackMessage__Sequence__init(audio_common_msgs__action__TTS_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_FeedbackMessage * data = NULL;

  if (size) {
    data = (audio_common_msgs__action__TTS_FeedbackMessage *)allocator.zero_allocate(size, sizeof(audio_common_msgs__action__TTS_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = audio_common_msgs__action__TTS_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        audio_common_msgs__action__TTS_FeedbackMessage__fini(&data[i - 1]);
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
audio_common_msgs__action__TTS_FeedbackMessage__Sequence__fini(audio_common_msgs__action__TTS_FeedbackMessage__Sequence * array)
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
      audio_common_msgs__action__TTS_FeedbackMessage__fini(&array->data[i]);
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

audio_common_msgs__action__TTS_FeedbackMessage__Sequence *
audio_common_msgs__action__TTS_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  audio_common_msgs__action__TTS_FeedbackMessage__Sequence * array = (audio_common_msgs__action__TTS_FeedbackMessage__Sequence *)allocator.allocate(sizeof(audio_common_msgs__action__TTS_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = audio_common_msgs__action__TTS_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
audio_common_msgs__action__TTS_FeedbackMessage__Sequence__destroy(audio_common_msgs__action__TTS_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    audio_common_msgs__action__TTS_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
audio_common_msgs__action__TTS_FeedbackMessage__Sequence__are_equal(const audio_common_msgs__action__TTS_FeedbackMessage__Sequence * lhs, const audio_common_msgs__action__TTS_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!audio_common_msgs__action__TTS_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
audio_common_msgs__action__TTS_FeedbackMessage__Sequence__copy(
  const audio_common_msgs__action__TTS_FeedbackMessage__Sequence * input,
  audio_common_msgs__action__TTS_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(audio_common_msgs__action__TTS_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    audio_common_msgs__action__TTS_FeedbackMessage * data =
      (audio_common_msgs__action__TTS_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!audio_common_msgs__action__TTS_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          audio_common_msgs__action__TTS_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!audio_common_msgs__action__TTS_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
