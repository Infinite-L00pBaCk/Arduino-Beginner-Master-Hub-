# Project 04: Analog Potentiometer 🎚️

So far, we have only used "Digital" signals (`HIGH` / `LOW`, or ON / OFF). In this project, we introduce **Analog** signals. Using a potentiometer (a twistable knob, like a volume dial), we can read a wide range of values and use them to fade an LED's brightness up and down smoothly!

## 📦 Component List
- 1x Arduino Uno
- 1x Breadboard
- 1x Potentiometer (usually 10k-ohm)
- 1x LED (Any color)
- 1x 220-ohm Resistor
- 5x Jumper Wires

---

## 🔌 Circuit Connection Guide

### Potentiometer Circuit:
A potentiometer has 3 pins. Place it on the breadboard so each pin is in a different row.
1. Connect the **Left Pin** to the **5V** rail.
2. Connect the **Right Pin** to the **GND** rail. *(Note: You can swap the left and right pins; it just reverses which way you turn to increase the value).*
3. Connect the **Middle Pin (Wiper)** to Analog Pin **A0** on the Arduino.

### LED Circuit:
1. Connect the LED's shorter leg to GND using the 220Ω resistor.
2. Connect the LED's longer leg to **Pin 9**. 
   > *Crucial Detail: We must use Pin 9 because it has a tilde (`~`) next to the number on the board. This means it supports PWM (Pulse Width Modulation), which is required to "fade" an LED.*

---

## 🧠 Code Explanation

- `analogRead(POT_PIN);`
  The Arduino's Analog pins (A0-A5) can read voltage variations. It translates 0 Volts to the number `0`, and 5 Volts to the number `1023`.
- `analogWrite(LED_PIN, brightness);`
  Normally we use `digitalWrite()` to turn an LED strictly ON or OFF. `analogWrite()` allows us to send a value between `0` (off) and `255` (fully on) to control brightness.
- **The Problem:** The potentiometer gives us a number from `0 to 1023`, but the LED can only accept a number from `0 to 255`.
- **The Solution:** We use the Arduino `map()` function! `map(sensorValue, 0, 1023, 0, 255)` takes the large number range from the knob and mathematically squishes it down to perfectly fit the smaller number range of the LED.

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->

