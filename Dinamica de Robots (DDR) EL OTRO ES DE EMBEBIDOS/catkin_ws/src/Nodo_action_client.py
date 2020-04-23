#!/usr/bin/env python2
# encoding: utf-8

import rospy
import actionlib
from package_robot.msg import DoCarWashAction, DoCarWashGoal
def feedback_cb(msg):
	print('Feedback Received -> '+str(msg)+'%')
def call_server():
	client = actionlib.SimpleActionClient('do_wash_car', DoCarWashAction)
	client.wait_for_server()
	goal = DoCarWashGoal()
	goal.number_of_cars = 5
	client.send_goal(goal, feedback_cb=feenback_cb)
	client.wait_for_result()
	result = client-get_result()
	return result
	
if __name__ == '__main__':
	try:
		rospy.init_node('nodo_action_client')
		result = call_server()
		print("The result is: ", result)
	except rospy.RosInterruptException :
		pass
	rospy.spin() 
