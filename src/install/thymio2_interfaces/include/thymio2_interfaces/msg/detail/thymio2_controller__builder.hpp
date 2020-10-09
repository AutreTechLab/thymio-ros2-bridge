// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from thymio2_interfaces:msg/Thymio2Controller.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__BUILDER_HPP_
#define THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__BUILDER_HPP_

#include "thymio2_interfaces/msg/detail/thymio2_controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace thymio2_interfaces
{

namespace msg
{

namespace builder
{

class Init_Thymio2Controller_timer_period
{
public:
  explicit Init_Thymio2Controller_timer_period(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  ::thymio2_interfaces::msg::Thymio2Controller timer_period(::thymio2_interfaces::msg::Thymio2Controller::_timer_period_type arg)
  {
    msg_.timer_period = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_temperature
{
public:
  explicit Init_Thymio2Controller_temperature(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_timer_period temperature(::thymio2_interfaces::msg::Thymio2Controller::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Thymio2Controller_timer_period(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_sd_present
{
public:
  explicit Init_Thymio2Controller_sd_present(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_temperature sd_present(::thymio2_interfaces::msg::Thymio2Controller::_sd_present_type arg)
  {
    msg_.sd_present = std::move(arg);
    return Init_Thymio2Controller_temperature(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_rc5_command
{
public:
  explicit Init_Thymio2Controller_rc5_command(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_sd_present rc5_command(::thymio2_interfaces::msg::Thymio2Controller::_rc5_command_type arg)
  {
    msg_.rc5_command = std::move(arg);
    return Init_Thymio2Controller_sd_present(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_rc5_address
{
public:
  explicit Init_Thymio2Controller_rc5_address(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_rc5_command rc5_address(::thymio2_interfaces::msg::Thymio2Controller::_rc5_address_type arg)
  {
    msg_.rc5_address = std::move(arg);
    return Init_Thymio2Controller_rc5_command(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_prox_horizontal
{
public:
  explicit Init_Thymio2Controller_prox_horizontal(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_rc5_address prox_horizontal(::thymio2_interfaces::msg::Thymio2Controller::_prox_horizontal_type arg)
  {
    msg_.prox_horizontal = std::move(arg);
    return Init_Thymio2Controller_rc5_address(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_prox_ground_reflected
{
public:
  explicit Init_Thymio2Controller_prox_ground_reflected(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_prox_horizontal prox_ground_reflected(::thymio2_interfaces::msg::Thymio2Controller::_prox_ground_reflected_type arg)
  {
    msg_.prox_ground_reflected = std::move(arg);
    return Init_Thymio2Controller_prox_horizontal(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_prox_ground_delta
{
public:
  explicit Init_Thymio2Controller_prox_ground_delta(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_prox_ground_reflected prox_ground_delta(::thymio2_interfaces::msg::Thymio2Controller::_prox_ground_delta_type arg)
  {
    msg_.prox_ground_delta = std::move(arg);
    return Init_Thymio2Controller_prox_ground_reflected(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_prox_ground_ambiant
{
public:
  explicit Init_Thymio2Controller_prox_ground_ambiant(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_prox_ground_delta prox_ground_ambiant(::thymio2_interfaces::msg::Thymio2Controller::_prox_ground_ambiant_type arg)
  {
    msg_.prox_ground_ambiant = std::move(arg);
    return Init_Thymio2Controller_prox_ground_delta(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_prox_comm_tx
{
public:
  explicit Init_Thymio2Controller_prox_comm_tx(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_prox_ground_ambiant prox_comm_tx(::thymio2_interfaces::msg::Thymio2Controller::_prox_comm_tx_type arg)
  {
    msg_.prox_comm_tx = std::move(arg);
    return Init_Thymio2Controller_prox_ground_ambiant(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_prox_comm_rx
{
public:
  explicit Init_Thymio2Controller_prox_comm_rx(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_prox_comm_tx prox_comm_rx(::thymio2_interfaces::msg::Thymio2Controller::_prox_comm_rx_type arg)
  {
    msg_.prox_comm_rx = std::move(arg);
    return Init_Thymio2Controller_prox_comm_tx(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_motor_right_target
{
public:
  explicit Init_Thymio2Controller_motor_right_target(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_prox_comm_rx motor_right_target(::thymio2_interfaces::msg::Thymio2Controller::_motor_right_target_type arg)
  {
    msg_.motor_right_target = std::move(arg);
    return Init_Thymio2Controller_prox_comm_rx(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_motor_right_speed
{
public:
  explicit Init_Thymio2Controller_motor_right_speed(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_motor_right_target motor_right_speed(::thymio2_interfaces::msg::Thymio2Controller::_motor_right_speed_type arg)
  {
    msg_.motor_right_speed = std::move(arg);
    return Init_Thymio2Controller_motor_right_target(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_motor_right_pwm
{
public:
  explicit Init_Thymio2Controller_motor_right_pwm(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_motor_right_speed motor_right_pwm(::thymio2_interfaces::msg::Thymio2Controller::_motor_right_pwm_type arg)
  {
    msg_.motor_right_pwm = std::move(arg);
    return Init_Thymio2Controller_motor_right_speed(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_motor_left_target
{
public:
  explicit Init_Thymio2Controller_motor_left_target(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_motor_right_pwm motor_left_target(::thymio2_interfaces::msg::Thymio2Controller::_motor_left_target_type arg)
  {
    msg_.motor_left_target = std::move(arg);
    return Init_Thymio2Controller_motor_right_pwm(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_motor_left_speed
{
public:
  explicit Init_Thymio2Controller_motor_left_speed(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_motor_left_target motor_left_speed(::thymio2_interfaces::msg::Thymio2Controller::_motor_left_speed_type arg)
  {
    msg_.motor_left_speed = std::move(arg);
    return Init_Thymio2Controller_motor_left_target(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_motor_left_pwm
{
public:
  explicit Init_Thymio2Controller_motor_left_pwm(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_motor_left_speed motor_left_pwm(::thymio2_interfaces::msg::Thymio2Controller::_motor_left_pwm_type arg)
  {
    msg_.motor_left_pwm = std::move(arg);
    return Init_Thymio2Controller_motor_left_speed(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_mic_threshold
{
public:
  explicit Init_Thymio2Controller_mic_threshold(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_motor_left_pwm mic_threshold(::thymio2_interfaces::msg::Thymio2Controller::_mic_threshold_type arg)
  {
    msg_.mic_threshold = std::move(arg);
    return Init_Thymio2Controller_motor_left_pwm(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_mic_intensity
{
public:
  explicit Init_Thymio2Controller_mic_intensity(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_mic_threshold mic_intensity(::thymio2_interfaces::msg::Thymio2Controller::_mic_intensity_type arg)
  {
    msg_.mic_intensity = std::move(arg);
    return Init_Thymio2Controller_mic_threshold(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_leds_top
{
public:
  explicit Init_Thymio2Controller_leds_top(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_mic_intensity leds_top(::thymio2_interfaces::msg::Thymio2Controller::_leds_top_type arg)
  {
    msg_.leds_top = std::move(arg);
    return Init_Thymio2Controller_mic_intensity(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_leds_circle
{
public:
  explicit Init_Thymio2Controller_leds_circle(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_leds_top leds_circle(::thymio2_interfaces::msg::Thymio2Controller::_leds_circle_type arg)
  {
    msg_.leds_circle = std::move(arg);
    return Init_Thymio2Controller_leds_top(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_leds_bottom_right
{
public:
  explicit Init_Thymio2Controller_leds_bottom_right(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_leds_circle leds_bottom_right(::thymio2_interfaces::msg::Thymio2Controller::_leds_bottom_right_type arg)
  {
    msg_.leds_bottom_right = std::move(arg);
    return Init_Thymio2Controller_leds_circle(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_leds_bottom_left
{
public:
  explicit Init_Thymio2Controller_leds_bottom_left(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_leds_bottom_right leds_bottom_left(::thymio2_interfaces::msg::Thymio2Controller::_leds_bottom_left_type arg)
  {
    msg_.leds_bottom_left = std::move(arg);
    return Init_Thymio2Controller_leds_bottom_right(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_event_source
{
public:
  explicit Init_Thymio2Controller_event_source(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_leds_bottom_left event_source(::thymio2_interfaces::msg::Thymio2Controller::_event_source_type arg)
  {
    msg_.event_source = std::move(arg);
    return Init_Thymio2Controller_leds_bottom_left(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_event_args
{
public:
  explicit Init_Thymio2Controller_event_args(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_event_source event_args(::thymio2_interfaces::msg::Thymio2Controller::_event_args_type arg)
  {
    msg_.event_args = std::move(arg);
    return Init_Thymio2Controller_event_source(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_button_right
{
public:
  explicit Init_Thymio2Controller_button_right(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_event_args button_right(::thymio2_interfaces::msg::Thymio2Controller::_button_right_type arg)
  {
    msg_.button_right = std::move(arg);
    return Init_Thymio2Controller_event_args(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_button_left
{
public:
  explicit Init_Thymio2Controller_button_left(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_button_right button_left(::thymio2_interfaces::msg::Thymio2Controller::_button_left_type arg)
  {
    msg_.button_left = std::move(arg);
    return Init_Thymio2Controller_button_right(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_button_forward
{
public:
  explicit Init_Thymio2Controller_button_forward(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_button_left button_forward(::thymio2_interfaces::msg::Thymio2Controller::_button_forward_type arg)
  {
    msg_.button_forward = std::move(arg);
    return Init_Thymio2Controller_button_left(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_button_center
{
public:
  explicit Init_Thymio2Controller_button_center(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_button_forward button_center(::thymio2_interfaces::msg::Thymio2Controller::_button_center_type arg)
  {
    msg_.button_center = std::move(arg);
    return Init_Thymio2Controller_button_forward(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_button_backward
{
public:
  explicit Init_Thymio2Controller_button_backward(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_button_center button_backward(::thymio2_interfaces::msg::Thymio2Controller::_button_backward_type arg)
  {
    msg_.button_backward = std::move(arg);
    return Init_Thymio2Controller_button_center(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_acc
{
public:
  explicit Init_Thymio2Controller_acc(::thymio2_interfaces::msg::Thymio2Controller & msg)
  : msg_(msg)
  {}
  Init_Thymio2Controller_button_backward acc(::thymio2_interfaces::msg::Thymio2Controller::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_Thymio2Controller_button_backward(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

class Init_Thymio2Controller_debug_message
{
public:
  Init_Thymio2Controller_debug_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Thymio2Controller_acc debug_message(::thymio2_interfaces::msg::Thymio2Controller::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return Init_Thymio2Controller_acc(msg_);
  }

private:
  ::thymio2_interfaces::msg::Thymio2Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio2_interfaces::msg::Thymio2Controller>()
{
  return thymio2_interfaces::msg::builder::Init_Thymio2Controller_debug_message();
}

}  // namespace thymio2_interfaces

#endif  // THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__BUILDER_HPP_
