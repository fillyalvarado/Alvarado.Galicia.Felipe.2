#!/usr/bin/env python2
# encoding: utf-8

import rospy
from package_robot.srv import SumatwoInt, SumatwoIntResponse
def handle_suma_two_int(req):
	print("Resturning [%s + %s = %s]"%(req.a, req.b, (req.a + req.b)))
	return SumatwoIntResponse(req.a + req.b)

def nodo():
	rospy.init_node('nodo_suma_two_int_server')
	#declaramos nuestro servicio server
	#name service
	s = rospy.Service('suma_two_int', sumatwoInt, handle_suma_two_int)
	print("ready to add two ints.")
	rospy.spin()

if __name__== '__main__':
	try:
		nodo()
	except rospy.ROSInterruptException:
		pass
