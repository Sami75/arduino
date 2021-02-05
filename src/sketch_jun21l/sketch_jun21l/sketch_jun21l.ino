//déclaration des variables
//LEDs sur les pins 2 à 6
//bouton sur le pin 7
int ledHautGauche = 2;
int ledBasGauche = 3;
int ledCentre = 4;
int ledHautDroite = 6;
int ledBasDroite = 5;
int button = 7;
int nbFinal = 0;

//initialisation
void setup()
{
  //appel de la fonction randomSeed() pour la séquence aléatoire
  //pin 2 à 6 en mode OUTPUT
  //pin 7 en mode INPUT_PULLUP
  //appel de la fonction setZero() pour tout éteindre
  Serial.begin(9600);
  randomSeed(analogRead(0));

  pinMode(button, INPUT_PULLUP);

  pinMode(ledHautGauche, OUTPUT);
  pinMode(ledBasGauche, OUTPUT);
  pinMode(ledCentre, OUTPUT);
  pinMode(ledHautDroite, OUTPUT);
  pinMode(ledBasDroite, OUTPUT);

  setZero();
}

//boucle principale
void loop()
{
  //test de l'état du bouton avec boolean etatBouton
  boolean state = digitalRead(button);
  Serial.print("bouton : ");
  Serial.println(state);
  if (!state)
  {
    for (int i = 2; i < 7; i++) //boucle for qui temporise l'affichage de plus en plus lentement
    {
      setZero();
      delay(100);
      int nbAlea = random(0, 6);
      Serial.println(nbAlea);
      allumage(nbAlea);
      //exctinction brève des LEDs (100ms)
      //tirage d'un nombre aléatoire avec la fonction random()
      //appel de la fonction d'allumage des LEDs
      //temporisation
      if (i == 6)
      {
        nbFinal = nbAlea;
      }
      delay(500 + i * 100);

    } //sortie de la boucle de temporisation
  }   //sortie du test bouton
  else
  {
    Serial.print("final : ");
    Serial.println(nbFinal);
    setZero();
    delay(300);
    allumage(nbFinal);
    delay(300);
  }
}

//déclaration de la fonction setZero()
void setZero()
{
  //code pour tout éteindre
  digitalWrite(ledHautGauche, LOW);
  digitalWrite(ledBasGauche, LOW);
  digitalWrite(ledCentre, LOW);
  digitalWrite(ledHautDroite, LOW);
  digitalWrite(ledBasDroite, LOW);
}
//déclaration de la fonction d'allugmage
void allumage(int nombre)
{
  //code pour l'affichage en fonction du nombre
  setZero(); //appel de la fonction qui éteint toutes les LED

  //il suffit maintenant d'allumer les bonnes diodes
  //en testant la valeur de 'nombre'
  if (nombre == 1)
  {
    digitalWrite(ledCentre, HIGH); //on allume la diode du centre
    return;                        //sortie de la fonction
  }
  if (nombre == 2)
  {
    //on allume les diodes haut/droite et bas/gauche
    digitalWrite(ledHautDroite, HIGH);
    digitalWrite(ledBasGauche, HIGH);
    return; //sortie de la fonction
  }
  if (nombre == 3)
  {
    //on allume les diodes centre, haut/gauche, bas/droite
    digitalWrite(ledHautDroite, HIGH);
    digitalWrite(ledCentre, HIGH);
    digitalWrite(ledBasGauche, HIGH);
    return; //sortie de la fonction
  }
  if (nombre == 4)
  {
    //on allume toutes les diodes sauf celle du centre
    digitalWrite(ledHautGauche, HIGH);
    digitalWrite(ledHautDroite, HIGH);
    digitalWrite(ledBasGauche, HIGH);
    digitalWrite(ledBasDroite, HIGH);
    return; //sortie de la fonction
  }
  if (nombre == 5)
  {
    //on allume toutes les diodes
    digitalWrite(ledHautGauche, HIGH);
    digitalWrite(ledBasGauche, HIGH);
    digitalWrite(ledHautDroite, HIGH);
    digitalWrite(ledBasDroite, HIGH);
    digitalWrite(ledCentre, HIGH);
    return; //sortie de la fonction
  }
  //inutile de tester le 0 car on a commencé par tout éteindre
  return; //sortie de la fonction
}
