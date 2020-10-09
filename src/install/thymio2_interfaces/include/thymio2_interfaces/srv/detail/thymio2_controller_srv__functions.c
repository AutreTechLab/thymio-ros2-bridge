// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
// generated code does not contain a copyright notice
#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `command`
// Member `usb_port`
#include "rosidl_runtime_c/string_functions.h"

bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini(msg);
    return false;
  }
  // usb_port
  if (!rosidl_runtime_c__String__init(&msg->usb_port)) {
    thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // usb_port
  rosidl_runtime_c__String__fini(&msg->usb_port);
}

thymio2_interfaces__srv__Thymio2ControllerSrv_Request *
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__create()
{
  thymio2_interfaces__srv__Thymio2ControllerSrv_Request * msg = (thymio2_interfaces__srv__Thymio2ControllerSrv_Request *)malloc(sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Request));
  bool success = thymio2_interfaces__srv__Thymio2ControllerSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Request * msg)
{
  if (msg) {
    thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini(msg);
  }
  free(msg);
}


bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  thymio2_interfaces__srv__Thymio2ControllerSrv_Request * data = NULL;
  if (size) {
    data = (thymio2_interfaces__srv__Thymio2ControllerSrv_Request *)calloc(size, sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = thymio2_interfaces__srv__Thymio2ControllerSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence *
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__create(size_t size)
{
  thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence * array = (thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence *)malloc(sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence * array)
{
  if (array) {
    thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `log_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // log_message
  if (!rosidl_runtime_c__String__init(&msg->log_message)) {
    thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // log_message
  rosidl_runtime_c__String__fini(&msg->log_message);
}

thymio2_interfaces__srv__Thymio2ControllerSrv_Response *
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__create()
{
  thymio2_interfaces__srv__Thymio2ControllerSrv_Response * msg = (thymio2_interfaces__srv__Thymio2ControllerSrv_Response *)malloc(sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Response));
  bool success = thymio2_interfaces__srv__Thymio2ControllerSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Response * msg)
{
  if (msg) {
    thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini(msg);
  }
  free(msg);
}


bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  thymio2_interfaces__srv__Thymio2ControllerSrv_Response * data = NULL;
  if (size) {
    data = (thymio2_interfaces__srv__Thymio2ControllerSrv_Response *)calloc(size, sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = thymio2_interfaces__srv__Thymio2ControllerSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence *
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__create(size_t size)
{
  thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence * array = (thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence *)malloc(sizeof(thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence * array)
{
  if (array) {
    thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__fini(array);
  }
  free(array);
}
