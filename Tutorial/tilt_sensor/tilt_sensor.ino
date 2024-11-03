#define TILT_PIN 2 
#define LED_PIN 13 
#define BUZZ_PIN 8 

void setup() {
  pinMode(TILT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZ_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZ_PIN, LOW);
}

void loop() {
  if(digitalRead(TILT_PIN)) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZ_PIN, HIGH);

    delay(300);

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZ_PIN, LOW);

    delay(300);
  }
}