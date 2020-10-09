from setuptools import setup

package_name = 'thymio2_ros2_tutorials_py_pkg'

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
    maintainer_email='autretechlab@gmail.com',
    description='TODO: Package description',
    license='MIT License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "thymio2_monitor_node = thymio2_ros2_tutorials_py_pkg.thymio2_monitor_node:main",
            "thymio2_followme_node = thymio2_ros2_tutorials_py_pkg.thymio2_followme_node:main"
        ],
    },
)