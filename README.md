# ATL ThymioII ROS2 Bridge

Support of multiple Thymio II robots 






Environment 
- ROS2 (ros2-foxy-desktop)
- Aseba Studio to have the utility awailable 


# Running Thymio II with Python on Ubuntu Virtual Machine

Prerequisits
    Install aseba following the steps here. The official documentation provides steps for Ubuntu.
    Install dbus: sudo apt-get install python-dbus
    Install gobject: sudo apt-get install python-gobject

Rest the setup:
    run asebamedulla: sudo asebamedulla “ser:name=Thymio-II”
    run python code on a different terminal: sudo python pithymio.py


sudo apt-get install qt5-default

http://ubuntuhandbook.org/index.php/2020/07/install-qt4-ubuntu-20-04/

