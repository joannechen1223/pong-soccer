// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_common_msgs/msg/detail/audio__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'audio_data'
#include "audio_common_msgs/msg/detail/audio_data__traits.hpp"
// Member 'info'
#include "audio_common_msgs/msg/detail/audio_info__traits.hpp"

namespace audio_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Audio & msg,
  std::ostream & out)
{
  out << "{";
  // member: audio_data
  {
    out << "audio_data: ";
    to_flow_style_yaml(msg.audio_data, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Audio & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: audio_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "audio_data:\n";
    to_block_style_yaml(msg.audio_data, out, indentation + 2);
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Audio & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::msg::Audio & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::msg::Audio & msg)
{
  return audio_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::msg::Audio>()
{
  return "audio_common_msgs::msg::Audio";
}

template<>
inline const char * name<audio_common_msgs::msg::Audio>()
{
  return "audio_common_msgs/msg/Audio";
}

template<>
struct has_fixed_size<audio_common_msgs::msg::Audio>
  : std::integral_constant<bool, has_fixed_size<audio_common_msgs::msg::AudioData>::value && has_fixed_size<audio_common_msgs::msg::AudioInfo>::value> {};

template<>
struct has_bounded_size<audio_common_msgs::msg::Audio>
  : std::integral_constant<bool, has_bounded_size<audio_common_msgs::msg::AudioData>::value && has_bounded_size<audio_common_msgs::msg::AudioInfo>::value> {};

template<>
struct is_message<audio_common_msgs::msg::Audio>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__TRAITS_HPP_
