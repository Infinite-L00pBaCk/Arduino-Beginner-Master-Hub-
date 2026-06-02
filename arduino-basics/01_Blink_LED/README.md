# 01 — Blink LED 💡

The "Hello World" of Arduino. Blinks an LED on and off every second.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| LED (any color) | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | 2 |

> **Shortcut:** Pin 13 has a built-in LED on most Arduino boards — no external components needed to test!

---

## Circuit

```
Arduino Pin 13 → 220Ω Resistor → LED (long leg/anode) → LED (short leg/cathode) → GND
```

```
  Arduino          Breadboard
  ┌──────┐
  │  13  ├──────[220Ω]──────►|──────┐
  │      │                  LED     │
  │  GND ├────────────────────────── ┘
  └──────┘
```

---

## How to Run

1. Open `blink_led.ino` in Arduino IDE
2. Connect Arduino to PC
3. Select **Board:** Arduino Uno, **Port:** correct COM port
4. Click **Upload**
5. Watch the LED blink!
6. Open Serial Monitor (9600 baud) to see ON/OFF messages

---

## Concepts Learned

- `pinMode(pin, OUTPUT)` — configure a pin as output
- `digitalWrite(pin, HIGH/LOW)` — turn pin on or off
- `delay(ms)` — pause execution for milliseconds
- `setup()` runs once on startup; `loop()` runs forever

---

## Try It Yourself

- Change the delay to `500` — the LED blinks twice as fast
- Add a second LED on pin 12 and alternate them
- Make an SOS pattern: short-short-short long-long-long short-short-short

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->

