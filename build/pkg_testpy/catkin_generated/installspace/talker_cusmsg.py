#!/usr/bin/env python3
# license removed for brevity
import rospy
from std_msgs.msg import String
from pkg_testpy.msg import IoTSensor

def talker():
    pub = rospy.Publisher('jay_chatter', String, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        hello_str = "cus_msg %s" % rospy.get_time()
        rospy.loginfo(hello_str)
        pub.publish(hello_str)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
