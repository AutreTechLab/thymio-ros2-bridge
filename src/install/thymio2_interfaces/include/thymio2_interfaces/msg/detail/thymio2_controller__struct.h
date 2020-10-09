// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from thymio2_interfaces:msg/Thymio2Controller.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__STRUCT_H_
#define THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_message'
// Member 'button_backward'
// Member 'button_center'
// Member 'button_forward'
// Member 'button_left'
// Member 'button_right'
// Member 'event_args'
// Member 'event_source'
// Member 'leds_bottom_left'
// Member 'leds_bottom_right'
// Member 'leds_circle'
// Member 'leds_top'
// Member 'mic_intensity'
// Member 'mic_threshold'
// Member 'motor_left_pwm'
// Member 'motor_left_speed'
// Member 'motor_left_target'
// Member 'motor_right_pwm'
// Member 'motor_right_speed'
// Member 'motor_right_target'
// Member 'prox_comm_rx'
// Member 'prox_comm_tx'
// Member 'rc5_address'
// Member 'rc5_command'
#include "rosidl_runtime_c/string.h"
// Member 'acc'
// Member 'prox_ground_ambiant'
// Member 'prox_ground_delta'
// Member 'prox_ground_reflected'
// Member 'prox_horizontal'
// Member 'timer_period'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Thymio2Controller in the package thymio2_interfaces.
typedef struct thymio2_interfaces__msg__Thymio2Controller
{
  rosidl_runtime_c__String debug_message;
  rosidl_runtime_c__int64__Sequence acc;
  rosidl_runtime_c__String button_backward;
  rosidl_runtime_c__String button_center;
  rosidl_runtime_c__String button_forward;
  rosidl_runtime_c__String button_left;
  rosidl_runtime_c__String button_right;
  rosidl_runtime_c__String__Sequence event_args;
  rosidl_runtime_c__String event_source;
  rosidl_runtime_c__String__Sequence leds_bottom_left;
  rosidl_runtime_c__String__Sequence leds_bottom_right;
  rosidl_runtime_c__String__Sequence leds_circle;
  rosidl_runtime_c__String__Sequence leds_top;
  rosidl_runtime_c__String mic_intensity;
  rosidl_runtime_c__String mic_threshold;
  rosidl_runtime_c__String motor_left_pwm;
  rosidl_runtime_c__String motor_left_speed;
  rosidl_runtime_c__String motor_left_target;
  rosidl_runtime_c__String motor_right_pwm;
  rosidl_runtime_c__String motor_right_speed;
  rosidl_runtime_c__String motor_right_target;
  rosidl_runtime_c__String prox_comm_rx;
  rosidl_runtime_c__String prox_comm_tx;
  rosidl_runtime_c__int64__Sequence prox_ground_ambiant;
  rosidl_runtime_c__int64__Sequence prox_ground_delta;
  rosidl_runtime_c__int64__Sequence prox_ground_reflected;
  rosidl_runtime_c__int64__Sequence prox_horizontal;
  rosidl_runtime_c__String rc5_address;
  rosidl_runtime_c__String rc5_command;
  bool sd_present;
  int64_t temperature;
  rosidl_runtime_c__int64__Sequence timer_period;
} thymio2_interfaces__msg__Thymio2Controller;

// Struct for a sequence of thymio2_interfaces__msg__Thymio2Controller.
typedef struct thymio2_interfaces__msg__Thymio2Controller__Sequence
{
  thymio2_interfaces__msg__Thymio2Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio2_interfaces__msg__Thymio2Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__STRUCT_H_
