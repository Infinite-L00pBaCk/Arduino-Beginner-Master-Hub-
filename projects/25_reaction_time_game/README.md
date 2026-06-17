# Project 25: Reaction Time Game ⏱️

Test your reflexes! This project uses a 7-segment display to count down, then measures how fast you can press a button.

## 📦 Component List
- 1x Arduino Uno
- 1x Breadboard
- 1x 7-Segment Display (Common Cathode)
- 2x Pushbuttons
- 7x 220-ohm Resistors (for 7-segment display)
- 2x 10k-ohm Resistors (for the buttons)
- Jumper Wires

## 🔌 Circuit Connection Guide

### 7-Segment Display Circuit:
Connect the pins of the 7-segment display to the Arduino through 220-ohm resistors:
- Pin a to Arduino Pin 2
- Pin b to Arduino Pin 3
- Pin c to Arduino Pin 4
- Pin d to Arduino Pin 5
- Pin e to Arduino Pin 6
- Pin f to Arduino Pin 7
- Pin g to Arduino Pin 8
- Common Cathode to GND

### Button Circuit:
- Connect the **bottom-left pin** of Button 1 (Start/Reset) to **5V**.
- Connect the **bottom-right pin** of Button 1 to **Pin 9**. Connect a 10kΩ resistor from this pin to **GND**.
- Connect the **bottom-left pin** of Button 2 (React) to **5V**.
- Connect the **bottom-right pin** of Button 2 to **Pin 10**. Connect a 10kΩ resistor from this pin to **GND**.

## 🧠 Code Explanation
- The code uses an array to store the byte values for displaying digits 0-9 on the 7-segment display.
- `random(min, max)` is used to generate a random delay before the game starts.
- `millis()` is used to keep track of time and calculate the reaction time.
- The game counts down 3.. 2.. 1.. on the display, then goes blank for a random time. When it shows '8' (all segments on as a signal), the player must press the React button!
- A score based on the reaction time is then shown (1 is fastest, 9 is slowest). Exact time is printed to the Serial Monitor.

<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


<!-- Streak Recovery 2026-06-15 -->


<!-- Streak Recovery 2026-06-16 -->


<!-- Streak Recovery 2026-06-17 -->

