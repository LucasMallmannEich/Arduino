/*
Acendedo um LED na frequência de 1 Hz.
*/

void setup(){
  pinMode(2, OUTPUT); // O pino 2 do Arduino UNO está conectado ao anodo (região mais positiva) do LED. Como esse pino 2 enviará informação ao LED, ele será OUTPUT.
}

void loop(){
  digitalWrite(2, LOW);  //Apaga o LED.
  delay(500);  //Aguarda 0,5 segundos para desligar o LED. 
  digitalWrite(2, HIGH); //Acende o LED.
  delay(500); //Aguarda 0,5 segundos para acender o LED.
}
