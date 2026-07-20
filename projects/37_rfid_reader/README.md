# Project 37 - RFID Reader

## Description
This project demonstrates how to read RFID tags using the RC522 RFID module and an Arduino. When an RFID tag or card is brought close to the module, its unique UID will be displayed in the Serial Monitor.

## Components Needed
- Arduino UNO (or compatible)
- RC522 RFID Module
- RFID Tags/Cards
- Jumper Wires

## Wiring Diagram
- **SDA (SS)** to Arduino Pin 10
- **SCK** to Arduino Pin 13
- **MOSI** to Arduino Pin 11
- **MISO** to Arduino Pin 12
- **IRQ** (Not connected)
- **GND** to Arduino GND
- **RST** to Arduino Pin 9
- **3.3V** to Arduino 3.3V

## How It Works
The RC522 uses the SPI protocol to communicate with the Arduino. Using the `MFRC522` library, the Arduino checks if a new tag is present. If it detects a tag, it reads the data (UID) and sends it over Serial to be displayed in the Serial Monitor.
