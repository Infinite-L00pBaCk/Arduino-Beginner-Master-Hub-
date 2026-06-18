# Project 16: Joystick Servo Controller 🕹️

In this project, we are going to combine two components: the analog Joystick and the Servo Motor. You will learn how to read an analog input from the joystick and map it directly to the physical angle of the servo motor. This is the foundation of building a robotic arm!

## 📦 Component List
- 1x Arduino Uno
- 1x Analog Joystick Module
- 1x Micro Servo Motor
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The Joystick:**
1. **GND** -> Arduino **GND**
2. **+5V** -> Arduino **5V**
3. **VRx** -> Arduino Analog **A0** (X-axis movement)

**The Servo Motor:**
1. **Brown/Black Wire** -> Arduino **GND**
2. **Red Wire** -> Arduino **5V**
3. **Orange/Yellow Wire** -> Arduino Digital **Pin 9**

*(Note: We only need the X-axis for a single servo, so we leave VRy and SW disconnected).*

---

## 🧠 Code Explanation

- `analogRead(A0);`
  Reads the X-axis position of the joystick (a number between 0 and 1023). 0 is all the way left, 1023 is all the way right.
- `map(joyVal, 0, 1023, 0, 180);`
  Just like in the potentiometer project, we squash the large joystick numbers (0-1023) down to perfectly fit the servo motor angles (0-180 degrees).
- `myServo.write(angle);`
  Tells the servo to instantly point to the new angle!

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


<!-- Streak Recovery 2026-06-15 -->


<!-- Streak Recovery 2026-06-16 -->


<!-- Streak Recovery 2026-06-17 -->


<!-- Streak Recovery 2026-06-18 -->

