# Project 24: RFID Door Lock Basics 🔑

Have you ever used a key fob to open an apartment building door or tap-to-pay with a credit card? That technology is called **RFID** (Radio Frequency Identification). 

In this project, we will use an RC522 RFID reader to scan smart cards and key fobs. The Arduino will read the unique, hidden ID number embedded inside the plastic card and print it to your computer. This is the first step to building your own secret door lock!

## 📦 Component List
- 1x Arduino Uno
- 1x RC522 RFID Reader Module
- 1x RFID Blank Card or Blue Key Fob (Usually included with the reader)
- Jumper Wires

---

## 🔌 Circuit Connection Guide

The RC522 uses **SPI communication**, which means it requires very specific pins on the Arduino Uno!

- `3.3V` -> Connect to **3.3V** *(Warning: DO NOT connect to 5V, it will fry the sensor!)*
- `RST` -> Connect to **Pin 9**
- `GND` -> Connect to **GND**
- `MISO` -> Connect to **Pin 12**
- `MOSI` -> Connect to **Pin 11**
- `SCK` -> Connect to **Pin 13**
- `SDA` (or SS) -> Connect to **Pin 10**

---

## 🛠️ Required Library

To translate the radio waves into readable numbers, we need a library.
1. Open the Arduino IDE.
2. Go to **Sketch** > **Include Library** > **Manage Libraries...**
3. Search for **MFRC522** (by GithubCommunity) and click Install.

---

## 🧠 Code Explanation

- `#include <SPI.h>`
  This is a built-in Arduino library that handles the fast, synchronized communication needed for the MISO/MOSI/SCK pins.
- `mfrc522.PICC_IsNewCardPresent()`
  This function constantly asks, "Is someone holding a card up to the sensor?" If yes, the code moves forward.
- `mfrc522.uid.uidByte[i]`
  Every RFID card has a "Unique ID" (UID) burned into its chip at the factory. This code pulls that hidden ID number out so you can see it.

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad does not currently support the RC522 RFID Reader module.*

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


<!-- Streak Recovery 2026-06-15 -->

