# 📡 Setting up the ESP8266 / ESP32 in Arduino IDE

By default, the Arduino IDE only knows how to talk to official Arduino boards (like the Uno, Mega, and Nano). 

If you want to use a Wi-Fi enabled board like the **NodeMCU ESP8266** or **ESP32**, you have to teach the Arduino IDE how to understand them by installing a "Board Manager Core".

Here is exactly how to do it:

## Step 1: Add the Board URL
1. Open the Arduino IDE.
2. Go to **File** > **Preferences** (on Windows) or **Arduino** > **Preferences** (on Mac).
3. Look for the box near the bottom labeled **"Additional Boards Manager URLs"**.
4. Paste this exact link into the box:
   `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
   *(If you already have a link in there, separate them with a comma).*
5. Click **OK**.

## Step 2: Install the Board Core
1. Go to **Tools** > **Board** > **Boards Manager...**
2. A sidebar will open on the left. In the search bar, type `esp8266`.
3. You will see a result called **esp8266 by ESP8266 Community**.
4. Click **Install**. (This might take a few minutes as it downloads the files).

## Step 3: Select Your Board
1. Plug your ESP8266 board into your computer with a USB cable.
2. Go to **Tools** > **Board**. You will now see a new menu for ESP8266 boards!
3. Select your specific board. (If you bought a standard NodeMCU on Amazon, select **"NodeMCU 1.0 (ESP-12E Module)"**).
4. Go to **Tools** > **Port** and select the COM port it is plugged into, exactly like you did with the Uno!

You are now ready to upload code to your Wi-Fi board! 🚀
