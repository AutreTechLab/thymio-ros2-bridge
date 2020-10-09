#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String
from thymio2_interfaces.msg import Thymio2Controller


class Thymio2MonitorNode(Node):
    def __init__(self):
        super().__init__("Thymio2MonitorNode")
        self.subscriber_ = self.create_subscription(
            Thymio2Controller, "ThymioControllerPublisher", self.callback_thymio2_monitor, 10)
        self.get_logger().info("ThymioControllerPublisher.")

    def callback_thymio2_monitor(self, msg):
        self.get_logger().info("ACC X="+ str(msg.acc[0]) +" /Y/Z:" +str(msg.acc))
#        self.get_logger().info(str(msg.acc))


def main(args=None):
    rclpy.init(args=args)
    node = Thymio2MonitorNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()