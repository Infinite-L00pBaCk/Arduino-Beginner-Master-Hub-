# 02 — Button Input 🔘

Read a push button and control an LED. Introduces digital input and pull-up resistors.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| Push Button | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | 4 |

---

## Circuit

```
Button: One leg → Pin 2 | Other leg → GND
LED:    Anode → 220Ω → Pin 13 | Cathode → GND
```

> We use `INPUT_PULLUP` so no external pull-up resistor is needed for the button.

---

## How to Run

1. Open `button_input.ino` in Arduino IDE
2. Upload to Arduino
3. Press the button — LED turns ON
4. Release — LED turns OFF
5. Open Serial Monitor (9600 baud) to see press events

---

## Concepts Learned

- `pinMode(pin, INPUT_PULLUP)` — enables internal 20kΩ pull-up resistor
- `digitalRead(pin)` — reads HIGH or LOW from a pin
- With `INPUT_PULLUP`: pin reads **LOW when pressed**, HIGH when released
- Why pull-up resistors are needed (to avoid floating pin readings)

---

## Try It Yourself

- Count button presses and print the count to Serial Monitor
- Toggle the LED on each button press (instead of hold)
- Add debounce logic to avoid multiple triggers from one press

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->

