void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Communication Initialisée");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Je suis dans une boucle");
  delay(2000);
}
