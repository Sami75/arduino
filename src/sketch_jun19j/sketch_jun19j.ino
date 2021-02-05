/*
le bouton poussoir est connecté au pin 2 avec une résistance pull-down de 10KΩ
les LED sont connectées au pins 4 et 6 avec des résistances de 220Ω
*/

//déclaration des variables
int pinBouton;
int pinLed1, pinLed2;
void setup()
{
  //initialisation des variables
  pinBouton = 2;
  pinLed1 = 4;
  pinLed2 = 6;
  //définition des modes
  pinMode(pinBouton, INPUT); //mode lecture pour le bouton
  pinMode(pinLed1, OUTPUT); //mode écriture pour led1
  pinMode(pinLed2, OUTPUT); //mode écriture pour led2

}
void loop()
{
  //lecture de l'état du bouton et stockage dans etatBouton
  boolean etatBouton = digitalRead(pinBouton);
  //test des conditions
  if (etatBouton)//test si bouton appuyé
  {
    digitalWrite(pinLed1,LOW); //led1 éteinte
    digitalWrite(pinLed2,HIGH); //led2 allumée
  }
   else //test si bouton levé
  {
    digitalWrite(pinLed1,HIGH); //Led1 allumée
    digitalWrite(pinLed2,LOW); //led2 éteinte
  }
  delay(100); //petite attente
}
