/*
O código abaixo funciona da seguinte maneira:
  quando enviarmos ao Arduino, pelo Monitor Serial, a letra "L", o LED irá ligar;  
  quando enviarmos ao Arduino a letra "D", o LED irá desligar.
*/

// Definir o pino 2 como o pino conectado ao LED.
#define led 2

void setup() {
  Serial.begin(9600);  // velocidade de comunicação entre o computador e o Arduino
  pinMode(led, OUTPUT);  // declaração do pino do LED como um pino de saída
}

// Declaração da variável "caractere", que armazena o valor passado na Serial.
char caractere;

void loop() {
  // Caso há algo escrito no Monitor Serial.
  if(Serial.available() > 0){
    caractere = Serial.read();  // o caractere será receberá o primeiro caractere escrito na Serial
    if(caractere == 'L'){
      // O LED irá acender (ir para nível lógico alto) caso o usuário digite "L".
      digitalWrite(led, HIGH);
    }
    if(caractere == 'D'){
      // O LED irá apagar (ir para nível lógico baixo) caso o usuário digite "D".
      digitalWrite(led, LOW);
    }
  }
}
