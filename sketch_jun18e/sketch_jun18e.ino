boolean affichage = true; //variable pour stopper l'affichage
int numPin = 13;
int compteur = 1;
int nbClignote = 0;

void setup()
{
    pinMode(numPin,OUTPUT);
    Serial.begin(9600);
    Serial.println("*** Debut du programme ***");
}

void loop()
{
    if (affichage) // test si affichage vaut true
    {
        //boucle de comptage
        //compteur s'augmente de 1 à chaque tour
        for (compteur;compteur<=20;compteur++)
        {
            Serial.println(compteur);
            
            //boucle de clignotement
            //compteur sert de limite à la boucle
            //donc le nombre de clignotements augmente à chaque tour
            for (nbClignote;nbClignote<compteur;nbClignote++)
            {   
                //allume
                digitalWrite(numPin,HIGH);
                delay(250);
                //eteind
                digitalWrite(numPin,LOW);
                delay(250);
            }
            delay(1000); //attente de 1s
        }
        affichage=false; // on passe affichage à false
        Serial.println("*** Ayé ! ***");
    }
}
