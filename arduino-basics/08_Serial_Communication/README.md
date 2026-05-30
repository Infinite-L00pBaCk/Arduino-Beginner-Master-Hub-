# 08 — Serial Communication 📡

Send commands from your PC to Arduino via Serial Monitor. Two-way UART communication in action.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| USB Cable | 1 |

> No extra components needed — just the Arduino and USB cable!

---

## How to Run

1. Upload `serial_communication.ino`
2. Open **Serial Monitor**: Tools → Serial Monitor (or Ctrl + Shift + M)
3. Set baud rate to **9600** and line ending to **Newline**
4. Type a command and press Enter:

| Command | Action |
|---|---|
| `ON` | Turn LED on |
| `OFF` | Turn LED off |
| `STATUS` | Print current LED state |
| `BLINK` | Blink LED 5 times |

---

## Concepts Learned

- `Serial.begin(baud)` — initialize UART at a given baud rate
- `Serial.print()` / `Serial.println()` — send data to PC
- `Serial.available()` — check if data has been received
- `Serial.readStringUntil('\n')` — read a full line of input
- `String.trim()` and `String.toUpperCase()` for clean input handling

---

## Baud Rate Reference

| Baud Rate | Use Case |
|---|---|
| 9600 | General use, sensors |
| 115200 | Faster data, GPS modules |
| 57600 | Bluetooth modules (HC-05) |

---

## Try It Yourself

- Add more commands like `HELP`, `RESET`, or `READ` (to print sensor data)
- Echo everything the user types back with a prefix
- Control multiple LEDs with commands like `LED1 ON`, `LED2 OFF`

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->

