// ============================================================
//  02 - Button Input
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Reads a push button. LED turns ON when button is pressed,
//  OFF when released. Demonstrates digital input reading.
// ============================================================

const int BUTTON_PIN = 2;   // Button connected to digital pin 2
const int LED_PIN    = 13;  // LED on pin 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // Use internal pull-up resistor
                                      // Button reads HIGH normally, LOW when pressed
  Serial.begin(9600);
  Serial.println("Button Input ready. Press the button!");
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {           // LOW = button pressed (with INPUT_PULLUP)
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Button PRESSED — LED ON");
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
