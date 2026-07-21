import os
import subprocess
import time

def run_git(commands):
    for cmd in commands:
        print(f"Running: {cmd}")
        subprocess.run(cmd, shell=True, check=True)

def write_file(path, content):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w", encoding="utf-8") as f:
        f.write(content)

projects = [
    {
        "id": 41,
        "name": "PIR Motion Sensor",
        "folder": "projects/41_pir_motion",
        "ino": "41_pir_motion.ino",
        "ino_code": "int pirPin = 2;\nint ledPin = 13;\nvoid setup() {\n  pinMode(pirPin, INPUT);\n  pinMode(ledPin, OUTPUT);\n  Serial.begin(9600);\n}\nvoid loop() {\n  int motion = digitalRead(pirPin);\n  digitalWrite(ledPin, motion);\n  Serial.println(motion ? \"Motion Detected!\" : \"No Motion\");\n  delay(500);\n}\n",
        "readme": "# Project 41: PIR Motion Sensor\n\nThis project demonstrates how to use a PIR (Passive Infrared) motion sensor to detect movement.\n\n## Components\n- Arduino Uno\n- PIR Motion Sensor\n- LED\n- Jumper wires\n",
        "commit": "feat: Add Project 41 (PIR Motion Sensor)"
    },
    {
        "id": 42,
        "name": "Sound Sensor Module",
        "folder": "projects/42_sound_sensor",
        "ino": "42_sound_sensor.ino",
        "ino_code": "int soundPin = A0;\nint ledPin = 13;\nvoid setup() {\n  pinMode(soundPin, INPUT);\n  pinMode(ledPin, OUTPUT);\n  Serial.begin(9600);\n}\nvoid loop() {\n  int val = analogRead(soundPin);\n  Serial.println(val);\n  if (val > 500) {\n    digitalWrite(ledPin, HIGH);\n    delay(100);\n  } else {\n    digitalWrite(ledPin, LOW);\n  }\n}\n",
        "readme": "# Project 42: Sound Sensor Module\n\nDetect sound levels using an analog sound sensor and light up an LED when it's loud.\n",
        "commit": "feat: Add Project 42 (Sound Sensor Module)"
    },
    {
        "id": 43,
        "name": "Rotary Encoder",
        "folder": "projects/43_rotary_encoder",
        "ino": "43_rotary_encoder.ino",
        "ino_code": "#define CLK 2\n#define DT 3\nint counter = 0;\nint currentStateCLK;\nint lastStateCLK;\nvoid setup() {\n  pinMode(CLK, INPUT);\n  pinMode(DT, INPUT);\n  Serial.begin(9600);\n  lastStateCLK = digitalRead(CLK);\n}\nvoid loop() {\n  currentStateCLK = digitalRead(CLK);\n  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){\n    if (digitalRead(DT) != currentStateCLK) {\n      counter --;\n    } else {\n      counter ++;\n    }\n    Serial.print(\"Direction: \");\n    Serial.print(counter);\n    Serial.println(\"\");\n  }\n  lastStateCLK = currentStateCLK;\n}\n",
        "readme": "# Project 43: Rotary Encoder\n\nRead values from a rotary encoder.\n",
        "commit": "feat: Add Project 43 (Rotary Encoder)"
    },
    {
        "id": 44,
        "name": "4x4 Keypad",
        "folder": "projects/44_4x4_keypad",
        "ino": "44_4x4_keypad.ino",
        "ino_code": "#include <Keypad.h>\nconst byte ROWS = 4; \nconst byte COLS = 4; \nchar keys[ROWS][COLS] = {\n  {'1','2','3','A'},\n  {'4','5','6','B'},\n  {'7','8','9','C'},\n  {'*','0','#','D'}\n};\nbyte rowPins[ROWS] = {9, 8, 7, 6};\nbyte colPins[COLS] = {5, 4, 3, 2};\nKeypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);\nvoid setup(){\n  Serial.begin(9600);\n}\nvoid loop(){\n  char key = keypad.getKey();\n  if (key){\n    Serial.println(key);\n  }\n}\n",
        "readme": "# Project 44: 4x4 Keypad\n\nInterface a 4x4 matrix keypad with Arduino.\n",
        "commit": "feat: Add Project 44 (4x4 Keypad)"
    },
    {
        "id": 45,
        "name": "Relay Module",
        "folder": "projects/45_relay_module",
        "ino": "45_relay_module.ino",
        "ino_code": "int relayPin = 8;\nvoid setup() {\n  pinMode(relayPin, OUTPUT);\n}\nvoid loop() {\n  digitalWrite(relayPin, HIGH);\n  delay(2000);\n  digitalWrite(relayPin, LOW);\n  delay(2000);\n}\n",
        "readme": "# Project 45: Relay Module\n\nControl high voltage devices safely using a 5V relay module.\n",
        "commit": "feat: Add Project 45 (Relay Module)"
    },
    {
        "id": 46,
        "name": "RTC DS3231",
        "folder": "projects/46_rtc_ds3231",
        "ino": "46_rtc_ds3231.ino",
        "ino_code": "#include <Wire.h>\n#include \"RTClib.h\"\nRTC_DS3231 rtc;\nvoid setup () {\n  Serial.begin(9600);\n  if (! rtc.begin()) {\n    Serial.println(\"Couldn't find RTC\");\n    while (1);\n  }\n  if (rtc.lostPower()) {\n    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));\n  }\n}\nvoid loop () {\n  DateTime now = rtc.now();\n  Serial.print(now.year(), DEC);\n  Serial.print('/');\n  Serial.print(now.month(), DEC);\n  Serial.print('/');\n  Serial.println(now.day(), DEC);\n  delay(3000);\n}\n",
        "readme": "# Project 46: RTC DS3231\n\nKeep track of precise time using the DS3231 Real Time Clock module.\n",
        "commit": "feat: Add Project 46 (RTC DS3231)"
    },
    {
        "id": 47,
        "name": "SD Card Module",
        "folder": "projects/47_sd_card_module",
        "ino": "47_sd_card_module.ino",
        "ino_code": "#include <SPI.h>\n#include <SD.h>\nFile myFile;\nvoid setup() {\n  Serial.begin(9600);\n  if (!SD.begin(4)) {\n    Serial.println(\"initialization failed!\");\n    return;\n  }\n  myFile = SD.open(\"test.txt\", FILE_WRITE);\n  if (myFile) {\n    myFile.println(\"testing 1, 2, 3.\");\n    myFile.close();\n    Serial.println(\"done.\");\n  }\n}\nvoid loop() {\n}\n",
        "readme": "# Project 47: SD Card Module\n\nRead and write data to an SD card using SPI communication.\n",
        "commit": "feat: Add Project 47 (SD Card Module)"
    },
    {
        "id": 48,
        "name": "Advanced Soil Moisture",
        "folder": "projects/48_soil_moisture_advanced",
        "ino": "48_soil_moisture_advanced.ino",
        "ino_code": "int moisturePin = A0;\nvoid setup() {\n  Serial.begin(9600);\n}\nvoid loop() {\n  int val = analogRead(moisturePin);\n  int percent = map(val, 1023, 0, 0, 100);\n  Serial.print(\"Moisture: \");\n  Serial.print(percent);\n  Serial.println(\"%\");\n  delay(1000);\n}\n",
        "readme": "# Project 48: Advanced Soil Moisture\n\nMonitor soil moisture percentages with an analog soil moisture sensor.\n",
        "commit": "feat: Add Project 48 (Advanced Soil Moisture)"
    },
    {
        "id": 49,
        "name": "Flame Sensor",
        "folder": "projects/49_flame_sensor",
        "ino": "49_flame_sensor.ino",
        "ino_code": "int flamePin = A0;\nvoid setup() {\n  Serial.begin(9600);\n}\nvoid loop() {\n  int val = analogRead(flamePin);\n  Serial.println(val);\n  if (val < 100) {\n    Serial.println(\"Fire Detected!\");\n  }\n  delay(500);\n}\n",
        "readme": "# Project 49: Flame Sensor\n\nDetect fire or IR light sources using a flame sensor.\n",
        "commit": "feat: Add Project 49 (Flame Sensor)"
    },
    {
        "id": 50,
        "name": "Pulse Sensor",
        "folder": "projects/50_pulse_sensor",
        "ino": "50_pulse_sensor.ino",
        "ino_code": "int pulsePin = A0;\nvoid setup() {\n  Serial.begin(9600);\n}\nvoid loop() {\n  int val = analogRead(pulsePin);\n  Serial.println(val);\n  delay(20);\n}\n",
        "readme": "# Project 50: Heart Rate Pulse Sensor\n\nRead analog heart rate data from a pulse sensor module.\n",
        "commit": "feat: Add Project 50 (Heart Rate Pulse Sensor)"
    }
]

for proj in projects:
    write_file(f"{proj['folder']}/{proj['ino']}", proj['ino_code'])
    write_file(f"{proj['folder']}/README.md", proj['readme'])
    run_git([
        "git add .",
        f"git commit -m \"{proj['commit']}\"",
        "git push origin main"
    ])
    time.sleep(1)

# Step 11: Update main README for 41-45
with open("README.md", "a", encoding="utf-8") as f:
    f.write("\n## Projects 41-45\n- Project 41: PIR Motion Sensor\n- Project 42: Sound Sensor\n- Project 43: Rotary Encoder\n- Project 44: 4x4 Keypad\n- Project 45: Relay Module\n")
run_git(["git add README.md", "git commit -m \"docs: Update roadmap with Projects 41-45\"", "git push origin main"])

# Step 12: Update main README for 46-50
with open("README.md", "a", encoding="utf-8") as f:
    f.write("\n## Projects 46-50\n- Project 46: RTC DS3231\n- Project 47: SD Card Module\n- Project 48: Advanced Soil Moisture\n- Project 49: Flame Sensor\n- Project 50: Pulse Sensor\n")
run_git(["git add README.md", "git commit -m \"docs: Update roadmap with Projects 46-50\"", "git push origin main"])

# Step 13: Glossary
glossary = "# Components Glossary\n\n- PIR Sensor: Motion detection\n- Sound Sensor: Audio levels\n- Rotary Encoder: Rotation input\n- Keypad: 4x4 buttons\n- Relay: Switch for high power\n- RTC DS3231: Timekeeping\n- SD Card Module: Storage\n- Soil Moisture: Water level\n- Flame Sensor: Fire detection\n- Pulse Sensor: Heart rate\n"
write_file("docs/components_glossary.md", glossary)
run_git(["git add docs/components_glossary.md", "git commit -m \"docs: Add new components to glossary\"", "git push origin main"])

# Step 14: Troubleshooting
troubleshooting = "# Troubleshooting Guide\n\nCommon issues:\n- COM port not found: Check cable.\n- Board not recognized: Install drivers.\n- Upload error: Check correct board is selected.\n"
write_file("docs/troubleshooting.md", troubleshooting)
run_git(["git add docs/troubleshooting.md", "git commit -m \"docs: Add common Arduino troubleshooting guide\"", "git push origin main"])

# Step 15: Sensor basics
sensor_basics = "# Sensor Basics\n\n## Analog vs Digital\n- Analog sensors output a continuous range of values.\n- Digital sensors output a discrete high (1) or low (0) state.\n"
write_file("docs/sensor_basics.md", sensor_basics)
run_git(["git add docs/sensor_basics.md", "git commit -m \"docs: Add sensor basics and types guide\"", "git push origin main"])

print("All tasks completed.")
