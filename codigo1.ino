//Autores: Maria Acevedo, Diego González, Juan Avendaño

#define sensorLluvia 2 //Sensor de humedad o lluvia.

void setup() {
  pinMode(sensorLluvia, INPUT); //Se define el pinmode para el sensor
  Serial.begin(9600);

}

void loop() {
  if(!digitalRead(sensorLluvia)) Serial.println("Presencia de Lluvia");
  else Serial.println("Ausencia de Lluvia");
  delay(500);

}
