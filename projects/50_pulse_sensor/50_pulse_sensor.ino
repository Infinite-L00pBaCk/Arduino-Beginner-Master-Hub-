int pulsePin = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(pulsePin);
  Serial.println(val);
  delay(20);
}
