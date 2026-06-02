/*
  Project 08: Ultrasonic Distance Sensor
  Description: Measures distance in centimeters using an HC-SR04 sensor 
               and prints the results to the Serial Monitor.
  Author: Arduino-Beginner-Master-Hub
*/

// --- CONSTANTS ---
// Pin that sends the sound wave
const int TRIG_PIN = 9;  
// Pin that receives the echo
const int ECHO_PIN = 10; 

// --- VARIABLES ---
// 'long' is used for large numbers. We use it here to store time in microseconds.
long duration;           
// 'int' is fine for our distance in centimeters
int distance;            

void setup() {
  // Initialize the TRIG pin to send data out
  pinMode(TRIG_PIN, OUTPUT); 
  // Initialize the ECHO pin to read data in
  pinMode(ECHO_PIN, INPUT);  
  
  // Start serial communication at 9600 baud rate.
  // This allows the Arduino to send text to your computer screen!
  Serial.begin(9600);        
}

void loop() {
  // 1. CLEAR THE TRIGGER
  // Ensure the trigger is off for a brief moment before sending a pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // 2. SEND THE SOUND PULSE
  // Send a high signal for exactly 10 microseconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // 3. LISTEN FOR THE ECHO
  // pulseIn() waits for the pin to go HIGH, starts timing, 
  // then stops timing when it goes LOW. Returns time in microseconds.
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // 4. CALCULATE DISTANCE
  // Speed of sound is 0.034 cm/microsecond.
  // Divide by 2 because the wave travels out and back!
  distance = duration * 0.034 / 2;
  
  // 5. PRINT TO SERIAL MONITOR
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Wait a short moment before taking the next reading
  delay(100); 
}
