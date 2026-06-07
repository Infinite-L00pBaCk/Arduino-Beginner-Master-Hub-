# Project 07: Photoresistor (Light Sensor) ☀️

A photoresistor (also called an LDR - Light Dependent Resistor) is a magical component that changes its resistance based on how much light is hitting it. 
In this project, we will use it to sense the light level in the room and automatically turn on an LED when it gets dark—just like a streetlamp!

## 📦 Component List
- 1x Arduino Uno
- 1x Photoresistor (LDR)
- 1x LED
- 1x 10kΩ Resistor (Brown-Black-Orange)
- 1x 220Ω Resistor (Red-Red-Brown)
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The Sensor (Voltage Divider):**
1. Plug the photoresistor into the breadboard.
2. Connect one leg to **5V**.
3. Connect the other leg to Analog **Pin A0**.
4. Also connect that *same* A0 leg to GND through a **10kΩ Resistor**. (This is called a voltage divider, and it's required for the Arduino to read the sensor).

**The LED:**
1. Connect the long leg of the LED to Digital **Pin 13**.
2. Connect the short leg to **GND** through a **220Ω Resistor**.

---

## 🧠 Code Explanation

- `analogRead(A0);`
  Reads the voltage from the photoresistor circuit and converts it into a number between 0 (very dark) and 1023 (very bright).
- `if (lightValue < 400)`
  This acts as our threshold. If the room drops below 400 "light units", we turn the LED on!

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


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->

