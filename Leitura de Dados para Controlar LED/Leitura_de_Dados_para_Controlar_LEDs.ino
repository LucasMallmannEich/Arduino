/*
Este código demonstra o funcionamento da leitura de dados da Serial.
Ou seja, nesse caso o computador está enviando dados para o Arduino.
O Serial.available irá informar quantos caracteres o Arduino recebeu na Serial.
O programa irá acender ou apagar o LED + número do LED.
Por exemplo, se o usuário digitar "LIGA5", o programa deverá acender o LED número 5.
Se o usuário digitar "DESLIGA1", o programa deverá apagar o LED número 1.
A função readString() nos informa o conjunto de caracteres total recebido no Monitor Serial.
*/

#define led 2

void setup() {
  Serial.begin(9600);  // velocidade de comunicação entre o Arduino e o computador, em bits por segundo
  Serial.setTimeout(100);  // tempo de espera para o readString() captar todos os caracteres enviados
  pinMode(led, OUTPUT);  // definição do pino do LED como um pino de saída
}

// Declaração da variável "palavra".
String palavra;

void loop() {
  // Caso algo seja digitado no Monitor Serial.
  if (Serial.available() > 0) {
    palavra = Serial.readString();  // leitura da palavra que o usuário digitou

    if (palavra.startsWith("LIGA")) {
      // O código entende que algum LED irá acender.
      
      palavra.remove(0, 4);  // o programa irá remover, partindo do caractere zero, 4 caracteres da string "palavra"
      // O trecho do código acima fará a variável "palavra" ficar apenas com o que foi escrito após "LIGA".
    
      pinMode(palavra.toInt(), OUTPUT);  // isso transforma a string para inteiro e alerta que o pino do LED é uma saída
      digitalWrite(palavra.toInt(), HIGH);  // isso acende o pino na posição do inteiro 
    }
    
    if (palavra.startsWith("DESLIGA")) {
      // O código entende que algum LED irá apagar.
      
      palavra.remove(0, 7);  // o programa irá remover, partindo do caractere zero, 7 caracteres da string "palavra"
      // O trecho do código acima fará a variável "palavra" ficar apenas com o que foi escrito após "DESLIGA".  

      pinMode(palavra.toInt(), OUTPUT);  // isso transforma a string para inteiro e alerta que o pino do LED é uma saída
      digitalWrite(palavra.toInt(), LOW);  // isso acende o pino na posição do inteiro
    }
  }
}
