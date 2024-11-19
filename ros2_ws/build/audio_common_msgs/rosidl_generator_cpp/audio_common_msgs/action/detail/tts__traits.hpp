// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_common_msgs:action/TTS.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__TRAITS_HPP_
#define AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_common_msgs/action/detail/tts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: language
  {
    out << "language: ";
    rosidl_generator_traits::value_to_yaml(msg.language, out);
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << ", ";
  }

  // member: rate
  {
    out << "rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: language
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "language: ";
    rosidl_generator_traits::value_to_yaml(msg.language, out);
    out << "\n";
  }

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_Goal & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_Goal>()
{
  return "audio_common_msgs::action::TTS_Goal";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_Goal>()
{
  return "audio_common_msgs/action/TTS_Goal";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_common_msgs::action::TTS_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_Result & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_Result>()
{
  return "audio_common_msgs::action::TTS_Result";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_Result>()
{
  return "audio_common_msgs/action/TTS_Result";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_common_msgs::action::TTS_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_Feedback & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_Feedback>()
{
  return "audio_common_msgs::action::TTS_Feedback";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_Feedback>()
{
  return "audio_common_msgs/action/TTS_Feedback";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<audio_common_msgs::action::TTS_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "audio_common_msgs/action/detail/tts__traits.hpp"

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_SendGoal_Request & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_SendGoal_Request>()
{
  return "audio_common_msgs::action::TTS_SendGoal_Request";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_SendGoal_Request>()
{
  return "audio_common_msgs/action/TTS_SendGoal_Request";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<audio_common_msgs::action::TTS_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<audio_common_msgs::action::TTS_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<audio_common_msgs::action::TTS_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_SendGoal_Response & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_SendGoal_Response>()
{
  return "audio_common_msgs::action::TTS_SendGoal_Response";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_SendGoal_Response>()
{
  return "audio_common_msgs/action/TTS_SendGoal_Response";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<audio_common_msgs::action::TTS_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audio_common_msgs::action::TTS_SendGoal>()
{
  return "audio_common_msgs::action::TTS_SendGoal";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_SendGoal>()
{
  return "audio_common_msgs/action/TTS_SendGoal";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<audio_common_msgs::action::TTS_SendGoal_Request>::value &&
    has_fixed_size<audio_common_msgs::action::TTS_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<audio_common_msgs::action::TTS_SendGoal_Request>::value &&
    has_bounded_size<audio_common_msgs::action::TTS_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<audio_common_msgs::action::TTS_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<audio_common_msgs::action::TTS_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<audio_common_msgs::action::TTS_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_GetResult_Request & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_GetResult_Request>()
{
  return "audio_common_msgs::action::TTS_GetResult_Request";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_GetResult_Request>()
{
  return "audio_common_msgs/action/TTS_GetResult_Request";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<audio_common_msgs::action::TTS_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "audio_common_msgs/action/detail/tts__traits.hpp"

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_GetResult_Response & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_GetResult_Response>()
{
  return "audio_common_msgs::action::TTS_GetResult_Response";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_GetResult_Response>()
{
  return "audio_common_msgs/action/TTS_GetResult_Response";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<audio_common_msgs::action::TTS_Result>::value> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<audio_common_msgs::action::TTS_Result>::value> {};

template<>
struct is_message<audio_common_msgs::action::TTS_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<audio_common_msgs::action::TTS_GetResult>()
{
  return "audio_common_msgs::action::TTS_GetResult";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_GetResult>()
{
  return "audio_common_msgs/action/TTS_GetResult";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<audio_common_msgs::action::TTS_GetResult_Request>::value &&
    has_fixed_size<audio_common_msgs::action::TTS_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<audio_common_msgs::action::TTS_GetResult_Request>::value &&
    has_bounded_size<audio_common_msgs::action::TTS_GetResult_Response>::value
  >
{
};

template<>
struct is_service<audio_common_msgs::action::TTS_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<audio_common_msgs::action::TTS_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<audio_common_msgs::action::TTS_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "audio_common_msgs/action/detail/tts__traits.hpp"

namespace audio_common_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TTS_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTS_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTS_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace audio_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use audio_common_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_common_msgs::action::TTS_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_common_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_common_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const audio_common_msgs::action::TTS_FeedbackMessage & msg)
{
  return audio_common_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<audio_common_msgs::action::TTS_FeedbackMessage>()
{
  return "audio_common_msgs::action::TTS_FeedbackMessage";
}

template<>
inline const char * name<audio_common_msgs::action::TTS_FeedbackMessage>()
{
  return "audio_common_msgs/action/TTS_FeedbackMessage";
}

template<>
struct has_fixed_size<audio_common_msgs::action::TTS_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<audio_common_msgs::action::TTS_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<audio_common_msgs::action::TTS_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<audio_common_msgs::action::TTS_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<audio_common_msgs::action::TTS_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<audio_common_msgs::action::TTS>
  : std::true_type
{
};

template<>
struct is_action_goal<audio_common_msgs::action::TTS_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<audio_common_msgs::action::TTS_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<audio_common_msgs::action::TTS_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // AUDIO_COMMON_MSGS__ACTION__DETAIL__TTS__TRAITS_HPP_
