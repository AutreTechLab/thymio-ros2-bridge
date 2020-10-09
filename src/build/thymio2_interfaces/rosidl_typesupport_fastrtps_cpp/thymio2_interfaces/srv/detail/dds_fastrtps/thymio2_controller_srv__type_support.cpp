// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
// generated code does not contain a copyright notice
#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
cdr_serialize(
  const thymio2_interfaces::srv::Thymio2ControllerSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;
  // Member: usb_port
  cdr << ros_message.usb_port;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  thymio2_interfaces::srv::Thymio2ControllerSrv_Request & ros_message)
{
  // Member: command
  cdr >> ros_message.command;

  // Member: usb_port
  cdr >> ros_message.usb_port;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
get_serialized_size(
  const thymio2_interfaces::srv::Thymio2ControllerSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command.size() + 1);
  // Member: usb_port
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.usb_port.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
max_serialized_size_Thymio2ControllerSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: usb_port
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

static bool _Thymio2ControllerSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const thymio2_interfaces::srv::Thymio2ControllerSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Thymio2ControllerSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<thymio2_interfaces::srv::Thymio2ControllerSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Thymio2ControllerSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const thymio2_interfaces::srv::Thymio2ControllerSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Thymio2ControllerSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Thymio2ControllerSrv_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Thymio2ControllerSrv_Request__callbacks = {
  "thymio2_interfaces::srv",
  "Thymio2ControllerSrv_Request",
  _Thymio2ControllerSrv_Request__cdr_serialize,
  _Thymio2ControllerSrv_Request__cdr_deserialize,
  _Thymio2ControllerSrv_Request__get_serialized_size,
  _Thymio2ControllerSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _Thymio2ControllerSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Thymio2ControllerSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace thymio2_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_thymio2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>()
{
  return &thymio2_interfaces::srv::typesupport_fastrtps_cpp::_Thymio2ControllerSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, thymio2_interfaces, srv, Thymio2ControllerSrv_Request)() {
  return &thymio2_interfaces::srv::typesupport_fastrtps_cpp::_Thymio2ControllerSrv_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace thymio2_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
cdr_serialize(
  const thymio2_interfaces::srv::Thymio2ControllerSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: log_message
  cdr << ros_message.log_message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  thymio2_interfaces::srv::Thymio2ControllerSrv_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: log_message
  cdr >> ros_message.log_message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
get_serialized_size(
  const thymio2_interfaces::srv::Thymio2ControllerSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: log_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.log_message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_thymio2_interfaces
max_serialized_size_Thymio2ControllerSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: log_message
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

static bool _Thymio2ControllerSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const thymio2_interfaces::srv::Thymio2ControllerSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Thymio2ControllerSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<thymio2_interfaces::srv::Thymio2ControllerSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Thymio2ControllerSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const thymio2_interfaces::srv::Thymio2ControllerSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Thymio2ControllerSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Thymio2ControllerSrv_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Thymio2ControllerSrv_Response__callbacks = {
  "thymio2_interfaces::srv",
  "Thymio2ControllerSrv_Response",
  _Thymio2ControllerSrv_Response__cdr_serialize,
  _Thymio2ControllerSrv_Response__cdr_deserialize,
  _Thymio2ControllerSrv_Response__get_serialized_size,
  _Thymio2ControllerSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _Thymio2ControllerSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Thymio2ControllerSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace thymio2_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_thymio2_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>()
{
  return &thymio2_interfaces::srv::typesupport_fastrtps_cpp::_Thymio2ControllerSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, thymio2_interfaces, srv, Thymio2ControllerSrv_Response)() {
  return &thymio2_interfaces::srv::typesupport_fastrtps_cpp::_Thymio2ControllerSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace thymio2_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Thymio2ControllerSrv__callbacks = {
  "thymio2_interfaces::srv",
  "Thymio2ControllerSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, thymio2_interfaces, srv, Thymio2ControllerSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, thymio2_interfaces, srv, Thymio2ControllerSrv_Response)(),
};

static rosidl_service_type_support_t _Thymio2ControllerSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Thymio2ControllerSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace thymio2_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_thymio2_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<thymio2_interfaces::srv::Thymio2ControllerSrv>()
{
  return &thymio2_interfaces::srv::typesupport_fastrtps_cpp::_Thymio2ControllerSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, thymio2_interfaces, srv, Thymio2ControllerSrv)() {
  return &thymio2_interfaces::srv::typesupport_fastrtps_cpp::_Thymio2ControllerSrv__handle;
}

#ifdef __cplusplus
}
#endif
