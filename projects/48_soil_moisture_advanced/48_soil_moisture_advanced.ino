int moisturePin = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(moisturePin);
  int percent = map(val, 1023, 0, 0, 100);
  Serial.print("Moisture: ");
  Serial.print(percent);
  Serial.println("%");
  delay(1000);
}
