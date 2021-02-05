int leds[5] = {13, 11, 9, 7, 4}, i, j;
void setup() {
  // put your setup code here, to run once:
  for (i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 4; i >=0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(250);
  }

  for (i = 4; i >=0; i--) {
    digitalWrite(leds[i], LOW);
  }

  for (i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(250);
  }

  for (i = 0; i < 5; i++) {
    digitalWrite(leds[i], LOW);
  }

    for (i = 4; i >=0; i--) {
    digitalWrite(leds[i], HIGH);
  }

  for (i = 4; i >=0; i--) {
    digitalWrite(leds[i], LOW);
    delay(250);
  }

  for (i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
  }

  for (i = 0; i < 5; i++) {
    digitalWrite(leds[i], LOW);
    delay(250);
  }

}
