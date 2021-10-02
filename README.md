# AV NMP Motion Estimation/Mapping

## Introduction
The motion estimation and mapping team seeks to localize the position of the car by fusing data from sensors such as the GPS, IMU, wheel speed sensor (and others) with the mapping from LIDAR sensors. In this new member project, you will learn the basics of ROS2 and using the robot_localization package for sensor fusion. 

## Brief
### Installation
Start by installing ROS2 Galactic and read through the docs to learn the basics of nodes, topics, services, rosbags etc. (Don't need to cover all of it, just could learn as you go along).

ROS2: https://docs.ros.org/en/galactic/Installation.html#installationguide

Note: Ros2 Galactic is the latest version of Ros2. It is backwards compatible, so it is completely fine if you have earlier version of Ros2 e.g. Ros2-Foxy

### The Task
The task is to use the robot_localization package (which implements an EKF for you already) and to set it up with a provided rosbag2 (a collection of data) and to output the filtered data. You can install robot_localization package after installing ROS2 by running the command:

`sudo apt install ros-[ros-version]-robot-localization` replace [ros-version] with galactic or foxy or whatever version of ROS2 you're using. 

The message types that are provided in the rosbag is
- sensor_msgs/Imu (IMU data)
- geometry_msgs/TwistWithCovarianceStamped (Optical Speed Sensor)
- sensor_msgs/NavSatFix (GPS)

A step by step tutorial including documentation (which fuses different sensors) is provided in the useful references at the bottom. Reading through these should help you setup the package properly with configuration files. 

Its important to note you're not implementing EKF yourself (there is a ROS2 node already that does it for you http://docs.ros.org/en/noetic/api/robot_localization/html/state_estimation_nodes.html). You're just configuring this ROS2 node such that it works with the sensor data thats provided to you in a rosbag. A sample configuration file is provided here https://github.com/cra-ros-pkg/robot_localization/blob/foxy-devel/params/ekf.yaml which sets up this ros2 ekf node (which is documented in the link above). 

## Submission
All your project files including configuration files, launch files, any code you've written, and steps to run them and view results if you've added anything different. 

## Useful References

robot_localization docs: http://docs.ros.org/en/melodic/api/robot_localization/html/index.html#

Useful tutorial covering similar concepts: https://automaticaddison.com/sensor-fusion-using-the-robot-localization-package-ros-2/
