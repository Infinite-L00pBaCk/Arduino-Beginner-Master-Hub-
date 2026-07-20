# Project 35 - L298N Motor Driver

## Description
This project demonstrates how to control a DC motor using an L298N motor driver module. We will control both the direction of rotation and the speed of the motor.

## Components Needed
- Arduino UNO (or compatible)
- L298N Motor Driver
- DC Motor
- External Power Supply (e.g., 9V battery or AA battery pack)
- Jumper Wires

## Wiring Diagram
- **L298N ENA** to Arduino Pin 9 (PWM)
- **L298N IN1** to Arduino Pin 8
- **L298N IN2** to Arduino Pin 7
- **L298N OUT1 & OUT2** to DC Motor Terminals
- **L298N 12V** to Positive of external power supply
- **L298N GND** to Ground of external power supply AND Arduino GND
- **L298N 5V** (Leave unconnected if using external power > 12V with jumper removed, otherwise can power Arduino)

## How It Works
The L298N is an H-Bridge motor driver that allows us to control the speed and direction of two DC motors. We are using one motor (Motor A) for this example. The `IN1` and `IN2` pins control the direction by setting one HIGH and the other LOW. The `ENA` pin controls the speed by using PWM (Pulse Width Modulation).
