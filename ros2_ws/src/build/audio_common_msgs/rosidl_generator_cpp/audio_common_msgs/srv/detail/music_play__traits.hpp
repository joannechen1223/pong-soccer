// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:srv/MusicPlay.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_common_msgs/srv/detail/music_play__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_common_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MusicPlay_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: audio
  {
    out << "audio: ";
    rosidl_generator_traits::value_to_yaml(msg.audio, out);
    out << ", ";
  }

  // member: file_path
  {
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << ", ";
  }

  // member: loop
  {
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MusicPlay_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "audio: ";
    rosidl_generator_traits::value_to_yaml(msg.audio, out);
    out << "\n";
  }

  // member: file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << "\n";
  }

  // member: loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MusicPlay_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::srv::MusicPlay_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::srv::MusicPlay_Request & msg)
{
  return audio_common_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::srv::MusicPlay_Request>()
{
  return "audio_common_msgs::srv::MusicPlay_Request";
}

template<>
inline const char * name<audio_common_msgs::srv::MusicPlay_Request>()
{
  return "audio_common_msgs/srv/MusicPlay_Request";
}

template<>
struct has_fixed_size<audio_common_msgs::srv::MusicPlay_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_common_msgs::srv::MusicPlay_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_common_msgs::srv::MusicPlay_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace audio_common_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MusicPlay_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MusicPlay_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MusicPlay_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::srv::MusicPlay_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::srv::MusicPlay_Response & msg)
{
  return audio_common_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::srv::MusicPlay_Response>()
{
  return "audio_common_msgs::srv::MusicPlay_Response";
}

template<>
inline const char * name<audio_common_msgs::srv::MusicPlay_Response>()
{
  return "audio_common_msgs/srv/MusicPlay_Response";
}

template<>
struct has_fixed_size<audio_common_msgs::srv::MusicPlay_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<audio_common_msgs::srv::MusicPlay_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<audio_common_msgs::srv::MusicPlay_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audio_common_msgs::srv::MusicPlay>()
{
  return "audio_common_msgs::srv::MusicPlay";
}

template<>
inline const char * name<audio_common_msgs::srv::MusicPlay>()
{
  return "audio_common_msgs/srv/MusicPlay";
}

template<>
struct has_fixed_size<audio_common_msgs::srv::MusicPlay>
  : std::integral_constant<
    bool,
    has_fixed_size<audio_common_msgs::srv::MusicPlay_Request>::value &&
    has_fixed_size<audio_common_msgs::srv::MusicPlay_Response>::value
  >
{
};

template<>
struct has_bounded_size<audio_common_msgs::srv::MusicPlay>
  : std::integral_constant<
    bool,
    has_bounded_size<audio_common_msgs::srv::MusicPlay_Request>::value &&
    has_bounded_size<audio_common_msgs::srv::MusicPlay_Response>::value
  >
{
};

template<>
struct is_service<audio_common_msgs::srv::MusicPlay>
  : std::true_type
{
};

template<>
struct is_service_request<audio_common_msgs::srv::MusicPlay_Request>
  : std::true_type
{
};

template<>
struct is_service_response<audio_common_msgs::srv::MusicPlay_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__TRAITS_HPP_
