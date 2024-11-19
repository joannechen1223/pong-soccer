// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:srv/MusicPlay.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/srv/detail/music_play__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace srv
{

namespace builder
{

class Init_MusicPlay_Request_loop
{
public:
  explicit Init_MusicPlay_Request_loop(::audio_common_msgs::srv::MusicPlay_Request & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::srv::MusicPlay_Request loop(::audio_common_msgs::srv::MusicPlay_Request::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::srv::MusicPlay_Request msg_;
};

class Init_MusicPlay_Request_file_path
{
public:
  explicit Init_MusicPlay_Request_file_path(::audio_common_msgs::srv::MusicPlay_Request & msg)
  : msg_(msg)
  {}
  Init_MusicPlay_Request_loop file_path(::audio_common_msgs::srv::MusicPlay_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return Init_MusicPlay_Request_loop(msg_);
  }

private:
  ::audio_common_msgs::srv::MusicPlay_Request msg_;
};

class Init_MusicPlay_Request_audio
{
public:
  Init_MusicPlay_Request_audio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MusicPlay_Request_file_path audio(::audio_common_msgs::srv::MusicPlay_Request::_audio_type arg)
  {
    msg_.audio = std::move(arg);
    return Init_MusicPlay_Request_file_path(msg_);
  }

private:
  ::audio_common_msgs::srv::MusicPlay_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::srv::MusicPlay_Request>()
{
  return audio_common_msgs::srv::builder::Init_MusicPlay_Request_audio();
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace srv
{

namespace builder
{

class Init_MusicPlay_Response_success
{
public:
  Init_MusicPlay_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::audio_common_msgs::srv::MusicPlay_Response success(::audio_common_msgs::srv::MusicPlay_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::srv::MusicPlay_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::srv::MusicPlay_Response>()
{
  return audio_common_msgs::srv::builder::Init_MusicPlay_Response_success();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__SRV__DETAIL__MUSIC_PLAY__BUILDER_HPP_
