# Project 19: WiFi Network Scanner 📡

Welcome to Level 6! For this project, you cannot use your standard Arduino Uno, because it doesn't have a WiFi chip. You will need an **ESP8266** (like a NodeMCU) or an **ESP32** board. 

In this project, we are going to write the "Hello World" of Internet of Things (IoT). We are going to turn our microcontroller into a WiFi scanner that detects every router and hotspot in your house!

## 📦 Component List
- 1x ESP8266 Board (e.g., NodeMCU 1.0)
- 1x Micro-USB Cable

*(That's it! The antenna is built right into the silver square on the board).*

---

## 🛠️ Board Setup Required
Before you can upload this code, you **must** configure your Arduino IDE to recognize the ESP8266. 
Follow our guide here: **[How to Setup ESP8266 Boards](../../docs/esp_board_setup.md)**

---

## 🧠 Code Explanation

- `#include "ESP8266WiFi.h"`
  This library is automatically installed when you add the ESP8266 board to your IDE. It contains all the complex radio communication math so we don't have to write it!
- `WiFi.mode(WIFI_STA);`
  Sets the board to "Station" mode (meaning it acts like a phone connecting to a router, rather than acting like a router itself).
- `WiFi.scanNetworks();`
  Tells the internal antenna to listen for a few seconds and count how many networks it hears.

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad does not support ESP8266 or WiFi simulation.*

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


<!-- Streak Recovery 2026-06-15 -->


<!-- Streak Recovery 2026-06-16 -->

