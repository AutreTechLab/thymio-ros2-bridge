// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from thymio2_interfaces:msg/Thymio2Controller.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__STRUCT_HPP_
#define THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__thymio2_interfaces__msg__Thymio2Controller __attribute__((deprecated))
#else
# define DEPRECATED__thymio2_interfaces__msg__Thymio2Controller __declspec(deprecated)
#endif

namespace thymio2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Thymio2Controller_
{
  using Type = Thymio2Controller_<ContainerAllocator>;

  explicit Thymio2Controller_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug_message = "";
      this->button_backward = "";
      this->button_center = "";
      this->button_forward = "";
      this->button_left = "";
      this->button_right = "";
      this->event_source = "";
      this->mic_intensity = "";
      this->mic_threshold = "";
      this->motor_left_pwm = "";
      this->motor_left_speed = "";
      this->motor_left_target = "";
      this->motor_right_pwm = "";
      this->motor_right_speed = "";
      this->motor_right_target = "";
      this->prox_comm_rx = "";
      this->prox_comm_tx = "";
      this->rc5_address = "";
      this->rc5_command = "";
      this->sd_present = false;
      this->temperature = 0ll;
    }
  }

  explicit Thymio2Controller_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_message(_alloc),
    button_backward(_alloc),
    button_center(_alloc),
    button_forward(_alloc),
    button_left(_alloc),
    button_right(_alloc),
    event_source(_alloc),
    mic_intensity(_alloc),
    mic_threshold(_alloc),
    motor_left_pwm(_alloc),
    motor_left_speed(_alloc),
    motor_left_target(_alloc),
    motor_right_pwm(_alloc),
    motor_right_speed(_alloc),
    motor_right_target(_alloc),
    prox_comm_rx(_alloc),
    prox_comm_tx(_alloc),
    rc5_address(_alloc),
    rc5_command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug_message = "";
      this->button_backward = "";
      this->button_center = "";
      this->button_forward = "";
      this->button_left = "";
      this->button_right = "";
      this->event_source = "";
      this->mic_intensity = "";
      this->mic_threshold = "";
      this->motor_left_pwm = "";
      this->motor_left_speed = "";
      this->motor_left_target = "";
      this->motor_right_pwm = "";
      this->motor_right_speed = "";
      this->motor_right_target = "";
      this->prox_comm_rx = "";
      this->prox_comm_tx = "";
      this->rc5_address = "";
      this->rc5_command = "";
      this->sd_present = false;
      this->temperature = 0ll;
    }
  }

  // field types and members
  using _debug_message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _debug_message_type debug_message;
  using _acc_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _acc_type acc;
  using _button_backward_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _button_backward_type button_backward;
  using _button_center_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _button_center_type button_center;
  using _button_forward_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _button_forward_type button_forward;
  using _button_left_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _button_left_type button_left;
  using _button_right_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _button_right_type button_right;
  using _event_args_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _event_args_type event_args;
  using _event_source_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _event_source_type event_source;
  using _leds_bottom_left_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _leds_bottom_left_type leds_bottom_left;
  using _leds_bottom_right_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _leds_bottom_right_type leds_bottom_right;
  using _leds_circle_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _leds_circle_type leds_circle;
  using _leds_top_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _leds_top_type leds_top;
  using _mic_intensity_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mic_intensity_type mic_intensity;
  using _mic_threshold_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mic_threshold_type mic_threshold;
  using _motor_left_pwm_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motor_left_pwm_type motor_left_pwm;
  using _motor_left_speed_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motor_left_speed_type motor_left_speed;
  using _motor_left_target_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motor_left_target_type motor_left_target;
  using _motor_right_pwm_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motor_right_pwm_type motor_right_pwm;
  using _motor_right_speed_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motor_right_speed_type motor_right_speed;
  using _motor_right_target_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _motor_right_target_type motor_right_target;
  using _prox_comm_rx_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _prox_comm_rx_type prox_comm_rx;
  using _prox_comm_tx_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _prox_comm_tx_type prox_comm_tx;
  using _prox_ground_ambiant_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _prox_ground_ambiant_type prox_ground_ambiant;
  using _prox_ground_delta_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _prox_ground_delta_type prox_ground_delta;
  using _prox_ground_reflected_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _prox_ground_reflected_type prox_ground_reflected;
  using _prox_horizontal_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _prox_horizontal_type prox_horizontal;
  using _rc5_address_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rc5_address_type rc5_address;
  using _rc5_command_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rc5_command_type rc5_command;
  using _sd_present_type =
    bool;
  _sd_present_type sd_present;
  using _temperature_type =
    int64_t;
  _temperature_type temperature;
  using _timer_period_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _timer_period_type timer_period;

  // setters for named parameter idiom
  Type & set__debug_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->debug_message = _arg;
    return *this;
  }
  Type & set__acc(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__button_backward(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->button_backward = _arg;
    return *this;
  }
  Type & set__button_center(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->button_center = _arg;
    return *this;
  }
  Type & set__button_forward(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->button_forward = _arg;
    return *this;
  }
  Type & set__button_left(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->button_left = _arg;
    return *this;
  }
  Type & set__button_right(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->button_right = _arg;
    return *this;
  }
  Type & set__event_args(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->event_args = _arg;
    return *this;
  }
  Type & set__event_source(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->event_source = _arg;
    return *this;
  }
  Type & set__leds_bottom_left(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->leds_bottom_left = _arg;
    return *this;
  }
  Type & set__leds_bottom_right(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->leds_bottom_right = _arg;
    return *this;
  }
  Type & set__leds_circle(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->leds_circle = _arg;
    return *this;
  }
  Type & set__leds_top(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->leds_top = _arg;
    return *this;
  }
  Type & set__mic_intensity(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mic_intensity = _arg;
    return *this;
  }
  Type & set__mic_threshold(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mic_threshold = _arg;
    return *this;
  }
  Type & set__motor_left_pwm(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motor_left_pwm = _arg;
    return *this;
  }
  Type & set__motor_left_speed(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motor_left_speed = _arg;
    return *this;
  }
  Type & set__motor_left_target(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motor_left_target = _arg;
    return *this;
  }
  Type & set__motor_right_pwm(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motor_right_pwm = _arg;
    return *this;
  }
  Type & set__motor_right_speed(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motor_right_speed = _arg;
    return *this;
  }
  Type & set__motor_right_target(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->motor_right_target = _arg;
    return *this;
  }
  Type & set__prox_comm_rx(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->prox_comm_rx = _arg;
    return *this;
  }
  Type & set__prox_comm_tx(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->prox_comm_tx = _arg;
    return *this;
  }
  Type & set__prox_ground_ambiant(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->prox_ground_ambiant = _arg;
    return *this;
  }
  Type & set__prox_ground_delta(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->prox_ground_delta = _arg;
    return *this;
  }
  Type & set__prox_ground_reflected(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->prox_ground_reflected = _arg;
    return *this;
  }
  Type & set__prox_horizontal(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->prox_horizontal = _arg;
    return *this;
  }
  Type & set__rc5_address(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rc5_address = _arg;
    return *this;
  }
  Type & set__rc5_command(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rc5_command = _arg;
    return *this;
  }
  Type & set__sd_present(
    const bool & _arg)
  {
    this->sd_present = _arg;
    return *this;
  }
  Type & set__temperature(
    const int64_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__timer_period(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->timer_period = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator> *;
  using ConstRawPtr =
    const thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__thymio2_interfaces__msg__Thymio2Controller
    std::shared_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__thymio2_interfaces__msg__Thymio2Controller
    std::shared_ptr<thymio2_interfaces::msg::Thymio2Controller_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Thymio2Controller_ & other) const
  {
    if (this->debug_message != other.debug_message) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->button_backward != other.button_backward) {
      return false;
    }
    if (this->button_center != other.button_center) {
      return false;
    }
    if (this->button_forward != other.button_forward) {
      return false;
    }
    if (this->button_left != other.button_left) {
      return false;
    }
    if (this->button_right != other.button_right) {
      return false;
    }
    if (this->event_args != other.event_args) {
      return false;
    }
    if (this->event_source != other.event_source) {
      return false;
    }
    if (this->leds_bottom_left != other.leds_bottom_left) {
      return false;
    }
    if (this->leds_bottom_right != other.leds_bottom_right) {
      return false;
    }
    if (this->leds_circle != other.leds_circle) {
      return false;
    }
    if (this->leds_top != other.leds_top) {
      return false;
    }
    if (this->mic_intensity != other.mic_intensity) {
      return false;
    }
    if (this->mic_threshold != other.mic_threshold) {
      return false;
    }
    if (this->motor_left_pwm != other.motor_left_pwm) {
      return false;
    }
    if (this->motor_left_speed != other.motor_left_speed) {
      return false;
    }
    if (this->motor_left_target != other.motor_left_target) {
      return false;
    }
    if (this->motor_right_pwm != other.motor_right_pwm) {
      return false;
    }
    if (this->motor_right_speed != other.motor_right_speed) {
      return false;
    }
    if (this->motor_right_target != other.motor_right_target) {
      return false;
    }
    if (this->prox_comm_rx != other.prox_comm_rx) {
      return false;
    }
    if (this->prox_comm_tx != other.prox_comm_tx) {
      return false;
    }
    if (this->prox_ground_ambiant != other.prox_ground_ambiant) {
      return false;
    }
    if (this->prox_ground_delta != other.prox_ground_delta) {
      return false;
    }
    if (this->prox_ground_reflected != other.prox_ground_reflected) {
      return false;
    }
    if (this->prox_horizontal != other.prox_horizontal) {
      return false;
    }
    if (this->rc5_address != other.rc5_address) {
      return false;
    }
    if (this->rc5_command != other.rc5_command) {
      return false;
    }
    if (this->sd_present != other.sd_present) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->timer_period != other.timer_period) {
      return false;
    }
    return true;
  }
  bool operator!=(const Thymio2Controller_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Thymio2Controller_

// alias to use template instance with default allocator
using Thymio2Controller =
  thymio2_interfaces::msg::Thymio2Controller_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace thymio2_interfaces

#endif  // THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__STRUCT_HPP_
