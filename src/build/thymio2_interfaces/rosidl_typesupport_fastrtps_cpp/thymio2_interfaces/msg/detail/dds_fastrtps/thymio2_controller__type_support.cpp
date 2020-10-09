// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from thymio2_interfaces:msg/Thymio2Controller.idl
// generated code does not contain a copyright notice
#include "thymio2_interfaces/msg/detail/thymio2_controller__rosidl_typesupport_fastrtps_cpp.hpp"
#include "thymio2_interfaces/msg/detail/thymio2_controller__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace thymio2_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
cdr_serialize(
  const thymio2_interfaces::msg::Thymio2Controller & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: debug_message
  cdr << ros_message.debug_message;
  // Member: acc
  {
    cdr << ros_message.acc;
  }
  // Member: button_backward
  cdr << ros_message.button_backward;
  // Member: button_center
  cdr << ros_message.button_center;
  // Member: button_forward
  cdr << ros_message.button_forward;
  // Member: button_left
  cdr << ros_message.button_left;
  // Member: button_right
  cdr << ros_message.button_right;
  // Member: event_args
  {
    cdr << ros_message.event_args;
  }
  // Member: event_source
  cdr << ros_message.event_source;
  // Member: leds_bottom_left
  {
    cdr << ros_message.leds_bottom_left;
  }
  // Member: leds_bottom_right
  {
    cdr << ros_message.leds_bottom_right;
  }
  // Member: leds_circle
  {
    cdr << ros_message.leds_circle;
  }
  // Member: leds_top
  {
    cdr << ros_message.leds_top;
  }
  // Member: mic_intensity
  cdr << ros_message.mic_intensity;
  // Member: mic_threshold
  cdr << ros_message.mic_threshold;
  // Member: motor_left_pwm
  cdr << ros_message.motor_left_pwm;
  // Member: motor_left_speed
  cdr << ros_message.motor_left_speed;
  // Member: motor_left_target
  cdr << ros_message.motor_left_target;
  // Member: motor_right_pwm
  cdr << ros_message.motor_right_pwm;
  // Member: motor_right_speed
  cdr << ros_message.motor_right_speed;
  // Member: motor_right_target
  cdr << ros_message.motor_right_target;
  // Member: prox_comm_rx
  cdr << ros_message.prox_comm_rx;
  // Member: prox_comm_tx
  cdr << ros_message.prox_comm_tx;
  // Member: prox_ground_ambiant
  {
    cdr << ros_message.prox_ground_ambiant;
  }
  // Member: prox_ground_delta
  {
    cdr << ros_message.prox_ground_delta;
  }
  // Member: prox_ground_reflected
  {
    cdr << ros_message.prox_ground_reflected;
  }
  // Member: prox_horizontal
  {
    cdr << ros_message.prox_horizontal;
  }
  // Member: rc5_address
  cdr << ros_message.rc5_address;
  // Member: rc5_command
  cdr << ros_message.rc5_command;
  // Member: sd_present
  cdr << (ros_message.sd_present ? true : false);
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: timer_period
  {
    cdr << ros_message.timer_period;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  thymio2_interfaces::msg::Thymio2Controller & ros_message)
{
  // Member: debug_message
  cdr >> ros_message.debug_message;

  // Member: acc
  {
    cdr >> ros_message.acc;
  }

  // Member: button_backward
  cdr >> ros_message.button_backward;

  // Member: button_center
  cdr >> ros_message.button_center;

  // Member: button_forward
  cdr >> ros_message.button_forward;

  // Member: button_left
  cdr >> ros_message.button_left;

  // Member: button_right
  cdr >> ros_message.button_right;

  // Member: event_args
  {
    cdr >> ros_message.event_args;
  }

  // Member: event_source
  cdr >> ros_message.event_source;

  // Member: leds_bottom_left
  {
    cdr >> ros_message.leds_bottom_left;
  }

  // Member: leds_bottom_right
  {
    cdr >> ros_message.leds_bottom_right;
  }

  // Member: leds_circle
  {
    cdr >> ros_message.leds_circle;
  }

  // Member: leds_top
  {
    cdr >> ros_message.leds_top;
  }

  // Member: mic_intensity
  cdr >> ros_message.mic_intensity;

  // Member: mic_threshold
  cdr >> ros_message.mic_threshold;

  // Member: motor_left_pwm
  cdr >> ros_message.motor_left_pwm;

  // Member: motor_left_speed
  cdr >> ros_message.motor_left_speed;

  // Member: motor_left_target
  cdr >> ros_message.motor_left_target;

  // Member: motor_right_pwm
  cdr >> ros_message.motor_right_pwm;

  // Member: motor_right_speed
  cdr >> ros_message.motor_right_speed;

  // Member: motor_right_target
  cdr >> ros_message.motor_right_target;

  // Member: prox_comm_rx
  cdr >> ros_message.prox_comm_rx;

  // Member: prox_comm_tx
  cdr >> ros_message.prox_comm_tx;

  // Member: prox_ground_ambiant
  {
    cdr >> ros_message.prox_ground_ambiant;
  }

  // Member: prox_ground_delta
  {
    cdr >> ros_message.prox_ground_delta;
  }

  // Member: prox_ground_reflected
  {
    cdr >> ros_message.prox_ground_reflected;
  }

  // Member: prox_horizontal
  {
    cdr >> ros_message.prox_horizontal;
  }

  // Member: rc5_address
  cdr >> ros_message.rc5_address;

  // Member: rc5_command
  cdr >> ros_message.rc5_command;

  // Member: sd_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_present = tmp ? true : false;
  }

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: timer_period
  {
    cdr >> ros_message.timer_period;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
get_serialized_size(
  const thymio2_interfaces::msg::Thymio2Controller & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: debug_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.debug_message.size() + 1);
  // Member: acc
  {
    size_t array_size = ros_message.acc.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.acc[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_backward
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.button_backward.size() + 1);
  // Member: button_center
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.button_center.size() + 1);
  // Member: button_forward
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.button_forward.size() + 1);
  // Member: button_left
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.button_left.size() + 1);
  // Member: button_right
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.button_right.size() + 1);
  // Member: event_args
  {
    size_t array_size = ros_message.event_args.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.event_args[index].size() + 1);
    }
  }
  // Member: event_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.event_source.size() + 1);
  // Member: leds_bottom_left
  {
    size_t array_size = ros_message.leds_bottom_left.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.leds_bottom_left[index].size() + 1);
    }
  }
  // Member: leds_bottom_right
  {
    size_t array_size = ros_message.leds_bottom_right.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.leds_bottom_right[index].size() + 1);
    }
  }
  // Member: leds_circle
  {
    size_t array_size = ros_message.leds_circle.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.leds_circle[index].size() + 1);
    }
  }
  // Member: leds_top
  {
    size_t array_size = ros_message.leds_top.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.leds_top[index].size() + 1);
    }
  }
  // Member: mic_intensity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mic_intensity.size() + 1);
  // Member: mic_threshold
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mic_threshold.size() + 1);
  // Member: motor_left_pwm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motor_left_pwm.size() + 1);
  // Member: motor_left_speed
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motor_left_speed.size() + 1);
  // Member: motor_left_target
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motor_left_target.size() + 1);
  // Member: motor_right_pwm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motor_right_pwm.size() + 1);
  // Member: motor_right_speed
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motor_right_speed.size() + 1);
  // Member: motor_right_target
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motor_right_target.size() + 1);
  // Member: prox_comm_rx
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.prox_comm_rx.size() + 1);
  // Member: prox_comm_tx
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.prox_comm_tx.size() + 1);
  // Member: prox_ground_ambiant
  {
    size_t array_size = ros_message.prox_ground_ambiant.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.prox_ground_ambiant[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prox_ground_delta
  {
    size_t array_size = ros_message.prox_ground_delta.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.prox_ground_delta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prox_ground_reflected
  {
    size_t array_size = ros_message.prox_ground_reflected.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.prox_ground_reflected[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prox_horizontal
  {
    size_t array_size = ros_message.prox_horizontal.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.prox_horizontal[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc5_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rc5_address.size() + 1);
  // Member: rc5_command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rc5_command.size() + 1);
  // Member: sd_present
  {
    size_t item_size = sizeof(ros_message.sd_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timer_period
  {
    size_t array_size = ros_message.timer_period.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.timer_period[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
max_serialized_size_Thymio2Controller(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: debug_message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acc
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: button_backward
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: button_center
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: button_forward
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: button_left
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: button_right
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: event_args
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: event_source
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: leds_bottom_left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: leds_bottom_right
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: leds_circle
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: leds_top
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: mic_intensity
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: mic_threshold
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motor_left_pwm
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motor_left_speed
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motor_left_target
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motor_right_pwm
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motor_right_speed
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motor_right_target
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: prox_comm_rx
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: prox_comm_tx
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: prox_ground_ambiant
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: prox_ground_delta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: prox_ground_reflected
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: prox_horizontal
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rc5_address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rc5_command
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sd_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timer_period
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Thymio2Controller__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const thymio2_interfaces::msg::Thymio2Controller *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Thymio2Controller__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<thymio2_interfaces::msg::Thymio2Controller *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Thymio2Controller__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const thymio2_interfaces::msg::Thymio2Controller *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Thymio2Controller__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Thymio2Controller(full_bounded, 0);
}

static message_type_support_callbacks_t _Thymio2Controller__callbacks = {
  "thymio2_interfaces::msg",
  "Thymio2Controller",
  _Thymio2Controller__cdr_serialize,
  _Thymio2Controller__cdr_deserialize,
  _Thymio2Controller__get_serialized_size,
  _Thymio2Controller__max_serialized_size
};

static rosidl_message_type_support_t _Thymio2Controller__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Thymio2Controller__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace thymio2_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_thymio2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<thymio2_interfaces::msg::Thymio2Controller>()
{
  return &thymio2_interfaces::msg::typesupport_fastrtps_cpp::_Thymio2Controller__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, thymio2_interfaces, msg, Thymio2Controller)() {
  return &thymio2_interfaces::msg::typesupport_fastrtps_cpp::_Thymio2Controller__handle;
}

#ifdef __cplusplus
}
#endif
