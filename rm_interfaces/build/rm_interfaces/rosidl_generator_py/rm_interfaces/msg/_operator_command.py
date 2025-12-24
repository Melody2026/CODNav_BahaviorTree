# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_interfaces:msg/OperatorCommand.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OperatorCommand(type):
    """Metaclass of message 'OperatorCommand'."""

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
                'rm_interfaces.msg.OperatorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__operator_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__operator_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__operator_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__operator_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__operator_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OperatorCommand(metaclass=Metaclass_OperatorCommand):
    """Message class 'OperatorCommand'."""

    __slots__ = [
        '_is_retreating',
        '_is_drone_avoiding',
        '_is_outpost_attacking',
        '_is_spin',
        '_is_buyshut',
        '_is_attackqs',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'is_retreating': 'uint8',
        'is_drone_avoiding': 'uint8',
        'is_outpost_attacking': 'uint8',
        'is_spin': 'uint8',
        'is_buyshut': 'uint8',
        'is_attackqs': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.is_retreating = kwargs.get('is_retreating', int())
        self.is_drone_avoiding = kwargs.get('is_drone_avoiding', int())
        self.is_outpost_attacking = kwargs.get('is_outpost_attacking', int())
        self.is_spin = kwargs.get('is_spin', int())
        self.is_buyshut = kwargs.get('is_buyshut', int())
        self.is_attackqs = kwargs.get('is_attackqs', int())

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
        if self.is_retreating != other.is_retreating:
            return False
        if self.is_drone_avoiding != other.is_drone_avoiding:
            return False
        if self.is_outpost_attacking != other.is_outpost_attacking:
            return False
        if self.is_spin != other.is_spin:
            return False
        if self.is_buyshut != other.is_buyshut:
            return False
        if self.is_attackqs != other.is_attackqs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_retreating(self):
        """Message field 'is_retreating'."""
        return self._is_retreating

    @is_retreating.setter
    def is_retreating(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_retreating' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_retreating' field must be an unsigned integer in [0, 255]"
        self._is_retreating = value

    @builtins.property
    def is_drone_avoiding(self):
        """Message field 'is_drone_avoiding'."""
        return self._is_drone_avoiding

    @is_drone_avoiding.setter
    def is_drone_avoiding(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_drone_avoiding' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_drone_avoiding' field must be an unsigned integer in [0, 255]"
        self._is_drone_avoiding = value

    @builtins.property
    def is_outpost_attacking(self):
        """Message field 'is_outpost_attacking'."""
        return self._is_outpost_attacking

    @is_outpost_attacking.setter
    def is_outpost_attacking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_outpost_attacking' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_outpost_attacking' field must be an unsigned integer in [0, 255]"
        self._is_outpost_attacking = value

    @builtins.property
    def is_spin(self):
        """Message field 'is_spin'."""
        return self._is_spin

    @is_spin.setter
    def is_spin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_spin' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_spin' field must be an unsigned integer in [0, 255]"
        self._is_spin = value

    @builtins.property
    def is_buyshut(self):
        """Message field 'is_buyshut'."""
        return self._is_buyshut

    @is_buyshut.setter
    def is_buyshut(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_buyshut' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_buyshut' field must be an unsigned integer in [0, 255]"
        self._is_buyshut = value

    @builtins.property
    def is_attackqs(self):
        """Message field 'is_attackqs'."""
        return self._is_attackqs

    @is_attackqs.setter
    def is_attackqs(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_attackqs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_attackqs' field must be an unsigned integer in [0, 255]"
        self._is_attackqs = value
