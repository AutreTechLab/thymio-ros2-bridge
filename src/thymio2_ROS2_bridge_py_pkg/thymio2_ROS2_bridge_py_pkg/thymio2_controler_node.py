#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


class Thymio2ControllerNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("Thymio2Controller") # MODIFY NAME


def main(args=None):
    rclpy.init(args=args)
    node = Thymio2Controller() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
