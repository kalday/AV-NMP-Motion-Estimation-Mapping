# AV NMP Motion Estimation/Mapping

## Introduction
The motion estimation and mapping team seeks to localize where the car by fusing sensors such as GPS, IMU, wheel speed sensors (and others) and mapping with LIDAR sensors. In this NMP you'll learn basics of ROS2 and using the robot_localization package for sensor fusion. 

## Brief
### Installation
Start by installing ROS2 Galactic and read through the docs to learn the basics of nodes, topics, services, rosbags etc. (Don't need to cover all of it, just could learn as you go along).

ROS2: https://docs.ros.org/en/galactic/Installation.html#installationguide

### The Task
The task is to use the robot_localization package (which implements an EKF for you already) and to set it up with a provided rosbag2 (a collection of data) and to output the filtered data. You can install robot_localization package after installing ROS2 by running the command:

`sudo apt install ros-galactic-robot-localization`

The message types that are provided in the rosbag is
- sensor_msgs/Imu (IMU data)
- geometry_msgs/TwistWithCovarianceStamped (Optical Speed Sensor)
- sensor_msgs/NavSatFix (GPS)

A step by step tutorial including documentation (which fuses different sensors) is provided in the useful references at the bottom. Reading through these should help you setup the package properly with configuration files. 

## Submission
All your project files including configuration files, launch files, any code you've written, and steps to run them and view results if you've added anything different. 

## Useful References

robot_localization docs: http://docs.ros.org/en/melodic/api/robot_localization/html/index.html#

Useful tutorial covering similar concepts: https://automaticaddison.com/sensor-fusion-using-the-robot-localization-package-ros-2/
