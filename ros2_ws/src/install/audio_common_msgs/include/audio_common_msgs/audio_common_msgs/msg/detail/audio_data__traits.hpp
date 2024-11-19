// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_common_msgs/msg/detail/audio_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioData & msg,
  std::ostream & out)
{
  out << "{";
  // member: float32_data
  {
    if (msg.float32_data.size() == 0) {
      out << "float32_data: []";
    } else {
      out << "float32_data: [";
      size_t pending_items = msg.float32_data.size();
      for (auto item : msg.float32_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int32_data
  {
    if (msg.int32_data.size() == 0) {
      out << "int32_data: []";
    } else {
      out << "int32_data: [";
      size_t pending_items = msg.int32_data.size();
      for (auto item : msg.int32_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int16_data
  {
    if (msg.int16_data.size() == 0) {
      out << "int16_data: []";
    } else {
      out << "int16_data: [";
      size_t pending_items = msg.int16_data.size();
      for (auto item : msg.int16_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: int8_data
  {
    if (msg.int8_data.size() == 0) {
      out << "int8_data: []";
    } else {
      out << "int8_data: [";
      size_t pending_items = msg.int8_data.size();
      for (auto item : msg.int8_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uint8_data
  {
    if (msg.uint8_data.size() == 0) {
      out << "uint8_data: []";
    } else {
      out << "uint8_data: [";
      size_t pending_items = msg.uint8_data.size();
      for (auto item : msg.uint8_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: float32_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32_data.size() == 0) {
      out << "float32_data: []\n";
    } else {
      out << "float32_data:\n";
      for (auto item : msg.float32_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32_data.size() == 0) {
      out << "int32_data: []\n";
    } else {
      out << "int32_data:\n";
      for (auto item : msg.int32_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16_data.size() == 0) {
      out << "int16_data: []\n";
    } else {
      out << "int16_data:\n";
      for (auto item : msg.int16_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8_data.size() == 0) {
      out << "int8_data: []\n";
    } else {
      out << "int8_data:\n";
      for (auto item : msg.int8_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8_data.size() == 0) {
      out << "uint8_data: []\n";
    } else {
      out << "uint8_data:\n";
      for (auto item : msg.uint8_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioData & msg, bool use_flow_style = false)
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
  const audio_common_msgs::msg::AudioData & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::msg::AudioData & msg)
{
  return audio_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::msg::AudioData>()
{
  return "audio_common_msgs::msg::AudioData";
}

template<>
inline const char * name<audio_common_msgs::msg::AudioData>()
{
  return "audio_common_msgs/msg/AudioData";
}

template<>
struct has_fixed_size<audio_common_msgs::msg::AudioData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_common_msgs::msg::AudioData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_common_msgs::msg::AudioData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__TRAITS_HPP_
