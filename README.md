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
    <ul>
        <li>Arduino UNO</li>
        <li>Ultrasonic Sensor (HC-SR04)</li>
        <li>Servo Motor</li>
        <li>Buzzer</li>
        <li>LEDs (Red, Yellow, Green)</li>
        <li>Male to Female Wires</li>
        <li>Arduino Kit</li>
        <li>Processing (Java-based IDE)</li>
    </ul>
    
    <h2>Features</h2>
    <ul>
        <li>Real-time distance measurement and visualization</li>
        <li>Dynamic radar display with angle and distance markers</li>
        <li>Visual and audio feedback for object detection within specified ranges</li>
        <li>Smooth animation for radar line and detected objects</li>
    </ul>
    
    <h2>Hardware Setup</h2>
    <h3>Ultrasonic Sensor (HC-SR04)</h3>
    <ul>
        <li>VCC to Arduino 5V</li>
        <li>GND to Arduino GND</li>
        <li>Trig to Arduino Pin 6</li>
        <li>Echo to Arduino Pin 5</li>
    </ul>
    
    <h3>Servo Motor</h3>
    <ul>
        <li>Signal to Arduino Pin 9</li>
        <li>VCC to Arduino 5V</li>
        <li>GND to Arduino GND</li>
    </ul>
    
    <h3>Buzzer</h3>
    <ul>
        <li>Positive terminal to Arduino Pin 2</li>
        <li>Negative terminal to Arduino GND</li>
    </ul>
    
    <h3>LEDs</h3>
    <ul>
        <li>Red LED to Arduino Pin 10 (with appropriate resistor)</li>
        <li>Yellow LED to Arduino Pin 11 (with appropriate resistor)</li>
        <li>Green LED to Arduino Pin 12 (with appropriate resistor)</li>
    </ul>
</body>
</html>
