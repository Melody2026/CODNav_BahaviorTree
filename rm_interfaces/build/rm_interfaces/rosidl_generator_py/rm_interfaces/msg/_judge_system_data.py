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

            from rm_interfaces.msg import OperatorCommand
            if OperatorCommand.__class__._TYPE_SUPPORT is None:
                OperatorCommand.__class__.__import_type_support__()

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
        '_game_status',
        '_remaining_time',
        '_blood',
        '_outpost_hp',
        '_is_lowpower',
        '_hp',
        '_shut_num',
        '_qs_hp',
        '_current_hp',
        '_center_gain_point',
        '_friendly_supply_non_zone_exchange',
        '_stage_remain_time',
        '_game_type',
        '_game_progress',
        '_dm_qs_hp',
        '_zone_status',
        '_position_x',
        '_position_y',
        '_operator_command',
        '_heroposition',
        '_standard_3position',
        '_standard_4position',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'game_status': 'uint8',
        'remaining_time': 'int16',
        'blood': 'int16',
        'outpost_hp': 'int16',
        'is_lowpower': 'uint8',
        'hp': 'float',
        'shut_num': 'int16',
        'qs_hp': 'int16',
        'current_hp': 'uint8',
        'center_gain_point': 'uint8',
        'friendly_supply_non_zone_exchange': 'uint8',
        'stage_remain_time': 'uint8',
        'game_type': 'uint8',
        'game_progress': 'uint8',
        'dm_qs_hp': 'int16',
        'zone_status': 'int32',
        'position_x': 'float',
        'position_y': 'float',
        'operator_command': 'rm_interfaces/OperatorCommand',
        'heroposition': 'rm_interfaces/Point2d',
        'standard_3position': 'rm_interfaces/Point2d',
        'standard_4position': 'rm_interfaces/Point2d',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_interfaces', 'msg'], 'OperatorCommand'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rm_interfaces', 'msg'], 'Point2d'),  # noqa: E501
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
        self.game_status = kwargs.get('game_status', int())
        self.remaining_time = kwargs.get('remaining_time', int())
        self.blood = kwargs.get('blood', int())
        self.outpost_hp = kwargs.get('outpost_hp', int())
        self.is_lowpower = kwargs.get('is_lowpower', int())
        self.hp = kwargs.get('hp', float())
        self.shut_num = kwargs.get('shut_num', int())
        self.qs_hp = kwargs.get('qs_hp', int())
        self.current_hp = kwargs.get('current_hp', int())
        self.center_gain_point = kwargs.get('center_gain_point', int())
        self.friendly_supply_non_zone_exchange = kwargs.get('friendly_supply_non_zone_exchange', int())
        self.stage_remain_time = kwargs.get('stage_remain_time', int())
        self.game_type = kwargs.get('game_type', int())
        self.game_progress = kwargs.get('game_progress', int())
        self.dm_qs_hp = kwargs.get('dm_qs_hp', int())
        self.zone_status = kwargs.get('zone_status', int())
        self.position_x = kwargs.get('position_x', float())
        self.position_y = kwargs.get('position_y', float())
        from rm_interfaces.msg import OperatorCommand
        self.operator_command = kwargs.get('operator_command', OperatorCommand())
        from rm_interfaces.msg import Point2d
        self.heroposition = kwargs.get('heroposition', Point2d())
        from rm_interfaces.msg import Point2d
        self.standard_3position = kwargs.get('standard_3position', Point2d())
        from rm_interfaces.msg import Point2d
        self.standard_4position = kwargs.get('standard_4position', Point2d())

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
        if self.game_status != other.game_status:
            return False
        if self.remaining_time != other.remaining_time:
            return False
        if self.blood != other.blood:
            return False
        if self.outpost_hp != other.outpost_hp:
            return False
        if self.is_lowpower != other.is_lowpower:
            return False
        if self.hp != other.hp:
            return False
        if self.shut_num != other.shut_num:
            return False
        if self.qs_hp != other.qs_hp:
            return False
        if self.current_hp != other.current_hp:
            return False
        if self.center_gain_point != other.center_gain_point:
            return False
        if self.friendly_supply_non_zone_exchange != other.friendly_supply_non_zone_exchange:
            return False
        if self.stage_remain_time != other.stage_remain_time:
            return False
        if self.game_type != other.game_type:
            return False
        if self.game_progress != other.game_progress:
            return False
        if self.dm_qs_hp != other.dm_qs_hp:
            return False
        if self.zone_status != other.zone_status:
            return False
        if self.position_x != other.position_x:
            return False
        if self.position_y != other.position_y:
            return False
        if self.operator_command != other.operator_command:
            return False
        if self.heroposition != other.heroposition:
            return False
        if self.standard_3position != other.standard_3position:
            return False
        if self.standard_4position != other.standard_4position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def game_status(self):
        """Message field 'game_status'."""
        return self._game_status

    @game_status.setter
    def game_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'game_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_status' field must be an unsigned integer in [0, 255]"
        self._game_status = value

    @builtins.property
    def remaining_time(self):
        """Message field 'remaining_time'."""
        return self._remaining_time

    @remaining_time.setter
    def remaining_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'remaining_time' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'remaining_time' field must be an integer in [-32768, 32767]"
        self._remaining_time = value

    @builtins.property
    def blood(self):
        """Message field 'blood'."""
        return self._blood

    @blood.setter
    def blood(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'blood' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'blood' field must be an integer in [-32768, 32767]"
        self._blood = value

    @builtins.property
    def outpost_hp(self):
        """Message field 'outpost_hp'."""
        return self._outpost_hp

    @outpost_hp.setter
    def outpost_hp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'outpost_hp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'outpost_hp' field must be an integer in [-32768, 32767]"
        self._outpost_hp = value

    @builtins.property
    def is_lowpower(self):
        """Message field 'is_lowpower'."""
        return self._is_lowpower

    @is_lowpower.setter
    def is_lowpower(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_lowpower' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_lowpower' field must be an unsigned integer in [0, 255]"
        self._is_lowpower = value

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
    def shut_num(self):
        """Message field 'shut_num'."""
        return self._shut_num

    @shut_num.setter
    def shut_num(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'shut_num' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'shut_num' field must be an integer in [-32768, 32767]"
        self._shut_num = value

    @builtins.property
    def qs_hp(self):
        """Message field 'qs_hp'."""
        return self._qs_hp

    @qs_hp.setter
    def qs_hp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'qs_hp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'qs_hp' field must be an integer in [-32768, 32767]"
        self._qs_hp = value

    @builtins.property
    def current_hp(self):
        """Message field 'current_hp'."""
        return self._current_hp

    @current_hp.setter
    def current_hp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_hp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_hp' field must be an unsigned integer in [0, 255]"
        self._current_hp = value

    @builtins.property
    def center_gain_point(self):
        """Message field 'center_gain_point'."""
        return self._center_gain_point

    @center_gain_point.setter
    def center_gain_point(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'center_gain_point' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'center_gain_point' field must be an unsigned integer in [0, 255]"
        self._center_gain_point = value

    @builtins.property
    def friendly_supply_non_zone_exchange(self):
        """Message field 'friendly_supply_non_zone_exchange'."""
        return self._friendly_supply_non_zone_exchange

    @friendly_supply_non_zone_exchange.setter
    def friendly_supply_non_zone_exchange(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'friendly_supply_non_zone_exchange' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'friendly_supply_non_zone_exchange' field must be an unsigned integer in [0, 255]"
        self._friendly_supply_non_zone_exchange = value

    @builtins.property
    def stage_remain_time(self):
        """Message field 'stage_remain_time'."""
        return self._stage_remain_time

    @stage_remain_time.setter
    def stage_remain_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'stage_remain_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stage_remain_time' field must be an unsigned integer in [0, 255]"
        self._stage_remain_time = value

    @builtins.property
    def game_type(self):
        """Message field 'game_type'."""
        return self._game_type

    @game_type.setter
    def game_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'game_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_type' field must be an unsigned integer in [0, 255]"
        self._game_type = value

    @builtins.property
    def game_progress(self):
        """Message field 'game_progress'."""
        return self._game_progress

    @game_progress.setter
    def game_progress(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'game_progress' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_progress' field must be an unsigned integer in [0, 255]"
        self._game_progress = value

    @builtins.property
    def dm_qs_hp(self):
        """Message field 'dm_qs_hp'."""
        return self._dm_qs_hp

    @dm_qs_hp.setter
    def dm_qs_hp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dm_qs_hp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'dm_qs_hp' field must be an integer in [-32768, 32767]"
        self._dm_qs_hp = value

    @builtins.property
    def zone_status(self):
        """Message field 'zone_status'."""
        return self._zone_status

    @zone_status.setter
    def zone_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'zone_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'zone_status' field must be an integer in [-2147483648, 2147483647]"
        self._zone_status = value

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
    def operator_command(self):
        """Message field 'operator_command'."""
        return self._operator_command

    @operator_command.setter
    def operator_command(self, value):
        if self._check_fields:
            from rm_interfaces.msg import OperatorCommand
            assert \
                isinstance(value, OperatorCommand), \
                "The 'operator_command' field must be a sub message of type 'OperatorCommand'"
        self._operator_command = value

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

    @builtins.property
    def standard_4position(self):
        """Message field 'standard_4position'."""
        return self._standard_4position

    @standard_4position.setter
    def standard_4position(self, value):
        if self._check_fields:
            from rm_interfaces.msg import Point2d
            assert \
                isinstance(value, Point2d), \
                "The 'standard_4position' field must be a sub message of type 'Point2d'"
        self._standard_4position = value
