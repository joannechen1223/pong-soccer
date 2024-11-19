// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from audio_common_msgs:action/TTS.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__BUILDER_HPP_
#define AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "audio_common_msgs/action/detail/tts__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace audio_common_msgs
{

namespace action
{

namespace builder
{

class Init_TTS_Goal_rate
{
public:
  explicit Init_TTS_Goal_rate(::audio_common_msgs::action::TTS_Goal & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::action::TTS_Goal rate(::audio_common_msgs::action::TTS_Goal::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_Goal msg_;
};

class Init_TTS_Goal_volume
{
public:
  explicit Init_TTS_Goal_volume(::audio_common_msgs::action::TTS_Goal & msg)
  : msg_(msg)
  {}
  Init_TTS_Goal_rate volume(::audio_common_msgs::action::TTS_Goal::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_TTS_Goal_rate(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_Goal msg_;
};

class Init_TTS_Goal_language
{
public:
  explicit Init_TTS_Goal_language(::audio_common_msgs::action::TTS_Goal & msg)
  : msg_(msg)
  {}
  Init_TTS_Goal_volume language(::audio_common_msgs::action::TTS_Goal::_language_type arg)
  {
    msg_.language = std::move(arg);
    return Init_TTS_Goal_volume(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_Goal msg_;
};

class Init_TTS_Goal_text
{
public:
  Init_TTS_Goal_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TTS_Goal_language text(::audio_common_msgs::action::TTS_Goal::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_TTS_Goal_language(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_Goal>()
{
  return audio_common_msgs::action::builder::Init_TTS_Goal_text();
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace action
{

namespace builder
{

class Init_TTS_Result_text
{
public:
  Init_TTS_Result_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::audio_common_msgs::action::TTS_Result text(::audio_common_msgs::action::TTS_Result::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_Result>()
{
  return audio_common_msgs::action::builder::Init_TTS_Result_text();
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_Feedback>()
{
  return ::audio_common_msgs::action::TTS_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace action
{

namespace builder
{

class Init_TTS_SendGoal_Request_goal
{
public:
  explicit Init_TTS_SendGoal_Request_goal(::audio_common_msgs::action::TTS_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::action::TTS_SendGoal_Request goal(::audio_common_msgs::action::TTS_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_SendGoal_Request msg_;
};

class Init_TTS_SendGoal_Request_goal_id
{
public:
  Init_TTS_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TTS_SendGoal_Request_goal goal_id(::audio_common_msgs::action::TTS_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TTS_SendGoal_Request_goal(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_SendGoal_Request>()
{
  return audio_common_msgs::action::builder::Init_TTS_SendGoal_Request_goal_id();
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace action
{

namespace builder
{

class Init_TTS_SendGoal_Response_stamp
{
public:
  explicit Init_TTS_SendGoal_Response_stamp(::audio_common_msgs::action::TTS_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::action::TTS_SendGoal_Response stamp(::audio_common_msgs::action::TTS_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_SendGoal_Response msg_;
};

class Init_TTS_SendGoal_Response_accepted
{
public:
  Init_TTS_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TTS_SendGoal_Response_stamp accepted(::audio_common_msgs::action::TTS_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TTS_SendGoal_Response_stamp(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_SendGoal_Response>()
{
  return audio_common_msgs::action::builder::Init_TTS_SendGoal_Response_accepted();
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace action
{

namespace builder
{

class Init_TTS_GetResult_Request_goal_id
{
public:
  Init_TTS_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::audio_common_msgs::action::TTS_GetResult_Request goal_id(::audio_common_msgs::action::TTS_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_GetResult_Request>()
{
  return audio_common_msgs::action::builder::Init_TTS_GetResult_Request_goal_id();
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace action
{

namespace builder
{

class Init_TTS_GetResult_Response_result
{
public:
  explicit Init_TTS_GetResult_Response_result(::audio_common_msgs::action::TTS_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::action::TTS_GetResult_Response result(::audio_common_msgs::action::TTS_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_GetResult_Response msg_;
};

class Init_TTS_GetResult_Response_status
{
public:
  Init_TTS_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TTS_GetResult_Response_result status(::audio_common_msgs::action::TTS_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TTS_GetResult_Response_result(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_GetResult_Response>()
{
  return audio_common_msgs::action::builder::Init_TTS_GetResult_Response_status();
}

}  // namespace audio_common_msgs


namespace audio_common_msgs
{

namespace action
{

namespace builder
{

class Init_TTS_FeedbackMessage_feedback
{
public:
  explicit Init_TTS_FeedbackMessage_feedback(::audio_common_msgs::action::TTS_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::audio_common_msgs::action::TTS_FeedbackMessage feedback(::audio_common_msgs::action::TTS_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_FeedbackMessage msg_;
};

class Init_TTS_FeedbackMessage_goal_id
{
public:
  Init_TTS_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TTS_FeedbackMessage_feedback goal_id(::audio_common_msgs::action::TTS_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TTS_FeedbackMessage_feedback(msg_);
  }

private:
  ::audio_common_msgs::action::TTS_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::audio_common_msgs::action::TTS_FeedbackMessage>()
{
  return audio_common_msgs::action::builder::Init_TTS_FeedbackMessage_goal_id();
}

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__BUILDER_HPP_
