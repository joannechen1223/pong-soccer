# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audio_common_msgs:msg/AudioData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'float32_data'
# Member 'int32_data'
# Member 'int16_data'
# Member 'int8_data'
# Member 'uint8_data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioData(type):
    """Metaclass of message 'AudioData'."""

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
            module = import_type_support('audio_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'audio_common_msgs.msg.AudioData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioData(metaclass=Metaclass_AudioData):
    """Message class 'AudioData'."""

    __slots__ = [
        '_float32_data',
        '_int32_data',
        '_int16_data',
        '_int8_data',
        '_uint8_data',
    ]

    _fields_and_field_types = {
        'float32_data': 'sequence<float>',
        'int32_data': 'sequence<int32>',
        'int16_data': 'sequence<int16>',
        'int8_data': 'sequence<int8>',
        'uint8_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.float32_data = array.array('f', kwargs.get('float32_data', []))
        self.int32_data = array.array('i', kwargs.get('int32_data', []))
        self.int16_data = array.array('h', kwargs.get('int16_data', []))
        self.int8_data = array.array('b', kwargs.get('int8_data', []))
        self.uint8_data = array.array('B', kwargs.get('uint8_data', []))

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
        if self.float32_data != other.float32_data:
            return False
        if self.int32_data != other.int32_data:
            return False
        if self.int16_data != other.int16_data:
            return False
        if self.int8_data != other.int8_data:
            return False
        if self.uint8_data != other.uint8_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def float32_data(self):
        """Message field 'float32_data'."""
        return self._float32_data

    @float32_data.setter
    def float32_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'float32_data' array.array() must have the type code of 'f'"
            self._float32_data = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'float32_data' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._float32_data = array.array('f', value)

    @builtins.property
    def int32_data(self):
        """Message field 'int32_data'."""
        return self._int32_data

    @int32_data.setter
    def int32_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'int32_data' array.array() must have the type code of 'i'"
            self._int32_data = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'int32_data' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._int32_data = array.array('i', value)

    @builtins.property
    def int16_data(self):
        """Message field 'int16_data'."""
        return self._int16_data

    @int16_data.setter
    def int16_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'int16_data' array.array() must have the type code of 'h'"
            self._int16_data = value
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
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'int16_data' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._int16_data = array.array('h', value)

    @builtins.property
    def int8_data(self):
        """Message field 'int8_data'."""
        return self._int8_data

    @int8_data.setter
    def int8_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'int8_data' array.array() must have the type code of 'b'"
            self._int8_data = value
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
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'int8_data' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._int8_data = array.array('b', value)

    @builtins.property
    def uint8_data(self):
        """Message field 'uint8_data'."""
        return self._uint8_data

    @uint8_data.setter
    def uint8_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'uint8_data' array.array() must have the type code of 'B'"
            self._uint8_data = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'uint8_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._uint8_data = array.array('B', value)
