#include <IRremote.h>

const int IR_SEND_PIN = 3; // Pin connected to the IR LED

void setup() {
  Serial.begin(9600);
  IrSender.begin(IR_SEND_PIN); // Initialize the IR sender on pin 3
  Serial.println("IR Transmitter Ready!");
  Serial.println("Sending NEC signal every 3 seconds...");
}

void loop() {
  // Send a sample NEC command
  // Address: 0x00, Command: 0x0C (common power toggle code)
  Serial.println("Sending NEC: Address=0x00, Command=0x0C");
  IrSender.sendNEC(0x00, 0x0C, 0); // address, command, repeats

  delay(3000); // Wait 3 seconds before sending the next signal
}
