int pinBouton;
void setup()
{
    Serial.begin(9600);
    pinBouton=10;
    pinMode(pinBouton,INPUT_PULLUP);
}
void loop()
{
    boolean etatBouton=digitalRead(pinBouton);
    Serial.println(etatBouton);
}
