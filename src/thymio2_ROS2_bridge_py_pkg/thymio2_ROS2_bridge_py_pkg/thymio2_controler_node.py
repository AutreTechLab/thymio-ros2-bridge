#!/usr/bin/env python3
import os
import rclpy
from rclpy.node import Node

from thymio2_interfaces.msg import Thymio2Controller
from thymio2_interfaces.srv import Thymio2ControllerSrv

import dbus
import dbus.mainloop.glib
from gi.repository import GObject as gobject
from gi.repository import GLib as glib


class Thymio2ControllerNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("Thymio2ControllerNode")
        self.declare_parameter("dbus_config", "session")
            # "session" = Use the standard configuration file for the per-login-session message bus
            # "system"  = Use the standard configuration file for the systemwide message bus.
        self.thymio2_status_publisher_ = self.create_publisher(Thymio2Controller, "ThymioControllerPublisher", 10)
        self.thymio2_controller_service_ = self.create_service(Thymio2ControllerSrv, "ThymioControllerService", self.callback_thymio2_controller)
        self.counter_ = 0
        self.timer_ = self.create_timer(1.0, self.publish_thymio_status)
        self.get_logger().info("Thymio2Controller publisher has been started.")

        if self.get_parameter("dbus_config").value == "session":
            bus = dbus.SessionBus()
            self.get_logger().info("Using DBUS config " + str(self.get_parameter("dbus_config").value))
        else:
            bus = dbus.SystemBus()
            self.get_logger().info("Using DBUS config " + str(self.get_parameter("dbus_config").value))
        try:
            asebaNetworkObject = bus.get_object('ch.epfl.mobots.Aseba', '/')
            self.asebaNetwork = dbus.Interface(asebaNetworkObject, dbus_interface='ch.epfl.mobots.AsebaNetwork')
            self.get_logger().info("ASEBA Network Nodes: " + str(self.asebaNetwork.GetNodesList()))
        except dbus.exceptions.DBusException:
            self.get_logger().info("Can not connect to Aseba DBus services! Is asebamedulla running?")


    def callback_thymio2_controller(self, request, response):
       if request.data:
            self.counter_ = 0
            response.success = True
            response.log_message = "Counter has been reset"
       else:
            response.success = False
            response.log_message = "Counter has not been reset"
       return response

    def publish_thymio_status(self):
        msg = Thymio2Controller()
        msg.acc = self.asebaNetwork.GetVariable("thymio-II", "acc")
        msg.temperature = 45
        msg.sd_present = False
        msg.debug_message = "Nothing special here"
        self.thymio2_status_publisher_.publish(msg)



# initialize asebamedulla in background and wait 0.3s to let
# asebamedulla startup
#os.system("(asebamedulla ser:name=Thymio-II &) && sleep 0.3")
#show running asebamedulla daemons, run ps afux | grep asebamedulla
#stop asebamedulla, run pkill -n asebamedull

def get_variables_reply(r):
    global proxSensorsVal
    proxSensorsVal = r

def get_variables_error(e):
    print('error:')
    print(str(e))

def main(args=None):
    rclpy.init(args=args)
    node = Thymio2ControllerNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
