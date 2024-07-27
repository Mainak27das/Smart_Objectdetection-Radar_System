<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Visual Radar Project</title>
</head>
<body>
    <h1>Visual Radar Project</h1>
    <h2>Overview</h2>
    <p>
        This project demonstrates a visual radar system using Arduino and Processing. The radar system measures the distance of objects within a certain range and visualizes the data on a computer screen using a radar-like display. The system utilizes an ultrasonic sensor connected to an Arduino to detect distances, which are then sent to a computer via serial communication. The Processing application reads these values and displays a real-time radar view.
    </p>
    
    <h2>Components</h2>
    <p>Arduino UNO</p>
    <p>Ultrasonic Sensor (HC-SR04)</p>
    <p>Servo Motor</p>
    <p>Buzzer</p>
    <p>LEDs (Red, Yellow, Green)</p>
    <p>Male to Female Wires</p>
    <p>Arduino Kit</p>
    <p>Processing (Java-based IDE)</p>
    
    <h2>Features</h2>
    <p>Real-time distance measurement and visualization</p>
    <p>Dynamic radar display with angle and distance markers</p>
    <p>Visual and audio feedback for object detection within specified ranges</p>
    <p>Smooth animation for radar line and detected objects</p>
    
    <h2>Hardware Setup</h2>
    <h3>Ultrasonic Sensor (HC-SR04)</h3>
    <p>VCC to Arduino 5V</p>
    <p>GND to Arduino GND</p>
    <p>Trig to Arduino Pin 6</p>
    <p>Echo to Arduino Pin 5</p>
    
    <h3>Servo Motor</h3>
    <p>Signal to Arduino Pin 9</p>
    <p>VCC to Arduino 5V</p>
    <p>GND to Arduino GND</p>
    
    <h3>Buzzer</h3>
    <p>Positive terminal to Arduino Pin 2</p>
    <p>Negative terminal to Arduino GND</p>
    
    <h3>LEDs</h3>
    <p>Red LED to Arduino Pin 10 (with appropriate resistor)</p>
    <p>Yellow LED to Arduino Pin 11 (with appropriate resistor)</p>
    <p>Green LED to Arduino Pin 12 (with appropriate resistor)</p>
</body>
</html>
