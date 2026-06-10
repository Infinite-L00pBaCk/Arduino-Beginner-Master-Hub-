# Project 09: Flame Sensor / Fire Alarm 🔥

Most Arduino starter kits come with a small black LED-looking component that has 3 or 4 pins on a module board. This is an **Infrared Flame Sensor**. It is specially designed to detect the specific wavelength of light given off by a fire!

In this project, we will combine it with a buzzer to build a functional fire alarm.

## 📦 Component List
- 1x Arduino Uno
- 1x Flame Sensor Module
- 1x Passive Buzzer
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The Flame Sensor:**
- **VCC** -> Arduino **5V**
- **GND** -> Arduino **GND**
- **D0 (Digital Out)** -> Arduino Digital **Pin 7**
*(Note: If your sensor only has an A0 analog pin, you can use that instead and use analogRead() to measure the intensity of the fire, but digital is easier for a simple alarm).*

**The Buzzer:**
- Positive leg -> Arduino **Pin 12**
- Negative leg -> Arduino **GND**

---

## 🧠 Code Explanation

- `digitalRead(7);`
  The flame sensor module has a small blue potentiometer box on it. You can twist it with a screwdriver to adjust the sensitivity. When it detects a flame, the module automatically sends a `LOW` or `HIGH` signal to Pin 7 (depending on your specific sensor).
- We read that pin. If it detects fire, we trigger the buzzer!

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad does not have a native flame sensor component, but you can simulate this logic using a standard pushbutton or photoresistor.*

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->

