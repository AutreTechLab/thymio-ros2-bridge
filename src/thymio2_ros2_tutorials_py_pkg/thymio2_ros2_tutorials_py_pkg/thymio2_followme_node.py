#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from thymio2_interfaces.msg import Thymio2Controller
from thymio2_interfaces.srv import Thymio2MotorSrv



class Thymio2FollowMeNode(Node):
    def __init__(self):
        super().__init__("Thymio2FollowMeNode")
        self.subscriber_ = self.create_subscription(
            Thymio2Controller, "ThymioControllerPublisher", self.callback_thymio2_braitenberg, 10)
        self.get_logger().info("Subscribed to ThymioControllerPublisher.")

    def callback_thymio2_braitenberg(self, msg):
        proxSensorsVal = msg.prox_horizontal
        self.get_logger().info(str(msg.prox_horizontal[0]) + " " + str(msg.prox_horizontal[1]) + " " + str(msg.prox_horizontal[2]) + " " + str(msg.prox_horizontal[3]) + " " + str(msg.prox_horizontal[4]))

        # Parameters of the Braitenberg, to give weight to each wheels
        leftWheel = [-0.01, -0.005, -0.0001, 0.006, 0.015]
        rightWheel = [0.012, +0.007, -0.0002, -0.0055, -0.011]

        # Braitenberg algorithm
        totalLeft = 0
        totalRight = 0
        for i in range(5):
            totalLeft = totalLeft + (proxSensorsVal[i] * leftWheel[i])
            totalRight = totalRight + (proxSensorsVal[i] * rightWheel[i])

        # add a constant speed to each wheels so the robot moves always forward
        totalRight = totalRight + 50
        totalLeft = totalLeft + 50

        # print in terminal the values that is sent to each motor
        self.get_logger().info("totalLeft: " + str(totalLeft) + "totalRight: " + str(totalRight))

        client = self.create_client(Thymio2MotorSrv, "Thymio2MotorSrv")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Thymio Motors Server ...")
        request = Thymio2MotorSrv.Request()
        request.motor_left_target = int(totalLeft)
        request.motor_right_target = int(totalRight)
        future = client.call_async(request)
        future.add_done_callback(
            partial(self.callback_call_thymio_motor_server, totalLeft=totalLeft, totalRight=totalRight))

    def callback_call_thymio_motor_server(self, future, totalLeft, totalRight):
        try:
            response = future.result()
            self.get_logger().info(str(totalLeft) + " + " +
                                   str(totalRight) + " = " + str(response.log_message))
        except Exception as e:
            self.get_logger().error("Thymio2MotorSrv Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = Thymio2FollowMeNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()