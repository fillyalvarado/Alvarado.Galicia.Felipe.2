#!/usr/bin/env python2
# encoding: utf-8

import rospy
from package_robot.srv import SumatwoInt
def add_two_int_client(x, y):
	rospy.wait_for_service('suma_two_int')
	try:
		add_two_int = rospy.ServiceProxy('suma_two_int', SumatwoInt)
		resp = add_two_int(x, y)
		return resp.sum
	except rospy.ServiceException as e :
		print("Service call failed: %s"%e)

def nodo():
	rospy.init_node('nodo_suma_two_int_client')
	x = 7
	y = 8
	print("Requesting %s+%s"%(x, y))
	print("%s + %s = %s"%(x, y, add_two_int_client(x, y)))

if __name__== '__main__':
	try:
		nodo()
	except rospy.ROSInterruptException:
		pass
