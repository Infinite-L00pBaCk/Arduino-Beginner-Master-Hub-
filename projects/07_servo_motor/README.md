# Project 07: Servo Motor Control ⚙️

Time to make things physically move! A servo motor is not like a regular motor that just spins continuously. Instead, a servo can be programmed to turn to a highly specific angle (usually between 0 and 180 degrees) and hold its position there. They are used in robot arms, steering systems, and automated doors.

## 📦 Component List
- 1x Arduino Uno
- 1x Micro Servo Motor (like the blue SG90)
- 3x Jumper Wires (Male-to-Male)

---

## 🔌 Circuit Connection Guide

The servo motor has a single cable ending in 3 colored wires:
1. **Brown (or Black) Wire:** Connect to Arduino **GND**
2. **Red Wire:** Connect to Arduino **5V**
3. **Orange (or Yellow) Wire:** Connect to Arduino **Pin 9** (This is the control signal)

---

## 🧠 Code Explanation

- `#include <Servo.h>`
  This is a built-in library that comes with the Arduino IDE. It handles the complex math needed to send pulse signals to the motor.
- `Servo myServo;`
  This creates a "Servo Object". If you had two servos, you would write `Servo myServo2;`.
- `myServo.attach(9);`
  Inside `setup()`, this tells the Arduino which pin the servo's orange signal wire is connected to.
- `myServo.write(90);`
  This is the magic command! It tells the servo to physically rotate its arm to the 90-degree position.

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->

