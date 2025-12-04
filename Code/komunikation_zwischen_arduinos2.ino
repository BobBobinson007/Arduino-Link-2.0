const int buttonPin = 2;   // Taster liefert 1 wenn gedrückt (wie du sagst)
const int outPin = 3;      // Ausgang zum anderen Arduino

void setup() {
  pinMode(buttonPin, INPUT);  // ACHTUNG: INPUT (kein INPUT_PULLUP), siehe Hinweis weiter unten
  pinMode(outPin, OUTPUT);
  digitalWrite(outPin, LOW);  // sicherstellen, dass Ausgang start LOW ist
}

void loop() {
  int buttonState = digitalRead(buttonPin); // ergibt 1 oder 0

  if (buttonState == 1) {
    digitalWrite(outPin, HIGH); // sende
  } else {
    digitalWrite(outPin, LOW);  // sende nichts / aus
  }
}

