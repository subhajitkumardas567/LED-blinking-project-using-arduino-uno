// Define the LED pins
const int ledPins[] = {11,12,13};
const int numLeds = sizeof(ledPins)/sizeof(ledPins[0]);

void setup() {
  // Initialize all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn all LEDs ON
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(1000); // Wait for 1 second

  // Turn all LEDs OFF
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(1000); // Wait for 1 second
}
