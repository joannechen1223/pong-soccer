// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__msg__AudioInfo __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__msg__AudioInfo __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioInfo_
{
  using Type = AudioInfo_<ContainerAllocator>;

  explicit AudioInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->format = 0l;
      this->channels = 0l;
      this->rate = 0l;
      this->chunk = 0l;
    }
  }

  explicit AudioInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->format = 0l;
      this->channels = 0l;
      this->rate = 0l;
      this->chunk = 0l;
    }
  }

  // field types and members
  using _format_type =
    int32_t;
  _format_type format;
  using _channels_type =
    int32_t;
  _channels_type channels;
  using _rate_type =
    int32_t;
  _rate_type rate;
  using _chunk_type =
    int32_t;
  _chunk_type chunk;

  // setters for named parameter idiom
  Type & set__format(
    const int32_t & _arg)
  {
    this->format = _arg;
    return *this;
  }
  Type & set__channels(
    const int32_t & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__rate(
    const int32_t & _arg)
  {
    this->rate = _arg;
    return *this;
  }
  Type & set__chunk(
    const int32_t & _arg)
  {
    this->chunk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::msg::AudioInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::msg::AudioInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::AudioInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::AudioInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__msg__AudioInfo
    std::shared_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__msg__AudioInfo
    std::shared_ptr<audio_common_msgs::msg::AudioInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioInfo_ & other) const
  {
    if (this->format != other.format) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    if (this->chunk != other.chunk) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioInfo_

// alias to use template instance with default allocator
using AudioInfo =
  audio_common_msgs::msg::AudioInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_INFO__STRUCT_HPP_
