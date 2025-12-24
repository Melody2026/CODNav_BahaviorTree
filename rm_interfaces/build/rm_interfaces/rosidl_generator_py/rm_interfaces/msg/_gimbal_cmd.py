# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_interfaces:msg/GimbalCmd.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GimbalCmd(type):
    """Metaclass of message 'GimbalCmd'."""

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
            module = import_type_support('rm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_interfaces.msg.GimbalCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gimbal_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gimbal_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gimbal_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gimbal_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gimbal_cmd

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GimbalCmd(metaclass=Metaclass_GimbalCmd):
    """Message class 'GimbalCmd'."""

    __slots__ = [
        '_header',
        '_pitch',
        '_yaw',
        '_yaw_diff',
        '_pitch_diff',
        '_distance',
        '_fire_advice',
        '_aim_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pitch': 'double',
        'yaw': 'double',
        'yaw_diff': 'double',
        'pitch_diff': 'double',
        'distance': 'double',
        'fire_advice': 'boolean',
        'aim_id': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.yaw_diff = kwargs.get('yaw_diff', float())
        self.pitch_diff = kwargs.get('pitch_diff', float())
        self.distance = kwargs.get('distance', float())
        self.fire_advice = kwargs.get('fire_advice', bool())
        self.aim_id = kwargs.get('aim_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.yaw_diff != other.yaw_diff:
            return False
        if self.pitch_diff != other.pitch_diff:
            return False
        if self.distance != other.distance:
            return False
        if self.fire_advice != other.fire_advice:
            return False
        if self.aim_id != other.aim_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def yaw_diff(self):
        """Message field 'yaw_diff'."""
        return self._yaw_diff

    @yaw_diff.setter
    def yaw_diff(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw_diff' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_diff' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_diff = value

    @builtins.property
    def pitch_diff(self):
        """Message field 'pitch_diff'."""
        return self._pitch_diff

    @pitch_diff.setter
    def pitch_diff(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pitch_diff' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_diff' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_diff = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def fire_advice(self):
        """Message field 'fire_advice'."""
        return self._fire_advice

    @fire_advice.setter
    def fire_advice(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fire_advice' field must be of type 'bool'"
        self._fire_advice = value

    @builtins.property
    def aim_id(self):
        """Message field 'aim_id'."""
        return self._aim_id

    @aim_id.setter
    def aim_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'aim_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aim_id' field must be an unsigned integer in [0, 255]"
        self._aim_id = value
