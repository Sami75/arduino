#include <Arduino.h>
int ledHautGauche = 2, ledBasGauche = 3, ledCentre = 4, ledHautDroite = 6, ledBasDroite = 5, button = 7, nbFinal = 0;

void setZero();
void allumage(int nombre);

void setup()
{
    randomSeed(analogRead(0));

    pinMode(button, INPUT_PULLUP);

    pinMode(ledHautGauche, OUTPUT);
    pinMode(ledBasGauche, OUTPUT);
    pinMode(ledCentre, OUTPUT);
    pinMode(ledHautDroite, OUTPUT);
    pinMode(ledBasDroite, OUTPUT);

    setZero();
}

void loop()
{
    boolean state = digitalRead(button);

    if (!state)
    {
        for (int i = 2; i < 7; i++)
        {
            setZero();
            delay(100);

            int nbAlea = random(0, 6);
            allumage(nbAlea);

            if (i == 6)
                nbFinal = nbAlea;

            delay(500 + i * 100);
        }
    }
    else
    {
        setZero();
        delay(300);

        allumage(nbFinal);
        delay(300);
    }
}

void setZero()
{
    digitalWrite(ledHautGauche, LOW);
    digitalWrite(ledBasGauche, LOW);
    digitalWrite(ledCentre, LOW);
    digitalWrite(ledHautDroite, LOW);
    digitalWrite(ledBasDroite, LOW);
}

void allumage(int nombre)
{

    setZero();

    if (nombre == 1)
    {
        digitalWrite(ledCentre, HIGH);
        return;
    }
    if (nombre == 2)
    {

        digitalWrite(ledHautDroite, HIGH);
        digitalWrite(ledBasGauche, HIGH);
        return;
    }
    if (nombre == 3)
    {

        digitalWrite(ledHautDroite, HIGH);
        digitalWrite(ledCentre, HIGH);
        digitalWrite(ledBasGauche, HIGH);
        return;
    }
    if (nombre == 4)
    {

        digitalWrite(ledHautGauche, HIGH);
        digitalWrite(ledHautDroite, HIGH);
        digitalWrite(ledBasGauche, HIGH);
        digitalWrite(ledBasDroite, HIGH);
        return;
    }
    if (nombre == 5)
    {
        digitalWrite(ledHautGauche, HIGH);
        digitalWrite(ledBasGauche, HIGH);
        digitalWrite(ledHautDroite, HIGH);
        digitalWrite(ledBasDroite, HIGH);
        digitalWrite(ledCentre, HIGH);
        return;
    }
    return;
}
