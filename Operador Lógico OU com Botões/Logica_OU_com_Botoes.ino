/*
Este programa aciona um LED quando o "botao1" e o "botao2" estiverem em nível lógico alto (1 - HIGH - 5 V).
*/

#define led 2
#define botao1 6
#define botao2 9

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
}

void loop() {
  if (digitalRead(botao1) == HIGH or digitalRead(botao2) == HIGH) {
    digitalWrite(led, HIGH);
  }
}
