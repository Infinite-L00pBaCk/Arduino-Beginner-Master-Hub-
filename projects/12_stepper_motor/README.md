# Project 12: Stepper Motor Basics ⚙️

Unlike a normal DC motor that just spins uncontrollably when you give it power, a **Stepper Motor** moves in exact, tiny, precise "steps". You can tell it to move exactly 180 degrees, or exactly 1.5 rotations, and it will do it perfectly. This is the exact technology used inside 3D printers and CNC machines!

In this project, we will use the extremely popular `28BYJ-48` stepper motor and its companion `ULN2003` driver board.

## 📦 Component List
- 1x Arduino Uno
- 1x 28BYJ-48 Stepper Motor
- 1x ULN2003 Motor Driver Board
- Jumper Wires

---

## 🔌 Circuit Connection Guide

1. Plug the white connector of the Stepper Motor directly into the white socket on the ULN2003 Driver Board.
2. Connect Driver Board **IN1** -> Arduino Digital **Pin 8**
3. Connect Driver Board **IN2** -> Arduino Digital **Pin 9**
4. Connect Driver Board **IN3** -> Arduino Digital **Pin 10**
5. Connect Driver Board **IN4** -> Arduino Digital **Pin 11**
6. Connect Driver Board **- (GND)** -> Arduino **GND**
7. Connect Driver Board **+ (5V)** -> Arduino **5V**

---

## 🧠 Code Explanation

- `#include <Stepper.h>`
  We use the built-in Stepper library. You do not need to download this; it comes pre-installed with the Arduino IDE!
- `Stepper myStepper(stepsPerRev, 8, 10, 9, 11);`
  We set up the motor. Notice the weird pin order `8, 10, 9, 11`! This is incredibly important. The 28BYJ-48 motor's internal coils are wired slightly out of sequence, so we have to swap the middle two pins in the code for it to rotate smoothly!
- `myStepper.setSpeed(10);`
  Sets the speed to 10 RPM.
- `myStepper.step(2048);`
  Tells the motor to take exactly 2048 steps (which equals exactly 1 full rotation for this specific motor).

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad does not have a native 28BYJ-48 stepper motor component to simulate this project accurately.*

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->

