// Construção de dois semáforos interligados.

#define led_verm1 4
#define led_amar1 3
#define led_verd1 2
#define led_verm2 13
#define led_amar2 12
#define led_verd2 11

void setup(){  // Configura os pinos como saídas do Arduino.
  pinMode(led_verm1, OUTPUT);
  pinMode(led_amar1, OUTPUT);
  pinMode(led_verd1, OUTPUT);
  pinMode(led_verm2, OUTPUT);
  pinMode(led_amar2, OUTPUT);
  pinMode(led_verd2, OUTPUT);  
}

void loop(){
  digitalWrite(led_verm1, HIGH);  // Ativa o sinal vermelho do primeiro semáforo.
  digitalWrite(led_verm2, HIGH);  // Ativa o sinal vermelho do segundo semáforo.
  delay(1000);  // Aguarda por 1 segundo.
  digitalWrite(led_verm1, LOW);  // Desativa o sinal vermelho do primeiro semáforo.
  digitalWrite(led_verd1, HIGH);  // Ativa o sinal verde do primeiro semáforo.
  delay(3000);  // Aguarda por 3 segundos.
  digitalWrite(led_verd1, LOW);  // Desativa o sinal verde do primeiro semáforo.
  digitalWrite(led_amar1, HIGH);  // Ativa o sinal amarelo do primeiro semáforo.
  delay(1000);  // Aguarda por 1 segundo.
  digitalWrite(led_amar1, LOW);  // Desativa o sinal amarelo do primeiro semáforo.
  digitalWrite(led_verm1, HIGH);  // Ativa o sinal vermelho do primeiro semáforo.
  delay(1000);  // Aguarda por 1 segundo.
  digitalWrite(led_verm2, LOW);  // Desativa o sinal vermelho do segundo semáforo.
  digitalWrite(led_verd2, HIGH);  // Ativa o sinal verde do segundo semáforo.
  delay(3000);  // Aguarda por 3 segundos.
  digitalWrite(led_verd2, LOW);  // Desativa o sinal verde do segundo semáforo.
  digitalWrite(led_amar2, HIGH);  // Ativa o sinal amarelo do segundo semáforo.
  delay(1000);  // Aguarda por 1 segundo.
  digitalWrite(led_verm1, LOW);  // Desativa o sinal vermelho do primeiro semáforo.
  digitalWrite(led_amar2, LOW);  // Desativa o sinal amarelo do segundo semáforo.
}
