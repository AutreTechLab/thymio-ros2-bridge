// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__STRUCT_H_
#define THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'usb_port'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Thymio2ControllerSrv in the package thymio2_interfaces.
typedef struct thymio2_interfaces__srv__Thymio2ControllerSrv_Request
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String usb_port;
} thymio2_interfaces__srv__Thymio2ControllerSrv_Request;

// Struct for a sequence of thymio2_interfaces__srv__Thymio2ControllerSrv_Request.
typedef struct thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence
{
  thymio2_interfaces__srv__Thymio2ControllerSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'log_message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/Thymio2ControllerSrv in the package thymio2_interfaces.
typedef struct thymio2_interfaces__srv__Thymio2ControllerSrv_Response
{
  bool success;
  rosidl_runtime_c__String log_message;
} thymio2_interfaces__srv__Thymio2ControllerSrv_Response;

// Struct for a sequence of thymio2_interfaces__srv__Thymio2ControllerSrv_Response.
typedef struct thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence
{
  thymio2_interfaces__srv__Thymio2ControllerSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__STRUCT_H_
