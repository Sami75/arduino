int nbAlea;
int ledHautGauche=2;
int ledBasGauche=3;
int ledCentre=4;
int ledHautDroite=6;
int ledBasDroite=5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));

  pinMode(ledHautGauche,OUTPUT);
  pinMode(ledBasGauche,OUTPUT);
  pinMode(ledCentre,OUTPUT);
  pinMode(ledHautDroite,OUTPUT);
  pinMode(ledBasDroite,OUTPUT);
  
  //allumage de tous les pins
    digitalWrite(ledHautGauche,LOW);
    digitalWrite(ledBasGauche,LOW);
    digitalWrite(ledCentre,LOW);
    digitalWrite(ledHautDroite,LOW);
    digitalWrite(ledBasDroite,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  nbAlea=random(0, 6);
  Serial.println(nbAlea);
 
  if(nbAlea == 5) 
  {
    digitalWrite(ledHautGauche,HIGH);
    digitalWrite(ledBasGauche,HIGH);
    digitalWrite(ledCentre,HIGH);
    digitalWrite(ledHautDroite,HIGH);
    digitalWrite(ledBasDroite,HIGH);
    
  } else if(nbAlea == 4) {
    digitalWrite(ledHautGauche,HIGH);
    digitalWrite(ledBasGauche,HIGH);
    digitalWrite(ledHautDroite,HIGH);
    digitalWrite(ledBasDroite,HIGH);
  } else if(nbAlea == 3) {
    digitalWrite(ledBasGauche,HIGH);
    digitalWrite(ledCentre,HIGH);
    digitalWrite(ledHautDroite,HIGH);
  } else if(nbAlea == 2) {
    digitalWrite(ledBasGauche,HIGH);
    digitalWrite(ledHautDroite,HIGH);
  } else if (nbAlea == 1) {
    digitalWrite(ledCentre,HIGH);
  } else {
    digitalWrite(ledHautGauche,LOW);
    digitalWrite(ledBasGauche,LOW);
    digitalWrite(ledCentre,LOW);
    digitalWrite(ledHautDroite,LOW);
    digitalWrite(ledBasDroite,LOW);
  }
  delay(500);
}
