//AUTORES: MARIA ACEVEDO, JUAN AVENDAÑO, DIEGO GONZÁLEZ

#define led 2 //LED
#define fotorresistor A5 //FOTORRESISTOR
void setup() {
  pinMode(led, OUTPUT); //Pinmode del led
  digitalWrite(led, 0); //Se apaga el led.
}

void loop() {
  if(analogRead(fotorresistor)  < 700) digitalWrite(led,0); //Si la entrada analoga es inferior a un valor entonces se enciende el led.
  else digitalWrite(led, 1); //De otra manera se prende el led.
}
