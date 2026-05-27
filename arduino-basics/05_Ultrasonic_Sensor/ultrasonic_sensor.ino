// ============================================================
//  05 - Ultrasonic Distance Sensor (HC-SR04)
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Measures distance using the HC-SR04 ultrasonic sensor
//  and prints the result to Serial Monitor.
// ============================================================

const int TRIG_PIN = 9;   // Trigger pin → sends ultrasonic pulse
const int ECHO_PIN = 10;  // Echo pin   → receives the reflected pulse

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor ready!");
}

long measureDistance() {
  // Send a 10-microsecond HIGH pulse to trigger
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure how long the echo pin stays HIGH (in microseconds)
  long duration = pulseIn(ECHO_PIN, HIGH);

  // Convert to distance in cm
  // Speed of sound = 343 m/s = 0.0343 cm/µs
  // Distance = (duration / 2) * 0.0343
  long distanceCm = duration * 0.034 / 2;
  return distanceCm;
}

void loop() {
  long distance = measureDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Alert if object is very close
  if (distance < 10) {
    Serial.println("  ⚠ OBSTACLE DETECTED — Too close!");
  }

  delay(300);  // Measure ~3 times per second
}
