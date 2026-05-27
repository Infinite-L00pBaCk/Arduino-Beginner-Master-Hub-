# 📖 Arduino Syntax Cheat Sheet

This guide covers the essential built-in functions and data types you will use in almost every Arduino project. 

---

## 🏛️ Program Structure

Every Arduino sketch *must* contain these two functions:

```cpp
void setup() {
  // This code runs ONCE when the Arduino powers on or resets.
  // Use it to configure pins and initialize libraries.
}

void loop() {
  // This code runs FOREVER in a loop.
  // This is where the main logic of your program lives.
}
```

---

## 🔌 Pin Configuration

Before using a pin, you must tell the Arduino whether it is acting as an **INPUT** (reading a sensor) or an **OUTPUT** (powering an LED).

### `pinMode(pin, mode)`
Configures a specific pin.
- `pin`: The pin number (e.g., `13`, `A0`).
- `mode`: `INPUT`, `OUTPUT`, or `INPUT_PULLUP`.

**Example:**
```cpp
void setup() {
  pinMode(13, OUTPUT); // Sets pin 13 to power an LED
  pinMode(2, INPUT);   // Sets pin 2 to read a button
}
```

---

## 💡 Digital I/O (On / Off)

Digital signals only have two states: `HIGH` (On / 5 Volts) or `LOW` (Off / 0 Volts).

### `digitalWrite(pin, value)`
Sends a HIGH or LOW signal to a pin.
**Example:**
```cpp
digitalWrite(13, HIGH); // Turns the LED on pin 13 ON
digitalWrite(13, LOW);  // Turns the LED on pin 13 OFF
```

### `digitalRead(pin)`
Reads the state of a pin. Returns `HIGH` or `LOW`.
**Example:**
```cpp
int buttonState = digitalRead(2); // Reads the button connected to pin 2
```

---

## 🎚️ Analog I/O (Range of Values)

Analog signals can represent a range of values (e.g., brightness, volume, distance).

### `analogRead(pin)`
Reads the voltage from an analog pin (`A0` to `A5`). Returns a value between `0` and `1023`.
**Example:**
```cpp
int sensorValue = analogRead(A0); // Reads a potentiometer on pin A0
```

### `analogWrite(pin, value)`
Sends a PWM (Pulse Width Modulation) signal to simulate an analog output. Only works on pins marked with a tilde `~` (e.g., 3, 5, 6, 9, 10, 11).
- `value`: A number between `0` (always off) and `255` (always on).
**Example:**
```cpp
analogWrite(9, 127); // Sets an LED on pin 9 to 50% brightness
```

---

## 📦 Basic Data Types

Variables store data. You must declare the *type* of data a variable will hold.

| Data Type | What it stores | Example |
| :--- | :--- | :--- |
| `int` | Whole numbers (integers). Range: -32,768 to 32,767. | `int ledPin = 13;` |
| `float` | Numbers with decimal points. | `float temperature = 24.5;` |
| `boolean` (or `bool`) | True or False values. | `bool isPressed = true;` |
| `char` | A single character (uses single quotes). | `char grade = 'A';` |
| `String` | Text strings (uses double quotes). | `String message = "Hello";` |

---

## ⏱️ Time Functions

### `delay(milliseconds)`
Pauses the program for a specific amount of time. 1000 milliseconds = 1 second.
**Example:**
```cpp
delay(1000); // Wait for 1 second
```
