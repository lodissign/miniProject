#!/usr/bin/env python

import rospy
import actionlib
from geometry_msgs.msg import Pose, PoseStamped
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal


p1 = Pose()
p1.position.x = 2
p1.position.y = 2
p1.orientation.z = 2
p1.orientation.w = 1


p2 = Pose()
p1.position.x = 2
p1.position.y = 2
p1.orientation.z = 2
p1.orientation.w = 1

def goal_pose(pose)
    goal_pose = MoveBaseGoal()
    goal_pose.target_pose.header.frame_id = "move_base?"
    goal_pose.target_pose.p1
    goal_pose.target_pose.p2

    return goal_pose


if __name__=='__main__':
    rospy.initnode('pat')

    client = actionlib.SimpleActionClient('move_base', MoveBaseAction)
    client.wait_for_server()

    while True:
        goal = goal_pose(pose)
        client.send_goal(goal)
        client.wait_for_result()
