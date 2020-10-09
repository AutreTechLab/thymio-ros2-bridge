// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__TRAITS_HPP_
#define THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__TRAITS_HPP_

#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>()
{
  return "thymio2_interfaces::srv::Thymio2ControllerSrv_Request";
}

template<>
inline const char * name<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>()
{
  return "thymio2_interfaces/srv/Thymio2ControllerSrv_Request";
}

template<>
struct has_fixed_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>()
{
  return "thymio2_interfaces::srv::Thymio2ControllerSrv_Response";
}

template<>
inline const char * name<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>()
{
  return "thymio2_interfaces/srv/Thymio2ControllerSrv_Response";
}

template<>
struct has_fixed_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio2_interfaces::srv::Thymio2ControllerSrv>()
{
  return "thymio2_interfaces::srv::Thymio2ControllerSrv";
}

template<>
inline const char * name<thymio2_interfaces::srv::Thymio2ControllerSrv>()
{
  return "thymio2_interfaces/srv/Thymio2ControllerSrv";
}

template<>
struct has_fixed_size<thymio2_interfaces::srv::Thymio2ControllerSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>::value &&
    has_fixed_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<thymio2_interfaces::srv::Thymio2ControllerSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>::value &&
    has_bounded_size<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>::value
  >
{
};

template<>
struct is_service<thymio2_interfaces::srv::Thymio2ControllerSrv>
  : std::true_type
{
};

template<>
struct is_service_request<thymio2_interfaces::srv::Thymio2ControllerSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<thymio2_interfaces::srv::Thymio2ControllerSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__TRAITS_HPP_
