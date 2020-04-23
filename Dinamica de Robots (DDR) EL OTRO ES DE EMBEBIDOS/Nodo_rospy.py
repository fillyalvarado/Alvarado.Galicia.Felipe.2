#!/usr/bin/env python
# encoding: utf-8
	
def nodo():
	rospy.init_node('node1')
	mensaje="hola mundo"
	#print (mensaje)
	rospy.loginfo(mensaje)
	
if __name__== '__main__':
	try:
		nodo()
	except rospy.ROSInterruptException:
		pass
		
