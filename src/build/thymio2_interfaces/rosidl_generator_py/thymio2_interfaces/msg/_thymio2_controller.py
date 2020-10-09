# generated from rosidl_generator_py/resource/_idl.py.em
# with input from thymio2_interfaces:msg/Thymio2Controller.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'acc'
# Member 'prox_ground_ambiant'
# Member 'prox_ground_delta'
# Member 'prox_ground_reflected'
# Member 'prox_horizontal'
# Member 'timer_period'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Thymio2Controller(type):
    """Metaclass of message 'Thymio2Controller'."""

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
                'thymio2_interfaces.msg.Thymio2Controller')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__thymio2_controller
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__thymio2_controller
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__thymio2_controller
            cls._TYPE_SUPPORT = module.type_support_msg__msg__thymio2_controller
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__thymio2_controller

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Thymio2Controller(metaclass=Metaclass_Thymio2Controller):
    """Message class 'Thymio2Controller'."""

    __slots__ = [
        '_debug_message',
        '_acc',
        '_button_backward',
        '_button_center',
        '_button_forward',
        '_button_left',
        '_button_right',
        '_event_args',
        '_event_source',
        '_leds_bottom_left',
        '_leds_bottom_right',
        '_leds_circle',
        '_leds_top',
        '_mic_intensity',
        '_mic_threshold',
        '_motor_left_pwm',
        '_motor_left_speed',
        '_motor_left_target',
        '_motor_right_pwm',
        '_motor_right_speed',
        '_motor_right_target',
        '_prox_comm_rx',
        '_prox_comm_tx',
        '_prox_ground_ambiant',
        '_prox_ground_delta',
        '_prox_ground_reflected',
        '_prox_horizontal',
        '_rc5_address',
        '_rc5_command',
        '_sd_present',
        '_temperature',
        '_timer_period',
    ]

    _fields_and_field_types = {
        'debug_message': 'string',
        'acc': 'sequence<int64>',
        'button_backward': 'string',
        'button_center': 'string',
        'button_forward': 'string',
        'button_left': 'string',
        'button_right': 'string',
        'event_args': 'sequence<string>',
        'event_source': 'string',
        'leds_bottom_left': 'sequence<string>',
        'leds_bottom_right': 'sequence<string>',
        'leds_circle': 'sequence<string>',
        'leds_top': 'sequence<string>',
        'mic_intensity': 'string',
        'mic_threshold': 'string',
        'motor_left_pwm': 'string',
        'motor_left_speed': 'string',
        'motor_left_target': 'string',
        'motor_right_pwm': 'string',
        'motor_right_speed': 'string',
        'motor_right_target': 'string',
        'prox_comm_rx': 'string',
        'prox_comm_tx': 'string',
        'prox_ground_ambiant': 'sequence<int64>',
        'prox_ground_delta': 'sequence<int64>',
        'prox_ground_reflected': 'sequence<int64>',
        'prox_horizontal': 'sequence<int64>',
        'rc5_address': 'string',
        'rc5_command': 'string',
        'sd_present': 'boolean',
        'temperature': 'int64',
        'timer_period': 'sequence<int64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.debug_message = kwargs.get('debug_message', str())
        self.acc = array.array('q', kwargs.get('acc', []))
        self.button_backward = kwargs.get('button_backward', str())
        self.button_center = kwargs.get('button_center', str())
        self.button_forward = kwargs.get('button_forward', str())
        self.button_left = kwargs.get('button_left', str())
        self.button_right = kwargs.get('button_right', str())
        self.event_args = kwargs.get('event_args', [])
        self.event_source = kwargs.get('event_source', str())
        self.leds_bottom_left = kwargs.get('leds_bottom_left', [])
        self.leds_bottom_right = kwargs.get('leds_bottom_right', [])
        self.leds_circle = kwargs.get('leds_circle', [])
        self.leds_top = kwargs.get('leds_top', [])
        self.mic_intensity = kwargs.get('mic_intensity', str())
        self.mic_threshold = kwargs.get('mic_threshold', str())
        self.motor_left_pwm = kwargs.get('motor_left_pwm', str())
        self.motor_left_speed = kwargs.get('motor_left_speed', str())
        self.motor_left_target = kwargs.get('motor_left_target', str())
        self.motor_right_pwm = kwargs.get('motor_right_pwm', str())
        self.motor_right_speed = kwargs.get('motor_right_speed', str())
        self.motor_right_target = kwargs.get('motor_right_target', str())
        self.prox_comm_rx = kwargs.get('prox_comm_rx', str())
        self.prox_comm_tx = kwargs.get('prox_comm_tx', str())
        self.prox_ground_ambiant = array.array('q', kwargs.get('prox_ground_ambiant', []))
        self.prox_ground_delta = array.array('q', kwargs.get('prox_ground_delta', []))
        self.prox_ground_reflected = array.array('q', kwargs.get('prox_ground_reflected', []))
        self.prox_horizontal = array.array('q', kwargs.get('prox_horizontal', []))
        self.rc5_address = kwargs.get('rc5_address', str())
        self.rc5_command = kwargs.get('rc5_command', str())
        self.sd_present = kwargs.get('sd_present', bool())
        self.temperature = kwargs.get('temperature', int())
        self.timer_period = array.array('q', kwargs.get('timer_period', []))

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
        if self.debug_message != other.debug_message:
            return False
        if self.acc != other.acc:
            return False
        if self.button_backward != other.button_backward:
            return False
        if self.button_center != other.button_center:
            return False
        if self.button_forward != other.button_forward:
            return False
        if self.button_left != other.button_left:
            return False
        if self.button_right != other.button_right:
            return False
        if self.event_args != other.event_args:
            return False
        if self.event_source != other.event_source:
            return False
        if self.leds_bottom_left != other.leds_bottom_left:
            return False
        if self.leds_bottom_right != other.leds_bottom_right:
            return False
        if self.leds_circle != other.leds_circle:
            return False
        if self.leds_top != other.leds_top:
            return False
        if self.mic_intensity != other.mic_intensity:
            return False
        if self.mic_threshold != other.mic_threshold:
            return False
        if self.motor_left_pwm != other.motor_left_pwm:
            return False
        if self.motor_left_speed != other.motor_left_speed:
            return False
        if self.motor_left_target != other.motor_left_target:
            return False
        if self.motor_right_pwm != other.motor_right_pwm:
            return False
        if self.motor_right_speed != other.motor_right_speed:
            return False
        if self.motor_right_target != other.motor_right_target:
            return False
        if self.prox_comm_rx != other.prox_comm_rx:
            return False
        if self.prox_comm_tx != other.prox_comm_tx:
            return False
        if self.prox_ground_ambiant != other.prox_ground_ambiant:
            return False
        if self.prox_ground_delta != other.prox_ground_delta:
            return False
        if self.prox_ground_reflected != other.prox_ground_reflected:
            return False
        if self.prox_horizontal != other.prox_horizontal:
            return False
        if self.rc5_address != other.rc5_address:
            return False
        if self.rc5_command != other.rc5_command:
            return False
        if self.sd_present != other.sd_present:
            return False
        if self.temperature != other.temperature:
            return False
        if self.timer_period != other.timer_period:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def debug_message(self):
        """Message field 'debug_message'."""
        return self._debug_message

    @debug_message.setter
    def debug_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'debug_message' field must be of type 'str'"
        self._debug_message = value

    @property
    def acc(self):
        """Message field 'acc'."""
        return self._acc

    @acc.setter
    def acc(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'acc' array.array() must have the type code of 'q'"
            self._acc = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'acc' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._acc = array.array('q', value)

    @property
    def button_backward(self):
        """Message field 'button_backward'."""
        return self._button_backward

    @button_backward.setter
    def button_backward(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'button_backward' field must be of type 'str'"
        self._button_backward = value

    @property
    def button_center(self):
        """Message field 'button_center'."""
        return self._button_center

    @button_center.setter
    def button_center(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'button_center' field must be of type 'str'"
        self._button_center = value

    @property
    def button_forward(self):
        """Message field 'button_forward'."""
        return self._button_forward

    @button_forward.setter
    def button_forward(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'button_forward' field must be of type 'str'"
        self._button_forward = value

    @property
    def button_left(self):
        """Message field 'button_left'."""
        return self._button_left

    @button_left.setter
    def button_left(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'button_left' field must be of type 'str'"
        self._button_left = value

    @property
    def button_right(self):
        """Message field 'button_right'."""
        return self._button_right

    @button_right.setter
    def button_right(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'button_right' field must be of type 'str'"
        self._button_right = value

    @property
    def event_args(self):
        """Message field 'event_args'."""
        return self._event_args

    @event_args.setter
    def event_args(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'event_args' field must be a set or sequence and each value of type 'str'"
        self._event_args = value

    @property
    def event_source(self):
        """Message field 'event_source'."""
        return self._event_source

    @event_source.setter
    def event_source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'event_source' field must be of type 'str'"
        self._event_source = value

    @property
    def leds_bottom_left(self):
        """Message field 'leds_bottom_left'."""
        return self._leds_bottom_left

    @leds_bottom_left.setter
    def leds_bottom_left(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'leds_bottom_left' field must be a set or sequence and each value of type 'str'"
        self._leds_bottom_left = value

    @property
    def leds_bottom_right(self):
        """Message field 'leds_bottom_right'."""
        return self._leds_bottom_right

    @leds_bottom_right.setter
    def leds_bottom_right(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'leds_bottom_right' field must be a set or sequence and each value of type 'str'"
        self._leds_bottom_right = value

    @property
    def leds_circle(self):
        """Message field 'leds_circle'."""
        return self._leds_circle

    @leds_circle.setter
    def leds_circle(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'leds_circle' field must be a set or sequence and each value of type 'str'"
        self._leds_circle = value

    @property
    def leds_top(self):
        """Message field 'leds_top'."""
        return self._leds_top

    @leds_top.setter
    def leds_top(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'leds_top' field must be a set or sequence and each value of type 'str'"
        self._leds_top = value

    @property
    def mic_intensity(self):
        """Message field 'mic_intensity'."""
        return self._mic_intensity

    @mic_intensity.setter
    def mic_intensity(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mic_intensity' field must be of type 'str'"
        self._mic_intensity = value

    @property
    def mic_threshold(self):
        """Message field 'mic_threshold'."""
        return self._mic_threshold

    @mic_threshold.setter
    def mic_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mic_threshold' field must be of type 'str'"
        self._mic_threshold = value

    @property
    def motor_left_pwm(self):
        """Message field 'motor_left_pwm'."""
        return self._motor_left_pwm

    @motor_left_pwm.setter
    def motor_left_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_left_pwm' field must be of type 'str'"
        self._motor_left_pwm = value

    @property
    def motor_left_speed(self):
        """Message field 'motor_left_speed'."""
        return self._motor_left_speed

    @motor_left_speed.setter
    def motor_left_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_left_speed' field must be of type 'str'"
        self._motor_left_speed = value

    @property
    def motor_left_target(self):
        """Message field 'motor_left_target'."""
        return self._motor_left_target

    @motor_left_target.setter
    def motor_left_target(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_left_target' field must be of type 'str'"
        self._motor_left_target = value

    @property
    def motor_right_pwm(self):
        """Message field 'motor_right_pwm'."""
        return self._motor_right_pwm

    @motor_right_pwm.setter
    def motor_right_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_right_pwm' field must be of type 'str'"
        self._motor_right_pwm = value

    @property
    def motor_right_speed(self):
        """Message field 'motor_right_speed'."""
        return self._motor_right_speed

    @motor_right_speed.setter
    def motor_right_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_right_speed' field must be of type 'str'"
        self._motor_right_speed = value

    @property
    def motor_right_target(self):
        """Message field 'motor_right_target'."""
        return self._motor_right_target

    @motor_right_target.setter
    def motor_right_target(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_right_target' field must be of type 'str'"
        self._motor_right_target = value

    @property
    def prox_comm_rx(self):
        """Message field 'prox_comm_rx'."""
        return self._prox_comm_rx

    @prox_comm_rx.setter
    def prox_comm_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'prox_comm_rx' field must be of type 'str'"
        self._prox_comm_rx = value

    @property
    def prox_comm_tx(self):
        """Message field 'prox_comm_tx'."""
        return self._prox_comm_tx

    @prox_comm_tx.setter
    def prox_comm_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'prox_comm_tx' field must be of type 'str'"
        self._prox_comm_tx = value

    @property
    def prox_ground_ambiant(self):
        """Message field 'prox_ground_ambiant'."""
        return self._prox_ground_ambiant

    @prox_ground_ambiant.setter
    def prox_ground_ambiant(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'prox_ground_ambiant' array.array() must have the type code of 'q'"
            self._prox_ground_ambiant = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'prox_ground_ambiant' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._prox_ground_ambiant = array.array('q', value)

    @property
    def prox_ground_delta(self):
        """Message field 'prox_ground_delta'."""
        return self._prox_ground_delta

    @prox_ground_delta.setter
    def prox_ground_delta(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'prox_ground_delta' array.array() must have the type code of 'q'"
            self._prox_ground_delta = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'prox_ground_delta' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._prox_ground_delta = array.array('q', value)

    @property
    def prox_ground_reflected(self):
        """Message field 'prox_ground_reflected'."""
        return self._prox_ground_reflected

    @prox_ground_reflected.setter
    def prox_ground_reflected(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'prox_ground_reflected' array.array() must have the type code of 'q'"
            self._prox_ground_reflected = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'prox_ground_reflected' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._prox_ground_reflected = array.array('q', value)

    @property
    def prox_horizontal(self):
        """Message field 'prox_horizontal'."""
        return self._prox_horizontal

    @prox_horizontal.setter
    def prox_horizontal(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'prox_horizontal' array.array() must have the type code of 'q'"
            self._prox_horizontal = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'prox_horizontal' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._prox_horizontal = array.array('q', value)

    @property
    def rc5_address(self):
        """Message field 'rc5_address'."""
        return self._rc5_address

    @rc5_address.setter
    def rc5_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rc5_address' field must be of type 'str'"
        self._rc5_address = value

    @property
    def rc5_command(self):
        """Message field 'rc5_command'."""
        return self._rc5_command

    @rc5_command.setter
    def rc5_command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rc5_command' field must be of type 'str'"
        self._rc5_command = value

    @property
    def sd_present(self):
        """Message field 'sd_present'."""
        return self._sd_present

    @sd_present.setter
    def sd_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_present' field must be of type 'bool'"
        self._sd_present = value

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'temperature' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._temperature = value

    @property
    def timer_period(self):
        """Message field 'timer_period'."""
        return self._timer_period

    @timer_period.setter
    def timer_period(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'timer_period' array.array() must have the type code of 'q'"
            self._timer_period = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'timer_period' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._timer_period = array.array('q', value)
