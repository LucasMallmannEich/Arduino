// Esse código permite ligar e deseligar um LED por meio do uso de um botão.

#define led 2
#define botao 7

void setup(){
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop(){
  if(digitalRead(botao) == LOW){
    digitalWrite(led, HIGH);  // Liga o LED caso o botão esteja em nível lógico baixo (LOW).
  }
  else{
    digitalWrite(led, LOW);  // Desliga o LED caso o botão esteja em nível lógico alto (HIGH).
  }
}
