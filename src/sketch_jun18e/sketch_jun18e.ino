int numPin;

void setup()
{
  numPin = 13;
  pinMode(numPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("*** Debut du programme ***");
  for (int compteur = 1; compteur <= 20; compteur++)
  {
    Serial.println(compteur);
    //boucle de clignotement
    //compteur sert de limite à la boucle
    //donc le nombre de clignotements augmente à chaque tour
    for (int nbClignote = 0; nbClignote < compteur; nbClignote++)
    {
      //allume
      digitalWrite(numPin, HIGH);
      delay(250);
      //eteind
      digitalWrite(numPin, LOW);
      delay(250);
    }
    delay(1000); //attente de 1s
  }
  Serial.println("*** Ayé ! ***");
}

void loop()
{

}
