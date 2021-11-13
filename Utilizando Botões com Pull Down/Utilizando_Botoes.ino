// Esse código permite ligar e deseligar um LED por meio do uso de um botão.

#define led 2
#define botao 7

void setup(){
  pinMode(led, OUTPUT);  // o LED é uma saída (a informação sairá do Arduino)
  pinMode(botao, INPUT);  // o botão é uma entrada (a informação entrará no Arduino)
}

void loop(){  // se o botão estiver acionado (nível lógico alto - HIGH), o LED será ligado
  if(digitalRead(botao) == HIGH){  // o digitalRead é usado para que o Arduino consiga ler determinada entrada
    digitalWrite(led, HIGH);  // o digitalWrite é usado para que o Arduino consiga enviar informação ao LED
  } 
  else if(digitalRead(botao) == LOW){  // se o botao não estiver pressionado, o LED será desligado
    digitalWrite(led, LOW);
  }  
}
