# 03 — PWM LED Fade 🌅

Smoothly fade an LED in and out using Pulse Width Modulation (PWM).

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | 2 |

---

## Circuit

```
Arduino Pin 9 → 220Ω Resistor → LED (+) → LED (-) → GND
```

> ⚠️ Must use a **PWM-capable pin**: 3, 5, 6, 9, 10, or 11 on Arduino Uno

---

## How to Run

1. Open `pwm_led_fade.ino` in Arduino IDE
2. Upload to Arduino
3. Watch the LED gradually brighten and dim in a loop

---

## Concepts Learned

- **PWM (Pulse Width Modulation):** Simulates analog output by rapidly switching a digital pin ON/OFF
- **Duty Cycle:** % of time the signal is HIGH — higher duty cycle = brighter LED
- `analogWrite(pin, value)` — value from 0 (off) to 255 (full on)
- PWM frequency on Arduino Uno: ~490 Hz (pins 3,9,10,11) / ~980 Hz (pins 5,6)

---

## PWM Explained Simply

```
Full ON  (255): ████████████████  100% duty cycle
Half     (128): ████░░░░████░░░░   50% duty cycle
Low       (64): ██░░░░░░██░░░░░░   25% duty cycle
OFF        (0): ░░░░░░░░░░░░░░░░    0% duty cycle
```

---

## Try It Yourself

- Control brightness with a potentiometer on A0 using `analogRead()`
- Create a "breathing" effect with a sine wave pattern
- Fade two LEDs in opposite directions simultaneously
