#!/usr/bin/env python2
# encoding: utf-8

import rospy
import actionlib
from package_robot.msg import DoCarWashAction, DoCarWashFeedback, DoCarWashResult
class DoActionServer:
	def __init__(self):
		self.server = actionlib.SimpleActionServer('do_wash_car', DoCarWashAction, self. 
		execute, False) 
		self.server.start()
		print("Running action server do_wash_car...")
	def execute(self, goal):
		feedback = DoCarWashFeedback()
		#de tipo Feedback
		result = DoCarWashResult()
		#de tipo Result
		rate = rospy.Rate(1)
		for x in range(0,goal.number_of_cars):
		result.total_cars_cleaned += 1
		feedback.percent_cars_complete = (result.total_cars_cleaned*100.0)/goal.
		number_of_cars
		self.server.publish_feedback(feedback)
		rate-sleep()
	self.server.set_succeded(result)

if __name__ == '__main__':
	rospy.init_node('nodo_action_server')
	server = DoActionServer()
	#de la clase DoActionServer
	rospy.spin()
		
