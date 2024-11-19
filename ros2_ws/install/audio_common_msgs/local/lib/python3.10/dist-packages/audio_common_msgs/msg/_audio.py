# generated from rosidl_generator_py/resource/_idl.py.em
# with input from audio_common_msgs:msg/Audio.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Audio(type):
    """Metaclass of message 'Audio'."""

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
                'audio_common_msgs.msg.Audio')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__audio
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__audio
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__audio
            cls._TYPE_SUPPORT = module.type_support_msg__msg__audio
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__audio

            from audio_common_msgs.msg import AudioData
            if AudioData.__class__._TYPE_SUPPORT is None:
                AudioData.__class__.__import_type_support__()

            from audio_common_msgs.msg import AudioInfo
            if AudioInfo.__class__._TYPE_SUPPORT is None:
                AudioInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Audio(metaclass=Metaclass_Audio):
    """Message class 'Audio'."""

    __slots__ = [
        '_audio_data',
        '_info',
    ]

    _fields_and_field_types = {
        'audio_data': 'audio_common_msgs/AudioData',
        'info': 'audio_common_msgs/AudioInfo',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['audio_common_msgs', 'msg'], 'AudioData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['audio_common_msgs', 'msg'], 'AudioInfo'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from audio_common_msgs.msg import AudioData
        self.audio_data = kwargs.get('audio_data', AudioData())
        from audio_common_msgs.msg import AudioInfo
        self.info = kwargs.get('info', AudioInfo())

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
        if self.audio_data != other.audio_data:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def audio_data(self):
        """Message field 'audio_data'."""
        return self._audio_data

    @audio_data.setter
    def audio_data(self, value):
        if __debug__:
            from audio_common_msgs.msg import AudioData
            assert \
                isinstance(value, AudioData), \
                "The 'audio_data' field must be a sub message of type 'AudioData'"
        self._audio_data = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            from audio_common_msgs.msg import AudioInfo
            assert \
                isinstance(value, AudioInfo), \
                "The 'info' field must be a sub message of type 'AudioInfo'"
        self._info = value
