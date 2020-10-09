// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
// generated code does not contain a copyright notice

#ifndef THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__BUILDER_HPP_
#define THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__BUILDER_HPP_

#include "thymio2_interfaces/srv/detail/thymio2_controller_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace thymio2_interfaces
{

namespace srv
{

namespace builder
{

class Init_Thymio2ControllerSrv_Request_usb_port
{
public:
  explicit Init_Thymio2ControllerSrv_Request_usb_port(::thymio2_interfaces::srv::Thymio2ControllerSrv_Request & msg)
  : msg_(msg)
  {}
  ::thymio2_interfaces::srv::Thymio2ControllerSrv_Request usb_port(::thymio2_interfaces::srv::Thymio2ControllerSrv_Request::_usb_port_type arg)
  {
    msg_.usb_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio2_interfaces::srv::Thymio2ControllerSrv_Request msg_;
};

class Init_Thymio2ControllerSrv_Request_command
{
public:
  Init_Thymio2ControllerSrv_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Thymio2ControllerSrv_Request_usb_port command(::thymio2_interfaces::srv::Thymio2ControllerSrv_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Thymio2ControllerSrv_Request_usb_port(msg_);
  }

private:
  ::thymio2_interfaces::srv::Thymio2ControllerSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio2_interfaces::srv::Thymio2ControllerSrv_Request>()
{
  return thymio2_interfaces::srv::builder::Init_Thymio2ControllerSrv_Request_command();
}

}  // namespace thymio2_interfaces


namespace thymio2_interfaces
{

namespace srv
{

namespace builder
{

class Init_Thymio2ControllerSrv_Response_log_message
{
public:
  explicit Init_Thymio2ControllerSrv_Response_log_message(::thymio2_interfaces::srv::Thymio2ControllerSrv_Response & msg)
  : msg_(msg)
  {}
  ::thymio2_interfaces::srv::Thymio2ControllerSrv_Response log_message(::thymio2_interfaces::srv::Thymio2ControllerSrv_Response::_log_message_type arg)
  {
    msg_.log_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::thymio2_interfaces::srv::Thymio2ControllerSrv_Response msg_;
};

class Init_Thymio2ControllerSrv_Response_success
{
public:
  Init_Thymio2ControllerSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Thymio2ControllerSrv_Response_log_message success(::thymio2_interfaces::srv::Thymio2ControllerSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Thymio2ControllerSrv_Response_log_message(msg_);
  }

private:
  ::thymio2_interfaces::srv::Thymio2ControllerSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::thymio2_interfaces::srv::Thymio2ControllerSrv_Response>()
{
  return thymio2_interfaces::srv::builder::Init_Thymio2ControllerSrv_Response_success();
}

}  // namespace thymio2_interfaces

#endif  // THYMIO2_INTERFACES__SRV__DETAIL__THYMIO2_CONTROLLER_SRV__BUILDER_HPP_
