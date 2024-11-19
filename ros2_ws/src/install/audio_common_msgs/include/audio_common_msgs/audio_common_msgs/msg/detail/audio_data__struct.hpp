// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from audio_common_msgs:msg/AudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_HPP_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__audio_common_msgs__msg__AudioData __attribute__((deprecated))
#else
# define DEPRECATED__audio_common_msgs__msg__AudioData __declspec(deprecated)
#endif

namespace audio_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioData_
{
  using Type = AudioData_<ContainerAllocator>;

  explicit AudioData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AudioData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _float32_data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _float32_data_type float32_data;
  using _int32_data_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _int32_data_type int32_data;
  using _int16_data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _int16_data_type int16_data;
  using _int8_data_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _int8_data_type int8_data;
  using _uint8_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _uint8_data_type uint8_data;

  // setters for named parameter idiom
  Type & set__float32_data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->float32_data = _arg;
    return *this;
  }
  Type & set__int32_data(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->int32_data = _arg;
    return *this;
  }
  Type & set__int16_data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->int16_data = _arg;
    return *this;
  }
  Type & set__int8_data(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->int8_data = _arg;
    return *this;
  }
  Type & set__uint8_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->uint8_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    audio_common_msgs::msg::AudioData_<ContainerAllocator> *;
  using ConstRawPtr =
    const audio_common_msgs::msg::AudioData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::AudioData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      audio_common_msgs::msg::AudioData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__audio_common_msgs__msg__AudioData
    std::shared_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__audio_common_msgs__msg__AudioData
    std::shared_ptr<audio_common_msgs::msg::AudioData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioData_ & other) const
  {
    if (this->float32_data != other.float32_data) {
      return false;
    }
    if (this->int32_data != other.int32_data) {
      return false;
    }
    if (this->int16_data != other.int16_data) {
      return false;
    }
    if (this->int8_data != other.int8_data) {
      return false;
    }
    if (this->uint8_data != other.uint8_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioData_

// alias to use template instance with default allocator
using AudioData =
  audio_common_msgs::msg::AudioData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace audio_common_msgs

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__AUDIO_DATA__STRUCT_HPP_
