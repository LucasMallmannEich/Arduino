#define led 2
#define botao_liga 7

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao_liga, INPUT);
}

void loop() {
  if(digitalRead(botao_liga) == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
