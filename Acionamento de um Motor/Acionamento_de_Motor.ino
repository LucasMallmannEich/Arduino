// Acionando um motor, de corrente contínua elevada, com o Arduino.

#define motor 5

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  digitalWrite(motor, HIGH);  // Liga o motor.
  delay(1500);  // Aguarda 1,5 segundo.
  digitalWrite(motor, LOW);  // Desliga o motor.
  delay(1500);  // Aguarda 1,5 segundo.
}
