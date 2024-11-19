// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_common_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__STRUCT_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'audio_data'
#include "audio_common_msgs/msg/detail/audio_data__struct.hpp"
// Member 'info'
#include "audio_common_msgs/msg/detail/audio_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__msg__Audio __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__msg__Audio __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Audio_
{
  using Type = Audio_<ContainerAllocator>;

  explicit Audio_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : audio_data(_init),
    info(_init)
  {
    (void)_init;
  }

  explicit Audio_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : audio_data(_alloc, _init),
    info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _audio_data_type =
    audio_common_msgs::msg::AudioData_<ContainerAllocator>;
  _audio_data_type audio_data;
  using _info_type =
    audio_common_msgs::msg::AudioInfo_<ContainerAllocator>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__audio_data(
    const audio_common_msgs::msg::AudioData_<ContainerAllocator> & _arg)
  {
    this->audio_data = _arg;
    return *this;
  }
  Type & set__info(
    const audio_common_msgs::msg::AudioInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::msg::Audio_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::msg::Audio_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::Audio_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::Audio_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__msg__Audio
    std::shared_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__msg__Audio
    std::shared_ptr<audio_common_msgs::msg::Audio_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Audio_ & other) const
  {
    if (this->audio_data != other.audio_data) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Audio_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Audio_

// alias to use template instance with default allocator
using Audio =
  audio_common_msgs::msg::Audio_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO__STRUCT_HPP_
