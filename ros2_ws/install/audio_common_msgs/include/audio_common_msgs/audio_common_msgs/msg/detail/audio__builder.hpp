// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/msg/detail/audio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Audio_info
{
public:
  explicit Init_Audio_info(::audio_common_msgs::msg::Audio & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::msg::Audio info(::audio_common_msgs::msg::Audio::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::msg::Audio msg_;
};

class Init_Audio_audio_data
{
public:
  Init_Audio_audio_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Audio_info audio_data(::audio_common_msgs::msg::Audio::_audio_data_type arg)
  {
    msg_.audio_data = std::move(arg);
    return Init_Audio_info(msg_);
  }

private:
  ::audio_common_msgs::msg::Audio msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::msg::Audio>()
{
  return audio_common_msgs::msg::builder::Init_Audio_audio_data();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__BUILDER_HPP_
