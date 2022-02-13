/*
Este código tem a utilidade de demonstrar o uso da "Serial" do Arduino.
A "Serial" permite a comunicação entre o Arduino e o computador.
Neste código, o Arduino está enviando informação ao computador, a partir do comando "Serial.print()".
Dentro dos parênteses, podemos escrever o que quisermos. 
Quando o sistema estiver sendo executado, o parâmetro da função "Serial.print()" será impresso na tela quando clicarmos em "Monitor Serial", na Arduino IDE ou no Tinkercad.
*/

void setup() {
  // Inicialização da comunicação serial.
  Serial.begin(9600); // 9600 é a velocidade (padrão) da comunicação entre o computador e o Arduino, logo, a velocidade é de 9600 bits por segundo.
}

void loop() {
  // Informação que queremos transmitir.
  Serial.print("Isso foi um teste. \n");  // O computador irá receber, do Arduino, a frase "Isso é um teste.". 
  delay(3000);  // A cada 3 segundos, a frase será impressa no Monitor Serial.
}

// OBS.: Não é obrigatório que o Arduino se comunique com um computador, ele também pode se conectar a outros dispositivos.
