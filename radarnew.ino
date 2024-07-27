#include <Servo.h>

const int trigPin = 8;
const int echoPin = 9;
const int buzzerPin = 11; // Define the buzzer pin
const int buzzerThreshold = 20; // Adjust this threshold as needed
const int ledPin = 13; // Define the LED pin
const int servoDelay = 60; // Delay for servo movement

long duration;
int distance;
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600);
  myServo.attach(7);
}

void loop() {
  digitalWrite(ledPin, LOW); // Turn off the LED initially
  digitalWrite(buzzerPin, LOW); // Turn off the buzzer initially

  for (int i = 15; i <= 165; i++) {
    myServo.write(i);
    delay(servoDelay);
    distance = calculateDistance();

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");

    if (distance < buzzerThreshold) {
      digitalWrite(buzzerPin, HIGH); // Turn on the buzzer when an object is detected
      digitalWrite(ledPin, HIGH); // Turn on the LED when an object is detected
      delay(100); // Reduce this delay for faster beeping
    }
    
    // Add a delay here to control the beep duration
    delay(200); // Adjust the duration as needed
    digitalWrite(buzzerPin, LOW); // Turn off the buzzer
    digitalWrite(ledPin, LOW); // Turn off the LED
  }

  delay(1000);

  for (int i = 165; i > 15; i--) {
    myServo.write(i);
    delay(servoDelay);
    distance = calculateDistance();

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");

    if (distance < buzzerThreshold) {
      digitalWrite(buzzerPin, HIGH);
      digitalWrite(ledPin, HIGH);
      delay(100); // Reduce this delay for faster beeping
    }
    
    // Add a delay here to control the beep duration
    delay(200); // Adjust the duration as needed
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}
