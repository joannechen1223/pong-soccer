// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "audio_common_msgs/msg/detail/audio_stamped__struct.h"
#include "audio_common_msgs/msg/detail/audio_stamped__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace audio_common_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _AudioStamped_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AudioStamped_type_support_ids_t;

static const _AudioStamped_type_support_ids_t _AudioStamped_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AudioStamped_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AudioStamped_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AudioStamped_type_support_symbol_names_t _AudioStamped_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, audio_common_msgs, msg, AudioStamped)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, audio_common_msgs, msg, AudioStamped)),
  }
};

typedef struct _AudioStamped_type_support_data_t
{
  void * data[2];
} _AudioStamped_type_support_data_t;

static _AudioStamped_type_support_data_t _AudioStamped_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AudioStamped_message_typesupport_map = {
  2,
  "audio_common_msgs",
  &_AudioStamped_message_typesupport_ids.typesupport_identifier[0],
  &_AudioStamped_message_typesupport_symbol_names.symbol_name[0],
  &_AudioStamped_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AudioStamped_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AudioStamped_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace audio_common_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, audio_common_msgs, msg, AudioStamped)() {
  return &::audio_common_msgs::msg::rosidl_typesupport_c::AudioStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
