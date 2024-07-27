# Smart_Objectdetection-Radar_System
Visual Radar Project
Overview
This project demonstrates a visual radar system using Arduino and Processing. The radar system measures the distance of objects within a certain range and visualizes the data on a computer screen using a radar-like display. The system utilizes an ultrasonic sensor connected to an Arduino to detect distances, which are then sent to a computer via serial communication. The Processing application reads these values and displays a real-time radar view.

Components
Arduino UNO
Ultrasonic Sensor (HC-SR04)
Servo Motor
Buzzer
LEDs (Red, Yellow, Green)
Male to Female Wires
Arduino Kit
Processing (Java-based IDE)
Features
Real-time distance measurement and visualization
Dynamic radar display with angle and distance markers
Visual and audio feedback for object detection within specified ranges
Smooth animation for radar line and detected objects
Hardware Setup
Ultrasonic Sensor (HC-SR04):

VCC to Arduino 5V
GND to Arduino GND
Trig to Arduino Pin 6
Echo to Arduino Pin 5
Servo Motor:

Signal to Arduino Pin 9
VCC to Arduino 5V
GND to Arduino GND
Buzzer:

Positive terminal to Arduino Pin 2
Negative terminal to Arduino GND
LEDs:

Red LED to Arduino Pin 10 (with appropriate resistor)
Yellow LED to Arduino Pin 11 (with appropriate resistor)
Green LED to Arduino Pin 12 (with appropriate resistor)
