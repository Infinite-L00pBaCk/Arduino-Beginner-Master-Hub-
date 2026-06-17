# Project 10: Relay Switch Control ⚡

An Arduino runs on 5 Volts, which is completely safe. But what if you want your Arduino to turn on a 120V desk lamp or a high-powered water pump? If you connect those directly to the Arduino, it will explode! 

To control high-power devices safely, we use a **Relay**. A relay is an electromagnetic switch. Your safe, 5V Arduino sends a tiny signal to the relay, and the relay uses a magnet to flip a switch that turns on the high-power device—keeping the two circuits totally separate!

## 📦 Component List
- 1x Arduino Uno
- 1x 5V Relay Module (1-channel)
- 1x Pushbutton
- 1x 10kΩ Resistor
- Jumper Wires

*(Note: For safety, we will NOT connect a real high-voltage device. You will just hear the mechanical "CLICK" of the switch turning on and off).*

---

## 🔌 Circuit Connection Guide

**The Pushbutton:**
- Connect to **Pin 2** (with a 10kΩ pull-down resistor to GND, just like Project 03).

**The Relay Module:**
- **VCC** -> Arduino **5V**
- **GND** -> Arduino **GND**
- **IN / Signal** -> Arduino Digital **Pin 8**

---

## 🧠 Code Explanation

The code for a relay is exactly the same as the code for an LED! A relay is just a digital output. 
- `digitalWrite(8, HIGH);` will energize the magnet inside the relay, pulling the switch closed with a loud *CLICK*.
- `digitalWrite(8, LOW);` will release the magnet, opening the switch.

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

