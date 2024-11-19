// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/msg/detail/audio_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioInfo_chunk
{
public:
  explicit Init_AudioInfo_chunk(::audio_common_msgs::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::msg::AudioInfo chunk(::audio_common_msgs::msg::AudioInfo::_chunk_type arg)
  {
    msg_.chunk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

class Init_AudioInfo_rate
{
public:
  explicit Init_AudioInfo_rate(::audio_common_msgs::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  Init_AudioInfo_chunk rate(::audio_common_msgs::msg::AudioInfo::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return Init_AudioInfo_chunk(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

class Init_AudioInfo_channels
{
public:
  explicit Init_AudioInfo_channels(::audio_common_msgs::msg::AudioInfo & msg)
  : msg_(msg)
  {}
  Init_AudioInfo_rate channels(::audio_common_msgs::msg::AudioInfo::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_AudioInfo_rate(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

class Init_AudioInfo_format
{
public:
  Init_AudioInfo_format()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioInfo_channels format(::audio_common_msgs::msg::AudioInfo::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_AudioInfo_channels(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::msg::AudioInfo>()
{
  return audio_common_msgs::msg::builder::Init_AudioInfo_format();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__BUILDER_HPP_
