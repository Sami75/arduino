int pb, pl;
boolean lightOn = false;

void setup() {
  // put your setup code here, to run once:
  pb = 2;
  pl = 4;

Serial.begin(9600);
  pinMode(pb, INPUT_PULLUP);
  pinMode(pl, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(lightOn) {
    digitalWrite(pl, HIGH);
  } else {
    digitalWrite(pl, LOW);
  }
  
  boolean state = digitalRead(pb);
  Serial.println(state);
  
  if(!state) {
    Serial.println("on é entré");

    if(lightOn) {
      lightOn = 0;
    } else {
      lightOn = 1;
    }
  }
  
  delay(200);
}
