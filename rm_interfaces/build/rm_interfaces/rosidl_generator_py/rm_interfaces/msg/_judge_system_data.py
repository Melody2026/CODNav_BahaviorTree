# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_interfaces:msg/JudgeSystemData.idl
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


class Metaclass_JudgeSystemData(type):
    """Metaclass of message 'JudgeSystemData'."""

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
                'rm_interfaces.msg.JudgeSystemData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__judge_system_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__judge_system_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__judge_system_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__judge_system_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__judge_system_data

            from rm_interfaces.msg import Point2d
            if Point2d.__class__._TYPE_SUPPORT is None:
                Point2d.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JudgeSystemData(metaclass=Metaclass_JudgeSystemData):
    """Message class 'JudgeSystemData'."""

    __slots__ = [
        '_hp',
        '_zone_status',
        '_is_attacted',
        '_position_x',
        '_position_y',
        '_heroposition',
        '_standard_3position',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'hp': 'float',
        'zone_status': 'boolean',
        'is_attacted': 'boolean',
        'position_x': 'float',
        'position_y': 'float',
        'heroposition': 'rm_interfaces/Point2d',
        'standard_3position': 'rm_interfaces/Point2d',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_interfaces', 'msg'], 'Point2d'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_interfaces', 'msg'], 'Point2d'),  # noqa: E501
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
        self.hp = kwargs.get('hp', float())
        self.zone_status = kwargs.get('zone_status', bool())
        self.is_attacted = kwargs.get('is_attacted', bool())
        self.position_x = kwargs.get('position_x', float())
        self.position_y = kwargs.get('position_y', float())
        from rm_interfaces.msg import Point2d
        self.heroposition = kwargs.get('heroposition', Point2d())
        from rm_interfaces.msg import Point2d
        self.standard_3position = kwargs.get('standard_3position', Point2d())

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
        if self.hp != other.hp:
            return False
        if self.zone_status != other.zone_status:
            return False
        if self.is_attacted != other.is_attacted:
            return False
        if self.position_x != other.position_x:
            return False
        if self.position_y != other.position_y:
            return False
        if self.heroposition != other.heroposition:
            return False
        if self.standard_3position != other.standard_3position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hp(self):
        """Message field 'hp'."""
        return self._hp

    @hp.setter
    def hp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hp = value

    @builtins.property
    def zone_status(self):
        """Message field 'zone_status'."""
        return self._zone_status

    @zone_status.setter
    def zone_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'zone_status' field must be of type 'bool'"
        self._zone_status = value

    @builtins.property
    def is_attacted(self):
        """Message field 'is_attacted'."""
        return self._is_attacted

    @is_attacted.setter
    def is_attacted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_attacted' field must be of type 'bool'"
        self._is_attacted = value

    @builtins.property
    def position_x(self):
        """Message field 'position_x'."""
        return self._position_x

    @position_x.setter
    def position_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'position_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_x = value

    @builtins.property
    def position_y(self):
        """Message field 'position_y'."""
        return self._position_y

    @position_y.setter
    def position_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'position_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_y = value

    @builtins.property
    def heroposition(self):
        """Message field 'heroposition'."""
        return self._heroposition

    @heroposition.setter
    def heroposition(self, value):
        if self._check_fields:
            from rm_interfaces.msg import Point2d
            assert \
                isinstance(value, Point2d), \
                "The 'heroposition' field must be a sub message of type 'Point2d'"
        self._heroposition = value

    @builtins.property
    def standard_3position(self):
        """Message field 'standard_3position'."""
        return self._standard_3position

    @standard_3position.setter
    def standard_3position(self, value):
        if self._check_fields:
            from rm_interfaces.msg import Point2d
            assert \
                isinstance(value, Point2d), \
                "The 'standard_3position' field must be a sub message of type 'Point2d'"
        self._standard_3position = value
