//AUTORES: MARIA ACEVEDO, JUAN AVENDAÑO, BRAYAN GONZALEZ

#include <LiquidCrystal.h>
//Se definen los pines necesarios para hacer funcionar 
#define RS 12
#define E 13
#define D4 2
#define D5 3
#define D6 4
#define D7 5
#define sensorAnalogo A0
#define sensorDigital 8

LiquidCrystal lcd(RS, E, D4, D5, D6, D7); //Se define un objeto de la clase LiquidCrystal

void setup(){
  lcd.begin(16, 2); //Se inicializa el lcd.
  pinMode(sensorDigital, INPUT); //Se define el pinmode del sensor digital.
}

void loop(){
  lcd.clear(); //Se limpia lo que se está mostrando actualmente en el LCD.
  if(!digitalRead(sensorDigital)){ //Si el sensor no manda una señal HIGH, entonces hay lluvia.
    lcd.setCursor(0, 0);
    lcd.print("Hay lluvia");
  }
  else{ //De lo contrario no hay lluvia
    lcd.setCursor(0, 0);
    lcd.print("No hay lluvia");
  }
  lcd.setCursor(0, 1);
  lcd.print("Voltaje: " + String(analogRead(sensorAnalogo) * (5.0/1023.0))); //Se muestra el voltaje del sensor
  delay(500);
}
