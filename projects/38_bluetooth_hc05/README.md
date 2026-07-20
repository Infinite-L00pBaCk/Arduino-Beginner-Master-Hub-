# Project 38: Bluetooth HC-05 Module

## Overview
This project demonstrates how to use the HC-05 Bluetooth module to communicate wirelessly between an Arduino and a smartphone or computer. We will create a simple system where sending a '1' via Bluetooth turns on the Arduino's built-in LED, and sending a '0' turns it off.

## Components Needed
- 1 x Arduino Uno
- 1 x HC-05 Bluetooth Module
- Jumper Wires

## Wiring Diagram
- **HC-05 VCC** to Arduino 5V
- **HC-05 GND** to Arduino GND
- **HC-05 TXD** to Arduino D10 (RX)
- **HC-05 RXD** to Arduino D11 (TX) via a voltage divider (optional but recommended for 3.3V logic)

## Code Explanation
The sketch uses `SoftwareSerial` to communicate with the HC-05 module on pins 10 and 11, leaving the hardware serial port free for debugging. It reads characters sent over Bluetooth and controls the built-in LED on pin 13 accordingly.

## How to Test
1. Upload the code to your Arduino.
2. Pair your smartphone or computer with the HC-05 module (default PIN is usually `1234` or `0000`).
3. Open a Bluetooth Serial Terminal app on your device.
4. Connect to the HC-05 and send '1' to turn the LED on, or '0' to turn it off.
5. You can also view debug messages in the Arduino IDE Serial Monitor at 9600 baud.
