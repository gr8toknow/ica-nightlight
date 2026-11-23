// led.ino - controls the LED brightness (0 = off, 255 = full brightness)

int ledBrightness = 0;   // remembers the current brightness

void setLed(int brightness) {
  ledBrightness = constrain(brightness, 0, 255);
  analogWrite(LED_PIN, ledBrightness);
}

// Moves the LED toward the target brightness.
void fadeTowards(int target) {
  if (ledBrightness < target) {
    setLed(ledBrightness + 1);
  } else if (ledBrightness > target) {
    setLed(ledBrightness - 1);
  }
}

// TODO Task 7 (Developer C): add blinkLed() below this line.
