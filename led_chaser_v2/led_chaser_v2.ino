// define the digital pins on which LEDs are connected 
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int t = 150;
const int buttonPin = 0; 
int count = 0;
unsigned long lastChangeMillis = 0;
bool patternRunning = false;

void setup() {
  // set the pins to OUTPUT mode 
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(buttonPin) == LOW && !patternRunning) {
    // Button is pressed
    delay(50); // Debounce delay to avoid multiple counts from a single press
    count++;
    
    if (count > 3) {
      count = 0; // Reset count to 0 when it reaches 4
    }
    
    lastChangeMillis = millis();
    patternRunning = true;
  }

  // Implement the selected pattern
  switch (count) {
    case 1:
      // Pattern 1
      if (millis() - lastChangeMillis <= 500) {
        digitalWrite(ledPins[0], HIGH);
        digitalWrite(ledPins[1], HIGH);
        digitalWrite(ledPins[6], HIGH);
        digitalWrite(ledPins[7], HIGH);
      } else if (millis() - lastChangeMillis <= 1000) {
        digitalWrite(ledPins[0], LOW);
        digitalWrite(ledPins[1], LOW);
        digitalWrite(ledPins[6], LOW);
        digitalWrite(ledPins[7], LOW);
      } else {
        lastChangeMillis = millis();
      }
      break;

    case 2:
      // Pattern 2
      if (millis() - lastChangeMillis <= 500) {
        for (int i = 0; i < 4; i++) {
          digitalWrite(ledPins[i * 2], HIGH);
          digitalWrite(ledPins[i * 2 + 1], HIGH);
        }
      } else if (millis() - lastChangeMillis <= 1000) {
        for (int i = 0; i < 4; i++) {
          digitalWrite(ledPins[i * 2], LOW);
          digitalWrite(ledPins[i * 2 + 1], LOW);
        }
      } else {
        lastChangeMillis = millis();
      }
      break;

    case 3:
      // Pattern 3
      if (millis() - lastChangeMillis <= t) {
        for (int i = 0; i < 8; i++) {
          digitalWrite(ledPins[i], HIGH);
        }
      } else if (millis() - lastChangeMillis <= 2 * t) {
        for (int i = 0; i < 8; i++) {
          digitalWrite(ledPins[i], LOW);
        }
      } else if (millis() - lastChangeMillis > 2 * t && millis() - lastChangeMillis <= 1000) {
        lastChangeMillis = millis();
        count = 0; // Reset the count when the pattern finishes
      }
      break;
  }
  
  // Reset the pattern when it's completed
  if (millis() - lastChangeMillis >= 1000) {
    patternRunning = false;
  }
}
