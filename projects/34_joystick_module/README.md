# Project 34 - Joystick Module

## Description
This project demonstrates how to interface a Joystick module with an Arduino. It reads the analog X and Y values, as well as the digital push button state, and prints them to the Serial Monitor.

## Components Needed
- Arduino UNO (or compatible)
- Joystick Module
- Jumper Wires

## Wiring Diagram
- **VCC** to Arduino 5V
- **GND** to Arduino GND
- **VRx (X-axis)** to Arduino A0
- **VRy (Y-axis)** to Arduino A1
- **SW (Switch)** to Arduino Pin 2

## How It Works
The joystick uses two potentiometers to determine the X and Y coordinates, outputting a value between 0 and 1023 on the analog pins. The switch is a simple push button that can be read via a digital pin using an internal pull-up resistor.
