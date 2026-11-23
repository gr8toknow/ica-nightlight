// logger.ino - prints status messages to the Serial Monitor (9600 baud)

// TODO Task 4 (Project Manager): add modeName() here.
const char* modeName(Mode mode) {
  switch (mode) {
    case MODE_OFF:  return "OFF";
    case MODE_AUTO: return "AUTO";
    case MODE_ON:   return "ON";
    default:        return "UNKNOWN";
  }
}

void logStatus(int light) {
  // TODO Task 4 (Project Manager): print one tidy status line twice per second.
  static unsigned long lastLogTime = 0;
  unsigned long now = millis();

  if (now - lastLogTime >= LOG_INTERVAL_MS) {
    lastLogTime = now;
        Serial.print("mode=");
Serial.print(modeName(currentMode));
Serial.print(" light=");
Serial.println(light);
    Serial.println(ledBrightness);
    Serial.println(light);


}
}
// TODO Task 6 (Developer B): add logBanner() below this line.
