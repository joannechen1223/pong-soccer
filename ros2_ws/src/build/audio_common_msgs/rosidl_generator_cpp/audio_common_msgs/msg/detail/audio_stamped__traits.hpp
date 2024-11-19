// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_common_msgs/msg/detail/audio_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'audio'
#include "audio_common_msgs/msg/detail/audio__traits.hpp"

namespace audio_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: audio
  {
    out << "audio: ";
    to_flow_style_yaml(msg.audio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "audio:\n";
    to_block_style_yaml(msg.audio, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioStamped & msg, bool use_flow_style = false)
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
  const audio_common_msgs::msg::AudioStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::msg::AudioStamped & msg)
{
  return audio_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::msg::AudioStamped>()
{
  return "audio_common_msgs::msg::AudioStamped";
}

template<>
inline const char * name<audio_common_msgs::msg::AudioStamped>()
{
  return "audio_common_msgs/msg/AudioStamped";
}

template<>
struct has_fixed_size<audio_common_msgs::msg::AudioStamped>
  : std::integral_constant<bool, has_fixed_size<audio_common_msgs::msg::Audio>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<audio_common_msgs::msg::AudioStamped>
  : std::integral_constant<bool, has_bounded_size<audio_common_msgs::msg::Audio>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<audio_common_msgs::msg::AudioStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__TRAITS_HPP_
