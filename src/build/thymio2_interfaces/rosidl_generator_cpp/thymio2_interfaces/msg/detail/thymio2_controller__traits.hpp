// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from thymio2_interfaces:msg/Thymio2Controller.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__TRAITS_HPP_
#define THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__TRAITS_HPP_

#include "thymio2_interfaces/msg/detail/thymio2_controller__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<thymio2_interfaces::msg::Thymio2Controller>()
{
  return "thymio2_interfaces::msg::Thymio2Controller";
}

template<>
inline const char * name<thymio2_interfaces::msg::Thymio2Controller>()
{
  return "thymio2_interfaces/msg/Thymio2Controller";
}

template<>
struct has_fixed_size<thymio2_interfaces::msg::Thymio2Controller>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<thymio2_interfaces::msg::Thymio2Controller>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<thymio2_interfaces::msg::Thymio2Controller>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THYMIO2_INTERFACES__MSG__DETAIL__THYMIO2_CONTROLLER__TRAITS_HPP_
