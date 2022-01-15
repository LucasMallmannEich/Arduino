// Este programa acende um LED no momento em que o "botao1" e o "botao2" forem pressionados.
// Ao pressionar o "botao3", o LED é desligado.

#define led 2
#define botao1 12
#define botao2 9
#define botao3 6

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
}

void loop() {
  if(digitalRead(botao1) == HIGH and digitalRead(botao2) == HIGH and digitalRead(botao3) == LOW) {
        digitalWrite(led, HIGH);  
  }
  if(digitalRead(botao3) == HIGH) {
        digitalWrite(led, LOW);  
  }
}
