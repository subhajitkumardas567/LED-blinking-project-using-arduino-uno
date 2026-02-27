# LED-blinking-project-using-arduino-uno

# LED Blinking Project using Arduino Uno

## 📌 Project Overview
This project demonstrates a simple LED blinking program using the Arduino Uno.  
It is a beginner-level embedded systems project used to understand digital output control and basic Arduino programming.

The LED turns ON and OFF at a fixed time interval using the `digitalWrite()` and `delay()` functions.

---

## 🛠 Components Required
- Arduino Uno
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connection
- Connect the LED anode (+) to digital pin 13 of Arduino.
- Connect the LED cathode (–) to GND through a 220Ω resistor.

You can also use the built-in LED connected to pin 13.

---

## 💻 Arduino Code

```cpp
void setup() {
  pinMode(13, OUTPUT);   // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // LED ON
  delay(1000);             // Wait 1 second
  digitalWrite(13, LOW);   // LED OFF
  delay(1000);             // Wait 1 second
}
