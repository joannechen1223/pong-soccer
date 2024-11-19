from setuptools import find_packages
from setuptools import setup

setup(
    name='tts_ros',
    version='2.3.1',
    packages=find_packages(
        include=('tts_ros', 'tts_ros.*')),
)
