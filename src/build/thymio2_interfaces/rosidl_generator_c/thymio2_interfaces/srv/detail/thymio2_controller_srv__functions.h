// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__FUNCTIONS_H_
#define THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "thymio2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__struct.h"

/// Initialize srv/Thymio2ControllerSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request
 * )) before or use
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Request * msg);

/// Finalize srv/Thymio2ControllerSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Request * msg);

/// Create srv/Thymio2ControllerSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
thymio2_interfaces__srv__Thymio2ControllerSrv_Request *
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__create();

/// Destroy srv/Thymio2ControllerSrv message.
/**
 * It calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Request * msg);


/// Initialize array of srv/Thymio2ControllerSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/Thymio2ControllerSrv messages.
/**
 * It calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence * array);

/// Create array of srv/Thymio2ControllerSrv messages.
/**
 * It allocates the memory for the array and calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence *
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/Thymio2ControllerSrv messages.
/**
 * It calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Request__Sequence * array);

/// Initialize srv/Thymio2ControllerSrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response
 * )) before or use
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Response * msg);

/// Finalize srv/Thymio2ControllerSrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Response * msg);

/// Create srv/Thymio2ControllerSrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
thymio2_interfaces__srv__Thymio2ControllerSrv_Response *
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__create();

/// Destroy srv/Thymio2ControllerSrv message.
/**
 * It calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Response * msg);


/// Initialize array of srv/Thymio2ControllerSrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
bool
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__init(thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/Thymio2ControllerSrv messages.
/**
 * It calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__fini(thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence * array);

/// Create array of srv/Thymio2ControllerSrv messages.
/**
 * It allocates the memory for the array and calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence *
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/Thymio2ControllerSrv messages.
/**
 * It calls
 * thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_thymio2_interfaces
void
thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence__destroy(thymio2_interfaces__srv__Thymio2ControllerSrv_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__FUNCTIONS_H_
