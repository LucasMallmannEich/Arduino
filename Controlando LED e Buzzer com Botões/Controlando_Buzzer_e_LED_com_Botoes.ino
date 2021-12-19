// Este código permite controlar um Buzzer e um LED por meio de dois botões.
// Quando o primeiro botão for pressionado, o LED deverá ser ligado.
// Quando o segundo botão for pressionado, o Buzzer deve dar três toques e, após isso, o LED deverá ser desligado.

#define led 2
#define buzzer 3
#define botao_liga 10
#define botao_desliga 9

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(botao_liga, INPUT);
  pinMode(botao_desliga, INPUT);
}

void loop() {  
  if(digitalRead(botao_liga) == HIGH){
    digitalWrite(led, HIGH);
}
  else if(digitalRead(botao_desliga) == HIGH){
    digitalWrite(buzzer, HIGH);
    delay(250);
    digitalWrite(buzzer, LOW);
    delay(250);
    digitalWrite(buzzer, HIGH);
    delay(250);
    digitalWrite(buzzer, LOW);
    delay(250);
    digitalWrite(buzzer, HIGH);
    delay(250);
    digitalWrite(buzzer, LOW);
    delay(250);
    digitalWrite(led, LOW);
  }
}
