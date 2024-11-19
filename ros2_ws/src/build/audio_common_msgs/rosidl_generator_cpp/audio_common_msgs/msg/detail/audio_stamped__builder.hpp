// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/msg/detail/audio_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioStamped_audio
{
public:
  explicit Init_AudioStamped_audio(::audio_common_msgs::msg::AudioStamped & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::msg::AudioStamped audio(::audio_common_msgs::msg::AudioStamped::_audio_type arg)
  {
    msg_.audio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioStamped msg_;
};

class Init_AudioStamped_header
{
public:
  Init_AudioStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioStamped_audio header(::audio_common_msgs::msg::AudioStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AudioStamped_audio(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::msg::AudioStamped>()
{
  return audio_common_msgs::msg::builder::Init_AudioStamped_header();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__BUILDER_HPP_
