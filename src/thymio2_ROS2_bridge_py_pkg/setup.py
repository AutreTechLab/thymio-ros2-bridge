from setuptools import setup

package_name = 'thymio2_ROS2_bridge_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='autretechlab',
    maintainer_email='autretechlab@tgmail.com',
    description='TODO: Package description',
    license='MIT License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "thymio2_controler_node = thymio2_ROS2_bridge_py_pkg.thymio2_controler_node:main",
            "thymio2_monitor_node = thymio2_ROS2_bridge_py_pkg.thymio2_monitor_node:main",
            "my_first_node = thymio2_ROS2_bridge_py_pkg.my_first_node:main"
        ],
    },
)
