/*
  Project 04: Analog Potentiometer
  Description: Reads an analog value from a potentiometer to control the brightness of an LED.
  Author: Arduino-Beginner-Master-Hub
*/

// --- CONSTANTS ---
// We use A0 for the analog input from the potentiometer
const int POT_PIN = A0;  
// We MUST use a PWM pin (like 9, marked with a ~) to fade an LED
const int LED_PIN = 9;   

// --- VARIABLES ---
// Variable to store the raw value coming from the potentiometer (0 to 1023)
int potValue = 0;        
// Variable to store the converted value for the LED brightness (0 to 255)
int ledBrightness = 0;   

void setup() {
  // Initialize the LED pin as an output.
  // Note: We do not strictly need to define pin A0 as INPUT, 
  // analogRead() does this automatically, but doing it is good practice!
  pinMode(LED_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
  
  // Start the serial monitor so we can see the numbers on our computer screen
  Serial.begin(9600);
}

void loop() {
  // 1. READ THE SENSOR
  // Read the analog value from the potentiometer.
  // This will be a number between 0 (knob turned all the way left) 
  // and 1023 (knob turned all the way right).
  potValue = analogRead(POT_PIN);

  // 2. CONVERT THE RANGE
  // The LED needs a value between 0 and 255.
  // We use the map() function to scale the 0-1023 range down to 0-255.
  // Syntax: map(value_to_convert, fromLow, fromHigh, toLow, toHigh)
  ledBrightness = map(potValue, 0, 1023, 0, 255);

  // 3. FADE THE LED
  // Apply the calculated brightness to the LED using PWM
  analogWrite(LED_PIN, ledBrightness);

  // 4. PRINT THE DATA (Optional but helpful for debugging)
  Serial.print("Raw Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print("  |  Mapped LED Brightness: ");
  Serial.println(ledBrightness);

  // A tiny delay makes the fading look smoother and stabilizes the readings
  delay(10); 
}
