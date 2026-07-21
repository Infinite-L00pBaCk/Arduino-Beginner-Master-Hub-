int soundPin = A0;
int ledPin = 13;
void setup() {
  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(soundPin);
  Serial.println(val);
  if (val > 500) {
    digitalWrite(ledPin, HIGH);
    delay(100);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
