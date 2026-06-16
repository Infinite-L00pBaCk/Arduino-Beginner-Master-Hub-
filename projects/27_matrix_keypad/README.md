# Project 27: 4x4 Matrix Keypad 🔢

Want to build a calculator, a custom computer keyboard, or a PIN-code door lock? You need a keypad!

A 4x4 membrane keypad gives you 16 buttons, but it only uses 8 pins on the Arduino. It does this by using a "Matrix"—it sends a signal down the rows and checks the columns to figure out exactly which button intersects!

## 📦 Component List
- 1x Arduino Uno
- 1x 4x4 Membrane Keypad
- Jumper Wires

---

## 🔌 Circuit Connection Guide

The membrane keypad usually has 8 pins coming out of it. Looking at it from left to right:
- **Pin 1 (Row 1):** Connect to Arduino **Pin 9**
- **Pin 2 (Row 2):** Connect to Arduino **Pin 8**
- **Pin 3 (Row 3):** Connect to Arduino **Pin 7**
- **Pin 4 (Row 4):** Connect to Arduino **Pin 6**
- **Pin 5 (Col 1):** Connect to Arduino **Pin 5**
- **Pin 6 (Col 2):** Connect to Arduino **Pin 4**
- **Pin 7 (Col 3):** Connect to Arduino **Pin 3**
- **Pin 8 (Col 4):** Connect to Arduino **Pin 2**

---

## 🛠️ Required Library

To handle the complex row/column scanning, we need a library.
1. Open the Arduino IDE.
2. Go to **Sketch** > **Include Library** > **Manage Libraries...**
3. Search for **Keypad** (by Mark Stanley, Alexander Brevig) and click Install.

---

## 🧠 Code Explanation

- `Keypad keypad = Keypad(...)`
  This creates our keypad object and tells the library exactly which pins we plugged the rows and columns into.
- `keypad.getKey()`
  This function automatically scans the entire matrix. If you pressed a button, it returns the character (like 'A' or '7'). If you didn't press anything, it returns nothing!

---

## 🌐 Tinkercad Simulation

[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually! (Search for the "Keypad" component in the Tinkercad library).

<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


<!-- Streak Recovery 2026-06-15 -->


<!-- Streak Recovery 2026-06-16 -->

