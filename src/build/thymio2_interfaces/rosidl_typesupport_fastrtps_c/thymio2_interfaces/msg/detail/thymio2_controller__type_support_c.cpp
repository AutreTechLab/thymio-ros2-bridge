// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from thymio2_interfaces:msg/Thymio2Controller.idl
// generated code does not contain a copyright notice
#include "thymio2_interfaces/msg/detail/thymio2_controller__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "thymio2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "thymio2_interfaces/msg/detail/thymio2_controller__struct.h"
#include "thymio2_interfaces/msg/detail/thymio2_controller__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // acc, prox_ground_ambiant, prox_ground_delta, prox_ground_reflected, prox_horizontal, timer_period
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // acc, prox_ground_ambiant, prox_ground_delta, prox_ground_reflected, prox_horizontal, timer_period
#include "rosidl_runtime_c/string.h"  // button_backward, button_center, button_forward, button_left, button_right, debug_message, event_args, event_source, leds_bottom_left, leds_bottom_right, leds_circle, leds_top, mic_intensity, mic_threshold, motor_left_pwm, motor_left_speed, motor_left_target, motor_right_pwm, motor_right_speed, motor_right_target, prox_comm_rx, prox_comm_tx, rc5_address, rc5_command
#include "rosidl_runtime_c/string_functions.h"  // button_backward, button_center, button_forward, button_left, button_right, debug_message, event_args, event_source, leds_bottom_left, leds_bottom_right, leds_circle, leds_top, mic_intensity, mic_threshold, motor_left_pwm, motor_left_speed, motor_left_target, motor_right_pwm, motor_right_speed, motor_right_target, prox_comm_rx, prox_comm_tx, rc5_address, rc5_command

// forward declare type support functions


using _Thymio2Controller__ros_msg_type = thymio2_interfaces__msg__Thymio2Controller;

static bool _Thymio2Controller__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Thymio2Controller__ros_msg_type * ros_message = static_cast<const _Thymio2Controller__ros_msg_type *>(untyped_ros_message);
  // Field name: debug_message
  {
    const rosidl_runtime_c__String * str = &ros_message->debug_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: acc
  {
    size_t size = ros_message->acc.size;
    auto array_ptr = ros_message->acc.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: button_backward
  {
    const rosidl_runtime_c__String * str = &ros_message->button_backward;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: button_center
  {
    const rosidl_runtime_c__String * str = &ros_message->button_center;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: button_forward
  {
    const rosidl_runtime_c__String * str = &ros_message->button_forward;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: button_left
  {
    const rosidl_runtime_c__String * str = &ros_message->button_left;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: button_right
  {
    const rosidl_runtime_c__String * str = &ros_message->button_right;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: event_args
  {
    size_t size = ros_message->event_args.size;
    auto array_ptr = ros_message->event_args.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: event_source
  {
    const rosidl_runtime_c__String * str = &ros_message->event_source;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: leds_bottom_left
  {
    size_t size = ros_message->leds_bottom_left.size;
    auto array_ptr = ros_message->leds_bottom_left.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: leds_bottom_right
  {
    size_t size = ros_message->leds_bottom_right.size;
    auto array_ptr = ros_message->leds_bottom_right.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: leds_circle
  {
    size_t size = ros_message->leds_circle.size;
    auto array_ptr = ros_message->leds_circle.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: leds_top
  {
    size_t size = ros_message->leds_top.size;
    auto array_ptr = ros_message->leds_top.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: mic_intensity
  {
    const rosidl_runtime_c__String * str = &ros_message->mic_intensity;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mic_threshold
  {
    const rosidl_runtime_c__String * str = &ros_message->mic_threshold;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_left_pwm
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_left_pwm;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_left_speed
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_left_speed;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_left_target
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_left_target;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_right_pwm
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_right_pwm;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_right_speed
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_right_speed;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_right_target
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_right_target;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: prox_comm_rx
  {
    const rosidl_runtime_c__String * str = &ros_message->prox_comm_rx;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: prox_comm_tx
  {
    const rosidl_runtime_c__String * str = &ros_message->prox_comm_tx;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: prox_ground_ambiant
  {
    size_t size = ros_message->prox_ground_ambiant.size;
    auto array_ptr = ros_message->prox_ground_ambiant.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: prox_ground_delta
  {
    size_t size = ros_message->prox_ground_delta.size;
    auto array_ptr = ros_message->prox_ground_delta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: prox_ground_reflected
  {
    size_t size = ros_message->prox_ground_reflected.size;
    auto array_ptr = ros_message->prox_ground_reflected.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: prox_horizontal
  {
    size_t size = ros_message->prox_horizontal.size;
    auto array_ptr = ros_message->prox_horizontal.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rc5_address
  {
    const rosidl_runtime_c__String * str = &ros_message->rc5_address;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: rc5_command
  {
    const rosidl_runtime_c__String * str = &ros_message->rc5_command;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sd_present
  {
    cdr << (ros_message->sd_present ? true : false);
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: timer_period
  {
    size_t size = ros_message->timer_period.size;
    auto array_ptr = ros_message->timer_period.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Thymio2Controller__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Thymio2Controller__ros_msg_type * ros_message = static_cast<_Thymio2Controller__ros_msg_type *>(untyped_ros_message);
  // Field name: debug_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->debug_message.data) {
      rosidl_runtime_c__String__init(&ros_message->debug_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->debug_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'debug_message'\n");
      return false;
    }
  }

  // Field name: acc
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->acc.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->acc);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->acc, size)) {
      return "failed to create array for field 'acc'";
    }
    auto array_ptr = ros_message->acc.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: button_backward
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->button_backward.data) {
      rosidl_runtime_c__String__init(&ros_message->button_backward);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->button_backward,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'button_backward'\n");
      return false;
    }
  }

  // Field name: button_center
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->button_center.data) {
      rosidl_runtime_c__String__init(&ros_message->button_center);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->button_center,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'button_center'\n");
      return false;
    }
  }

  // Field name: button_forward
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->button_forward.data) {
      rosidl_runtime_c__String__init(&ros_message->button_forward);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->button_forward,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'button_forward'\n");
      return false;
    }
  }

  // Field name: button_left
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->button_left.data) {
      rosidl_runtime_c__String__init(&ros_message->button_left);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->button_left,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'button_left'\n");
      return false;
    }
  }

  // Field name: button_right
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->button_right.data) {
      rosidl_runtime_c__String__init(&ros_message->button_right);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->button_right,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'button_right'\n");
      return false;
    }
  }

  // Field name: event_args
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->event_args.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->event_args);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->event_args, size)) {
      return "failed to create array for field 'event_args'";
    }
    auto array_ptr = ros_message->event_args.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'event_args'\n");
        return false;
      }
    }
  }

  // Field name: event_source
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->event_source.data) {
      rosidl_runtime_c__String__init(&ros_message->event_source);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->event_source,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'event_source'\n");
      return false;
    }
  }

  // Field name: leds_bottom_left
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->leds_bottom_left.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->leds_bottom_left);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->leds_bottom_left, size)) {
      return "failed to create array for field 'leds_bottom_left'";
    }
    auto array_ptr = ros_message->leds_bottom_left.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'leds_bottom_left'\n");
        return false;
      }
    }
  }

  // Field name: leds_bottom_right
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->leds_bottom_right.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->leds_bottom_right);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->leds_bottom_right, size)) {
      return "failed to create array for field 'leds_bottom_right'";
    }
    auto array_ptr = ros_message->leds_bottom_right.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'leds_bottom_right'\n");
        return false;
      }
    }
  }

  // Field name: leds_circle
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->leds_circle.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->leds_circle);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->leds_circle, size)) {
      return "failed to create array for field 'leds_circle'";
    }
    auto array_ptr = ros_message->leds_circle.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'leds_circle'\n");
        return false;
      }
    }
  }

  // Field name: leds_top
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->leds_top.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->leds_top);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->leds_top, size)) {
      return "failed to create array for field 'leds_top'";
    }
    auto array_ptr = ros_message->leds_top.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'leds_top'\n");
        return false;
      }
    }
  }

  // Field name: mic_intensity
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mic_intensity.data) {
      rosidl_runtime_c__String__init(&ros_message->mic_intensity);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mic_intensity,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mic_intensity'\n");
      return false;
    }
  }

  // Field name: mic_threshold
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mic_threshold.data) {
      rosidl_runtime_c__String__init(&ros_message->mic_threshold);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mic_threshold,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mic_threshold'\n");
      return false;
    }
  }

  // Field name: motor_left_pwm
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_left_pwm.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_left_pwm);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_left_pwm,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_left_pwm'\n");
      return false;
    }
  }

  // Field name: motor_left_speed
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_left_speed.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_left_speed);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_left_speed,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_left_speed'\n");
      return false;
    }
  }

  // Field name: motor_left_target
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_left_target.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_left_target);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_left_target,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_left_target'\n");
      return false;
    }
  }

  // Field name: motor_right_pwm
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_right_pwm.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_right_pwm);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_right_pwm,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_right_pwm'\n");
      return false;
    }
  }

  // Field name: motor_right_speed
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_right_speed.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_right_speed);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_right_speed,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_right_speed'\n");
      return false;
    }
  }

  // Field name: motor_right_target
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_right_target.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_right_target);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_right_target,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_right_target'\n");
      return false;
    }
  }

  // Field name: prox_comm_rx
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->prox_comm_rx.data) {
      rosidl_runtime_c__String__init(&ros_message->prox_comm_rx);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->prox_comm_rx,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'prox_comm_rx'\n");
      return false;
    }
  }

  // Field name: prox_comm_tx
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->prox_comm_tx.data) {
      rosidl_runtime_c__String__init(&ros_message->prox_comm_tx);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->prox_comm_tx,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'prox_comm_tx'\n");
      return false;
    }
  }

  // Field name: prox_ground_ambiant
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->prox_ground_ambiant.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->prox_ground_ambiant);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->prox_ground_ambiant, size)) {
      return "failed to create array for field 'prox_ground_ambiant'";
    }
    auto array_ptr = ros_message->prox_ground_ambiant.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: prox_ground_delta
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->prox_ground_delta.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->prox_ground_delta);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->prox_ground_delta, size)) {
      return "failed to create array for field 'prox_ground_delta'";
    }
    auto array_ptr = ros_message->prox_ground_delta.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: prox_ground_reflected
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->prox_ground_reflected.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->prox_ground_reflected);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->prox_ground_reflected, size)) {
      return "failed to create array for field 'prox_ground_reflected'";
    }
    auto array_ptr = ros_message->prox_ground_reflected.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: prox_horizontal
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->prox_horizontal.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->prox_horizontal);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->prox_horizontal, size)) {
      return "failed to create array for field 'prox_horizontal'";
    }
    auto array_ptr = ros_message->prox_horizontal.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rc5_address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rc5_address.data) {
      rosidl_runtime_c__String__init(&ros_message->rc5_address);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rc5_address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rc5_address'\n");
      return false;
    }
  }

  // Field name: rc5_command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rc5_command.data) {
      rosidl_runtime_c__String__init(&ros_message->rc5_command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rc5_command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rc5_command'\n");
      return false;
    }
  }

  // Field name: sd_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_present = tmp ? true : false;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: timer_period
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->timer_period.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->timer_period);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->timer_period, size)) {
      return "failed to create array for field 'timer_period'";
    }
    auto array_ptr = ros_message->timer_period.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio2_interfaces
size_t get_serialized_size_thymio2_interfaces__msg__Thymio2Controller(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Thymio2Controller__ros_msg_type * ros_message = static_cast<const _Thymio2Controller__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name debug_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->debug_message.size + 1);
  // field.name acc
  {
    size_t array_size = ros_message->acc.size;
    auto array_ptr = ros_message->acc.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_backward
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->button_backward.size + 1);
  // field.name button_center
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->button_center.size + 1);
  // field.name button_forward
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->button_forward.size + 1);
  // field.name button_left
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->button_left.size + 1);
  // field.name button_right
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->button_right.size + 1);
  // field.name event_args
  {
    size_t array_size = ros_message->event_args.size;
    auto array_ptr = ros_message->event_args.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name event_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->event_source.size + 1);
  // field.name leds_bottom_left
  {
    size_t array_size = ros_message->leds_bottom_left.size;
    auto array_ptr = ros_message->leds_bottom_left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name leds_bottom_right
  {
    size_t array_size = ros_message->leds_bottom_right.size;
    auto array_ptr = ros_message->leds_bottom_right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name leds_circle
  {
    size_t array_size = ros_message->leds_circle.size;
    auto array_ptr = ros_message->leds_circle.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name leds_top
  {
    size_t array_size = ros_message->leds_top.size;
    auto array_ptr = ros_message->leds_top.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name mic_intensity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mic_intensity.size + 1);
  // field.name mic_threshold
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mic_threshold.size + 1);
  // field.name motor_left_pwm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_left_pwm.size + 1);
  // field.name motor_left_speed
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_left_speed.size + 1);
  // field.name motor_left_target
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_left_target.size + 1);
  // field.name motor_right_pwm
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_right_pwm.size + 1);
  // field.name motor_right_speed
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_right_speed.size + 1);
  // field.name motor_right_target
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_right_target.size + 1);
  // field.name prox_comm_rx
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->prox_comm_rx.size + 1);
  // field.name prox_comm_tx
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->prox_comm_tx.size + 1);
  // field.name prox_ground_ambiant
  {
    size_t array_size = ros_message->prox_ground_ambiant.size;
    auto array_ptr = ros_message->prox_ground_ambiant.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prox_ground_delta
  {
    size_t array_size = ros_message->prox_ground_delta.size;
    auto array_ptr = ros_message->prox_ground_delta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prox_ground_reflected
  {
    size_t array_size = ros_message->prox_ground_reflected.size;
    auto array_ptr = ros_message->prox_ground_reflected.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prox_horizontal
  {
    size_t array_size = ros_message->prox_horizontal.size;
    auto array_ptr = ros_message->prox_horizontal.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc5_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rc5_address.size + 1);
  // field.name rc5_command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rc5_command.size + 1);
  // field.name sd_present
  {
    size_t item_size = sizeof(ros_message->sd_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timer_period
  {
    size_t array_size = ros_message->timer_period.size;
    auto array_ptr = ros_message->timer_period.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Thymio2Controller__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_thymio2_interfaces__msg__Thymio2Controller(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio2_interfaces
size_t max_serialized_size_thymio2_interfaces__msg__Thymio2Controller(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: debug_message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acc
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: button_backward
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: button_center
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: button_forward
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: button_left
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: button_right
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: event_args
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
  // member: event_source
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: leds_bottom_left
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
  // member: leds_bottom_right
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
  // member: leds_circle
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
  // member: leds_top
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
  // member: mic_intensity
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mic_threshold
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_left_pwm
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_left_speed
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_left_target
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_right_pwm
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_right_speed
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_right_target
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: prox_comm_rx
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: prox_comm_tx
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: prox_ground_ambiant
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: prox_ground_delta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: prox_ground_reflected
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: prox_horizontal
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rc5_address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: rc5_command
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sd_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timer_period
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

static size_t _Thymio2Controller__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_thymio2_interfaces__msg__Thymio2Controller(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Thymio2Controller = {
  "thymio2_interfaces::msg",
  "Thymio2Controller",
  _Thymio2Controller__cdr_serialize,
  _Thymio2Controller__cdr_deserialize,
  _Thymio2Controller__get_serialized_size,
  _Thymio2Controller__max_serialized_size
};

static rosidl_message_type_support_t _Thymio2Controller__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Thymio2Controller,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio2_interfaces, msg, Thymio2Controller)() {
  return &_Thymio2Controller__type_support;
}

#if defined(__cplusplus)
}
#endif
