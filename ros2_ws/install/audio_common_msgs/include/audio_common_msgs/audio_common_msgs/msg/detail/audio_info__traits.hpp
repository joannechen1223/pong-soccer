// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_common_msgs/msg/detail/audio_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: format
  {
    out << "format: ";
    rosidl_generator_traits::value_to_yaml(msg.format, out);
    out << ", ";
  }

  // member: channels
  {
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << ", ";
  }

  // member: rate
  {
    out << "rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rate, out);
    out << ", ";
  }

  // member: chunk
  {
    out << "chunk: ";
    rosidl_generator_traits::value_to_yaml(msg.chunk, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "format: ";
    rosidl_generator_traits::value_to_yaml(msg.format, out);
    out << "\n";
  }

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << "\n";
  }

  // member: rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rate, out);
    out << "\n";
  }

  // member: chunk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chunk: ";
    rosidl_generator_traits::value_to_yaml(msg.chunk, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioInfo & msg, bool use_flow_style = false)
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
  const audio_common_msgs::msg::AudioInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::msg::AudioInfo & msg)
{
  return audio_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::msg::AudioInfo>()
{
  return "audio_common_msgs::msg::AudioInfo";
}

template<>
inline const char * name<audio_common_msgs::msg::AudioInfo>()
{
  return "audio_common_msgs/msg/AudioInfo";
}

template<>
struct has_fixed_size<audio_common_msgs::msg::AudioInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<audio_common_msgs::msg::AudioInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<audio_common_msgs::msg::AudioInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__TRAITS_HPP_
