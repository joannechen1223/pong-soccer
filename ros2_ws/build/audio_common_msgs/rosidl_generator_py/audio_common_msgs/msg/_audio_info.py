# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audio_common_msgs:msg/AudioInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AudioInfo(type):
    """Metaclass of message 'AudioInfo'."""

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
                'audio_common_msgs.msg.AudioInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AudioInfo(metaclass=Metaclass_AudioInfo):
    """Message class 'AudioInfo'."""

    __slots__ = [
        '_format',
        '_channels',
        '_rate',
        '_chunk',
    ]

    _fields_and_field_types = {
        'format': 'int32',
        'channels': 'int32',
        'rate': 'int32',
        'chunk': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.format = kwargs.get('format', int())
        self.channels = kwargs.get('channels', int())
        self.rate = kwargs.get('rate', int())
        self.chunk = kwargs.get('chunk', int())

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
        if self.format != other.format:
            return False
        if self.channels != other.channels:
            return False
        if self.rate != other.rate:
            return False
        if self.chunk != other.chunk:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def format(self):  # noqa: A003
        """Message field 'format'."""
        return self._format

    @format.setter  # noqa: A003
    def format(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'format' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'format' field must be an integer in [-2147483648, 2147483647]"
        self._format = value

    @builtins.property
    def channels(self):
        """Message field 'channels'."""
        return self._channels

    @channels.setter
    def channels(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'channels' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'channels' field must be an integer in [-2147483648, 2147483647]"
        self._channels = value

    @builtins.property
    def rate(self):
        """Message field 'rate'."""
        return self._rate

    @rate.setter
    def rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rate' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rate' field must be an integer in [-2147483648, 2147483647]"
        self._rate = value

    @builtins.property
    def chunk(self):
        """Message field 'chunk'."""
        return self._chunk

    @chunk.setter
    def chunk(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chunk' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'chunk' field must be an integer in [-2147483648, 2147483647]"
        self._chunk = value
