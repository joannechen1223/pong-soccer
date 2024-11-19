from setuptools import find_packages, setup

package_name = 'pong_soccer_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='jc3553@cornell.edu',
    description='Pong Soccer Node',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pong_soccer = pong_soccer_pkg.pong_soccer_node:main'
        ],
    },
)
