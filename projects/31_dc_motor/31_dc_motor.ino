const int motorPin = 9; // Pin connected to the base of the transistor

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Turn motor on
  digitalWrite(motorPin, HIGH);
  delay(2000); // Run for 2 seconds

  // Turn motor off
  digitalWrite(motorPin, LOW);
  delay(2000); // Stop for 2 seconds
}
