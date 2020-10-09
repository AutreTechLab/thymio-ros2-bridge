# generated from rosidl_generator_py/resource/_idl.py.em
# with input from thymio2_interfaces:srv/Thymio2ControllerSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Thymio2ControllerSrv_Request(type):
    """Metaclass of message 'Thymio2ControllerSrv_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('thymio2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'thymio2_interfaces.srv.Thymio2ControllerSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__thymio2_controller_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__thymio2_controller_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__thymio2_controller_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__thymio2_controller_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__thymio2_controller_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Thymio2ControllerSrv_Request(metaclass=Metaclass_Thymio2ControllerSrv_Request):
    """Message class 'Thymio2ControllerSrv_Request'."""

    __slots__ = [
        '_command',
        '_usb_port',
    ]

    _fields_and_field_types = {
        'command': 'string',
        'usb_port': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())
        self.usb_port = kwargs.get('usb_port', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.command != other.command:
            return False
        if self.usb_port != other.usb_port:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

    @property
    def usb_port(self):
        """Message field 'usb_port'."""
        return self._usb_port

    @usb_port.setter
    def usb_port(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'usb_port' field must be of type 'str'"
        self._usb_port = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Thymio2ControllerSrv_Response(type):
    """Metaclass of message 'Thymio2ControllerSrv_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('thymio2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'thymio2_interfaces.srv.Thymio2ControllerSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__thymio2_controller_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__thymio2_controller_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__thymio2_controller_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__thymio2_controller_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__thymio2_controller_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Thymio2ControllerSrv_Response(metaclass=Metaclass_Thymio2ControllerSrv_Response):
    """Message class 'Thymio2ControllerSrv_Response'."""

    __slots__ = [
        '_success',
        '_log_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'log_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.log_message = kwargs.get('log_message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.log_message != other.log_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def log_message(self):
        """Message field 'log_message'."""
        return self._log_message

    @log_message.setter
    def log_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'log_message' field must be of type 'str'"
        self._log_message = value


class Metaclass_Thymio2ControllerSrv(type):
    """Metaclass of service 'Thymio2ControllerSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('thymio2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'thymio2_interfaces.srv.Thymio2ControllerSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__thymio2_controller_srv

            from thymio2_interfaces.srv import _thymio2_controller_srv
            if _thymio2_controller_srv.Metaclass_Thymio2ControllerSrv_Request._TYPE_SUPPORT is None:
                _thymio2_controller_srv.Metaclass_Thymio2ControllerSrv_Request.__import_type_support__()
            if _thymio2_controller_srv.Metaclass_Thymio2ControllerSrv_Response._TYPE_SUPPORT is None:
                _thymio2_controller_srv.Metaclass_Thymio2ControllerSrv_Response.__import_type_support__()


class Thymio2ControllerSrv(metaclass=Metaclass_Thymio2ControllerSrv):
    from thymio2_interfaces.srv._thymio2_controller_srv import Thymio2ControllerSrv_Request as Request
    from thymio2_interfaces.srv._thymio2_controller_srv import Thymio2ControllerSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
