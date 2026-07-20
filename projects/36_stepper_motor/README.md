# Project 36 - Stepper Motor

## Description
This project shows how to control a 28BYJ-48 stepper motor using the ULN2003 driver board and the Arduino `Stepper.h` library.

## Components Needed
- Arduino UNO (or compatible)
- 28BYJ-48 Stepper Motor
- ULN2003 Motor Driver Board
- Jumper Wires

## Wiring Diagram
- **ULN2003 IN1** to Arduino Pin 8
- **ULN2003 IN2** to Arduino Pin 9
- **ULN2003 IN3** to Arduino Pin 10
- **ULN2003 IN4** to Arduino Pin 11
- **ULN2003 + (VCC)** to Arduino 5V
- **ULN2003 - (GND)** to Arduino GND

## How It Works
The `Stepper.h` library makes it easy to control the motor. We initialize the Stepper object by defining the steps per revolution and the control pins. Since the 28BYJ-48 has a gear reduction, the total steps per revolution of the output shaft is `32 * 64 = 2048`. We use `.step()` to move the motor a specific number of steps in either clockwise or counter-clockwise direction.
