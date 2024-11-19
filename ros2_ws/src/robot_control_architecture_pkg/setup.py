from setuptools import setup

package_name = 'bump_n_go_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/bump_n_go_launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='MMW',
    maintainer_email='zh438@cornell.edu',
    description='This package implements a bump and go robot control architecture.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'bump_n_go_node = bump_n_go_pkg.bump_n_go_node:main'
        ],
    },
)
