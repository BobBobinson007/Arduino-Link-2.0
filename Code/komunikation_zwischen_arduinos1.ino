const int sensorPin = A0;      // Eingangsspannung
const int ledPin = 12;         // eingebaute LED auf dem Uno
const float threshold = 0.5;   // 0,5 Volt Schwelle

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int rawValue = analogRead(sensorPin);       // 0 – 1023
  float voltage = (rawValue / 1023.0) * 5.0;  // Spannung in Volt berechnen

  if (voltage > threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
