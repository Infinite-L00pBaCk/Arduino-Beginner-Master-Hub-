# Project 17: Keypad Security Alarm 🔐

Let's build a functional security system! We will use a 4x4 membrane keypad to input a secret password. If the user gets it right, they are granted access. If they get it wrong, a buzzer alarm sounds and a red LED flashes!

## 📦 Component List
- 1x Arduino Uno
- 1x 4x4 Membrane Keypad
- 1x Passive Buzzer
- 1x Red LED & 1x Green LED
- 2x 220Ω Resistors
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The Keypad:**
Starting from the left-most pin on the keypad when looking at the front:
- Pin 1 -> Arduino Digital **Pin 9**
- Pin 2 -> Arduino Digital **Pin 8**
- Pin 3 -> Arduino Digital **Pin 7**
- Pin 4 -> Arduino Digital **Pin 6**
- Pin 5 -> Arduino Digital **Pin 5**
- Pin 6 -> Arduino Digital **Pin 4**
- Pin 7 -> Arduino Digital **Pin 3**
- Pin 8 -> Arduino Digital **Pin 2**

**The LEDs & Buzzer:**
- **Green LED:** Connect to **Pin 10** (with a resistor to GND)
- **Red LED:** Connect to **Pin 11** (with a resistor to GND)
- **Buzzer:** Connect positive leg to **Pin 12**, negative to GND.

---

## 🧠 Code Explanation

- `#include <Keypad.h>`
  You must install this library! See our [Library Guide](../../docs/library_guide.md).
- `char customKey = customKeypad.getKey();`
  This reads whatever button was just pressed on the keypad.
- **The Logic:** We wait for the user to press a button. If they press the secret key (e.g., 'A'), we turn the green LED on. If they press anything else, we trigger the alarm function!

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->

