// Este código permite realizar o controle de um LED por meio de dois botões.
// Caso ambos os botões estiverem sendo pressionados, o LED acenderá.
// Caso contrário, o LED não acenderá.

#define led 2
#define botao1 6
#define botao2 12

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
}

void loop() {
  if (digitalRead(botao1) == HIGH and digitalRead(botao2) == HIGH){
      digitalWrite(led, HIGH);
  }
  else {
      digitalWrite(led, LOW);
  }
}
