int table = 7;
boolean affichage = true;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("**********************");
  Serial.println("Table de multiplication");
  Serial.print("La table de : ");
  Serial.println(table);
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(affichage) {
      for(i; i<=14; i++) {
        Serial.print(i);
        Serial.print(" x ");
        Serial.print(table);
        Serial.print(" = ");
        Serial.println(i * table);
      }
      affichage=false;
      Serial.println();
      Serial.println("**********************");
  }
}
