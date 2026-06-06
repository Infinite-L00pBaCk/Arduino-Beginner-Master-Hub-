/*
  Project 24: RFID Door Lock Basics
  Description: Scans an RFID tag and prints its unique ID to the Serial Monitor.
  Author: Arduino-Beginner-Master-Hub
*/

#include <SPI.h>
#include <MFRC522.h> // Make sure you installed this from the Library Manager!

#define SS_PIN 10  // SDA (Slave Select) Pin
#define RST_PIN 9  // Reset Pin

// Create an instance of the MFRC522 reader
MFRC522 mfrc522(SS_PIN, RST_PIN); 

void setup() {
  Serial.begin(9600); // Start serial communication
  SPI.begin();        // Initialize the SPI bus
  mfrc522.PCD_Init(); // Initialize the MFRC522 card reader
  
  Serial.println("RFID Reader Ready!");
  Serial.println("Tap an RFID card or blue key fob against the scanner...");
}

void loop() {
  // Look for a new card. If none is present, stop here and start the loop over.
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }
  
  // A card was found! Now try to read its serial number data.
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  
  // If we successfully read the data, print the Unique ID (UID)
  Serial.print("Card Detected! Unique ID (UID):");
  
  // The UID is stored in chunks (bytes). We loop through them to print the full ID.
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX); // Print in Hexadecimal format
  }
  Serial.println(); // Print a blank line to keep things neat
  
  // Instruct the card to go into a "Halt" state so we don't read it 1,000 times a second
  mfrc522.PICC_HaltA(); 
}
