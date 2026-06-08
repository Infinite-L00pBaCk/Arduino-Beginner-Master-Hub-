# 09b — Digital Clock ⏰

A fully functional digital clock displayed on a 16x2 LCD. Combines LCD (Project 06) and introduces the non-blocking `millis()` timer pattern — essential for real Arduino projects.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| 16x2 LCD with I2C module | 1 |
| Breadboard | 1 |
| Jumper Wires | 4 |

---

## Circuit

```
I2C LCD Pin → Arduino
  GND → GND
  VCC → 5V
  SDA → A4
  SCL → A5
```

---

## Library Needed

- `LiquidCrystal I2C` by Frank de Brabander (same as Project 06)

---

## How to Run

1. Wire up LCD as shown
2. Upload `digital_clock.ino`
3. Clock starts from 00:00:00 and counts up
4. Open Serial Monitor to see time printed every second

---

## Key Concept — millis() vs delay()

```cpp
// ❌ delay() blocks everything — no other code runs during wait
delay(1000);

// ✅ millis() is non-blocking — Arduino can do other things
if (millis() - previousMillis >= 1000) {
    previousMillis = millis();
    // do the timed action
}
```

This is the **most important pattern** in Arduino programming. Use `millis()` in any real project.

---

## Try It Yourself

- Add buttons to set hours and minutes manually
- Add a DS3231 RTC (Real Time Clock) module so time survives power cuts
- Add an alarm with a buzzer at a set time

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->

