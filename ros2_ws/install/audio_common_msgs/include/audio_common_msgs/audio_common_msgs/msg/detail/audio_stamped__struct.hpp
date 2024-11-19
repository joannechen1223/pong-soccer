// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_common_msgs:msg/AudioStamped.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__STRUCT_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'audio'
#include "audio_common_msgs/msg/detail/audio__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__msg__AudioStamped __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__msg__AudioStamped __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioStamped_
{
  using Type = AudioStamped_<ContainerAllocator>;

  explicit AudioStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    audio(_init)
  {
    (void)_init;
  }

  explicit AudioStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    audio(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _audio_type =
    audio_common_msgs::msg::Audio_<ContainerAllocator>;
  _audio_type audio;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__audio(
    const audio_common_msgs::msg::Audio_<ContainerAllocator> & _arg)
  {
    this->audio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::msg::AudioStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::msg::AudioStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::AudioStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::AudioStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__msg__AudioStamped
    std::shared_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__msg__AudioStamped
    std::shared_ptr<audio_common_msgs::msg::AudioStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->audio != other.audio) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioStamped_

// alias to use template instance with default allocator
using AudioStamped =
  audio_common_msgs::msg::AudioStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_STAMPED__STRUCT_HPP_
