// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
// generated code does not contain a copyright notice
#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "thymio2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__struct.h"
#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__functions.h"
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

#include "rosidl_runtime_c/string.h"  // command, usb_port
#include "rosidl_runtime_c/string_functions.h"  // command, usb_port

// forward declare type support functions


using _Thymio2ControllerSrv_Request__ros_msg_type = thymio2_interfaces__srv__Thymio2ControllerSrv_Request;

static bool _Thymio2ControllerSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Thymio2ControllerSrv_Request__ros_msg_type * ros_message = static_cast<const _Thymio2ControllerSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    const rosidl_runtime_c__String * str = &ros_message->command;
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

  // Field name: usb_port
  {
    const rosidl_runtime_c__String * str = &ros_message->usb_port;
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

  return true;
}

static bool _Thymio2ControllerSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Thymio2ControllerSrv_Request__ros_msg_type * ros_message = static_cast<_Thymio2ControllerSrv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command.data) {
      rosidl_runtime_c__String__init(&ros_message->command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command'\n");
      return false;
    }
  }

  // Field name: usb_port
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->usb_port.data) {
      rosidl_runtime_c__String__init(&ros_message->usb_port);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->usb_port,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'usb_port'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio2_interfaces
size_t get_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Thymio2ControllerSrv_Request__ros_msg_type * ros_message = static_cast<const _Thymio2ControllerSrv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command.size + 1);
  // field.name usb_port
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->usb_port.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Thymio2ControllerSrv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio2_interfaces
size_t max_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: usb_port
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Thymio2ControllerSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Thymio2ControllerSrv_Request = {
  "thymio2_interfaces::srv",
  "Thymio2ControllerSrv_Request",
  _Thymio2ControllerSrv_Request__cdr_serialize,
  _Thymio2ControllerSrv_Request__cdr_deserialize,
  _Thymio2ControllerSrv_Request__get_serialized_size,
  _Thymio2ControllerSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _Thymio2ControllerSrv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Thymio2ControllerSrv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio2_interfaces, srv, Thymio2ControllerSrv_Request)() {
  return &_Thymio2ControllerSrv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "thymio2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "thymio2_interfaces/srv/detail/thymio2_controller_srv__struct.h"
// already included above
// #include "thymio2_interfaces/srv/detail/thymio2_controller_srv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // log_message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // log_message

// forward declare type support functions


using _Thymio2ControllerSrv_Response__ros_msg_type = thymio2_interfaces__srv__Thymio2ControllerSrv_Response;

static bool _Thymio2ControllerSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Thymio2ControllerSrv_Response__ros_msg_type * ros_message = static_cast<const _Thymio2ControllerSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: log_message
  {
    const rosidl_runtime_c__String * str = &ros_message->log_message;
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

  return true;
}

static bool _Thymio2ControllerSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Thymio2ControllerSrv_Response__ros_msg_type * ros_message = static_cast<_Thymio2ControllerSrv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: log_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->log_message.data) {
      rosidl_runtime_c__String__init(&ros_message->log_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->log_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'log_message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio2_interfaces
size_t get_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Thymio2ControllerSrv_Response__ros_msg_type * ros_message = static_cast<const _Thymio2ControllerSrv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name log_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->log_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Thymio2ControllerSrv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_thymio2_interfaces
size_t max_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: log_message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Thymio2ControllerSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_thymio2_interfaces__srv__Thymio2ControllerSrv_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Thymio2ControllerSrv_Response = {
  "thymio2_interfaces::srv",
  "Thymio2ControllerSrv_Response",
  _Thymio2ControllerSrv_Response__cdr_serialize,
  _Thymio2ControllerSrv_Response__cdr_deserialize,
  _Thymio2ControllerSrv_Response__get_serialized_size,
  _Thymio2ControllerSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _Thymio2ControllerSrv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Thymio2ControllerSrv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio2_interfaces, srv, Thymio2ControllerSrv_Response)() {
  return &_Thymio2ControllerSrv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "thymio2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "thymio2_interfaces/srv/thymio2_controller_srv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Thymio2ControllerSrv__callbacks = {
  "thymio2_interfaces::srv",
  "Thymio2ControllerSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio2_interfaces, srv, Thymio2ControllerSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio2_interfaces, srv, Thymio2ControllerSrv_Response)(),
};

static rosidl_service_type_support_t Thymio2ControllerSrv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Thymio2ControllerSrv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, thymio2_interfaces, srv, Thymio2ControllerSrv)() {
  return &Thymio2ControllerSrv__handle;
}

#if defined(__cplusplus)
}
#endif
