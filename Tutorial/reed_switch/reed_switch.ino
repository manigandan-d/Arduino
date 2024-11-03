#define REED_PIN 2
#define LED_PIN 13 

void setup() {
  pinMode(REED_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
}

void loop() {
  if(!digitalRead(REED_PIN)) {
    digitalWrite(LED_PIN, HIGH);
  }

  else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(100);
}
