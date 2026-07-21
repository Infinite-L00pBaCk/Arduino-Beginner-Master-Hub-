int pirPin = 2;
int ledPin = 13;
void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int motion = digitalRead(pirPin);
  digitalWrite(ledPin, motion);
  Serial.println(motion ? "Motion Detected!" : "No Motion");
  delay(500);
}
