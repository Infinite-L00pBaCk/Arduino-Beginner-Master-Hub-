// ============================================================
//  09 - Mini Project: Traffic Light Simulator
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Simulates a standard traffic light sequence:
//  RED (stop) → GREEN (go) → YELLOW (slow down) → repeat
// ============================================================

const int RED_PIN    = 11;
const int YELLOW_PIN = 10;
const int GREEN_PIN  = 9;

void allOff() {
  digitalWrite(RED_PIN,    LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN,  LOW);
}

void setLight(int pin, int duration, const char* label) {
  allOff();
  digitalWrite(pin, HIGH);
  Serial.print("  LIGHT: ");
  Serial.println(label);
  delay(duration);
}

void setup() {
  pinMode(RED_PIN,    OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN,  OUTPUT);
  Serial.begin(9600);
  Serial.println("Traffic Light Simulator Started!");
  allOff();
}

void loop() {
  setLight(RED_PIN,    4000, "RED    — STOP");
  setLight(GREEN_PIN,  3000, "GREEN  — GO");
  setLight(YELLOW_PIN, 1500, "YELLOW — SLOW DOWN");
}
