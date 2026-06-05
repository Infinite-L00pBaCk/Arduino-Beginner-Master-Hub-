# Project 08: Ultrasonic Distance Sensor 🦇

Time to give your Arduino eyes (or ears, really)! The HC-SR04 ultrasonic sensor works like a bat's echolocation. It sends out a high-frequency sound pulse and measures how long it takes for the echo to bounce back, allowing us to calculate distance.

## 📦 Component List
- 1x Arduino Uno
- 1x Breadboard
- 1x HC-SR04 Ultrasonic Distance Sensor
- 4x Jumper Wires (M/M or M/F depending on your sensor pins)

---

## 🔌 Circuit Connection Guide

The HC-SR04 has 4 pins. Connect them as follows:

1. **VCC:** Connect to the **5V** pin on the Arduino (provides power).
2. **GND:** Connect to any **GND** pin on the Arduino (completes the circuit).
3. **TRIG (Trigger):** Connect to **Pin 9** on the Arduino. This pin sends the sound pulse.
4. **ECHO:** Connect to **Pin 10** on the Arduino. This pin listens for the bouncing sound wave.

---

## 🧠 Code Explanation

- `Serial.begin(9600);` 
  This opens a communication channel between the Arduino and your computer screen (via the Serial Monitor) at a speed of 9600 baud. This allows us to print text to the screen!
- `digitalWrite(TRIG_PIN, HIGH); delayMicroseconds(10);` 
  Sends a tiny 10-microsecond burst of sound out of the trigger.
- `duration = pulseIn(ECHO_PIN, HIGH);` 
  A special function that times exactly how long the ECHO pin stays HIGH (which represents the time it took for the sound wave to travel out and back).
- `distance = duration * 0.034 / 2;` 
  **The Math:** Speed of sound is roughly 0.034 cm per microsecond. We multiply the time by speed to get distance. We divide by 2 because the sound traveled *to* the object and *back*, and we only want the distance to the object!
- `Serial.print(distance);` 
  Sends the calculated distance number back to your computer screen. You can view it by clicking the magnifying glass icon (Serial Monitor) in the top right of the Arduino IDE.

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->

