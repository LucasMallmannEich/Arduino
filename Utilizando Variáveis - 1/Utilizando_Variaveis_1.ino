// Este programa acende um LED por vez, alternadamente.
// Quando o primeiro LED está ligado, o segundo LED está desligado (e vice-versa).
// A cada segundo, os LEDs vão alternando entre si.

#define led1 6
#define led2 3

// Declaração da variável "tempo".

int tempo = 1000;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT); 
}

void loop() { 
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(tempo);
}
