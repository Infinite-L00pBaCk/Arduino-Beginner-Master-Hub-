int flamePin = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(flamePin);
  Serial.println(val);
  if (val < 100) {
    Serial.println("Fire Detected!");
  }
  delay(500);
}
