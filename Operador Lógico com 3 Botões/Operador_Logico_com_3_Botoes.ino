// Este código acende um LED somente se os 3 botões estiverem sendo pressionados simultaneamente.

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
  if(digitalRead(botao1) == HIGH and digitalRead(botao2) == HIGH and digitalRead(botao3) == HIGH) {
        digitalWrite(led, HIGH);
    }
  else {
        digitalWrite(led, LOW);
    }
}
