void setup(){
  pinMode(2, OUTPUT);  // LED 1
  pinMode(3, OUTPUT);  // LED 2
}

void loop(){
    digitalWrite(2, HIGH);  // acende o LED 1
    delay(500);  // espera, com o LED 1 ligado, por 0,5 segundo 
    digitalWrite(2, LOW);  // apaga o LED 1
    digitalWrite(3, HIGH);  // acende o LED 2
    delay(500);  // espera, com o LED 2 ligado, por 0,5 segundo
    digitalWrite(3, LOW);  // apaga o LED 2
}
