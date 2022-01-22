/*
  Este programa acende um LED enquanto o "botao1" ou o "botao2" estiverem sendo pressionados simultaneamente com o "botao3".
*/

#define led 2
#define botao1 6
#define botao2 9
#define botao3 12

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
}

void loop() {
  if( (digitalRead(botao1) == HIGH or digitalRead(botao2) == HIGH) and digitalRead(botao3) == HIGH) {
      digitalWrite(led, HIGH);
    }
  else {
      digitalWrite(led, LOW);
    }
}
