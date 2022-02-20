/*
Este código tem a utilidade de demonstrar o uso da "Serial" do Arduino.
Neste código, o Arduino está enviando informação ao computador, a partir do comando "Serial.print()".
Toda vez que o botão do circuito for pressionado, o monitor serial do Arduino irá imprimir "O botão foi pressionado."
*/

#define botao 2

void setup() {
  // Inicialização da comunicação serial.
  Serial.begin(9600);  // a velocidade da comunicação entre o computador e o Arduino é de 9600 bits por segundo.
}

void loop() {
  if (digitalRead(botao) == 1){
    // Se o botão for pressionado.
    Serial.print("O botao foi pressionado.\n");
    delay(500);
  }
}
