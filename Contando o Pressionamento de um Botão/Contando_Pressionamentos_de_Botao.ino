/*
Este código irá acender um LED quando o botão pressionado 5 vezes.
Além disso, também utilizei o Monitor Serial para mostrar ao usuário o valor atual da variável de contagem.
*/

#define led 2
#define botao 3

// Declarando a variável contadora.
int counter = 0;

void setup() {
  Serial.begin(9600);  // Procedimento padrão para inicializar a comunicação entre o computador e o Arduino com 9600 bits por segundo.
  // Declarando as entradas e saídas do Arduino.
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  // Caso o botão seja pressionado, a variável "counter" irá ser acrescentada em uma unidade.
  if (digitalRead(botao) == HIGH){
    counter = counter + 1;  // Essa variável representa a quantidade de vezes que o botão foi pressionado.
    Serial.print("O botao foi pressionado " + (String)counter + " vez(es).\n");  // Informa ao usuário quantas vezes o botão já foi pressionado.
  }
  // Caso o botão seja pressionado 5 ou mais vezes, o LED irá acender.  
  if (counter == 5 || counter > 5) {
    digitalWrite(led, HIGH);
  }
  while (digitalRead(botao) == HIGH){
    // Enquanto o botão estiver sendo pressionado, o programa não irá acrescentar mais de uma unidade na variável contadora.  
  }
  delay(100);  // Espera 0,1 segundo, é necessário devido o efeito Bouncing.
}
