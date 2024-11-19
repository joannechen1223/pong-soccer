// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/msg/detail/audio_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioData_uint8_data
{
public:
  explicit Init_AudioData_uint8_data(::audio_common_msgs::msg::AudioData & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::msg::AudioData uint8_data(::audio_common_msgs::msg::AudioData::_uint8_data_type arg)
  {
    msg_.uint8_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioData msg_;
};

class Init_AudioData_int8_data
{
public:
  explicit Init_AudioData_int8_data(::audio_common_msgs::msg::AudioData & msg)
  : msg_(msg)
  {}
  Init_AudioData_uint8_data int8_data(::audio_common_msgs::msg::AudioData::_int8_data_type arg)
  {
    msg_.int8_data = std::move(arg);
    return Init_AudioData_uint8_data(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioData msg_;
};

class Init_AudioData_int16_data
{
public:
  explicit Init_AudioData_int16_data(::audio_common_msgs::msg::AudioData & msg)
  : msg_(msg)
  {}
  Init_AudioData_int8_data int16_data(::audio_common_msgs::msg::AudioData::_int16_data_type arg)
  {
    msg_.int16_data = std::move(arg);
    return Init_AudioData_int8_data(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioData msg_;
};

class Init_AudioData_int32_data
{
public:
  explicit Init_AudioData_int32_data(::audio_common_msgs::msg::AudioData & msg)
  : msg_(msg)
  {}
  Init_AudioData_int16_data int32_data(::audio_common_msgs::msg::AudioData::_int32_data_type arg)
  {
    msg_.int32_data = std::move(arg);
    return Init_AudioData_int16_data(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioData msg_;
};

class Init_AudioData_float32_data
{
public:
  Init_AudioData_float32_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioData_int32_data float32_data(::audio_common_msgs::msg::AudioData::_float32_data_type arg)
  {
    msg_.float32_data = std::move(arg);
    return Init_AudioData_int32_data(msg_);
  }

private:
  ::audio_common_msgs::msg::AudioData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::msg::AudioData>()
{
  return audio_common_msgs::msg::builder::Init_AudioData_float32_data();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__BUILDER_HPP_
