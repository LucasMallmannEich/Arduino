//Construção de um semáforo que terá o LED vermelho, o LED amarelo e o LED verde.

#define led_vermelho 1
#define led_amarelo 2
#define led_verde 3

void setup(){
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop(){
  int lista[3] = {led_vermelho, led_amarelo, led_verde};  //lista que contém o valor dos três LEDs
  int i, j;  // declaração de variáveis de incremento no "loop for"
  for(i=0; i<3; i++){  // "loop for"
    digitalWrite(lista[i], HIGH);  // o semáforo irá acender um LED por vez, ou seja, um elemento da lista por vez
    for(j=0; j<3; j++){  // esse "loop for" procura apagar os LEDs que não sejam o que foi acesso
      if(j!=i){
        digitalWrite(lista[j], LOW);
      }
    }  
    if(lista[i] == 2){  // quando o sinal do semáforo está em amarelo, sua duração é de 3 segundos
      delay(3000);
    }
    else{  // quando o sinal do semáforo está em vermelho ou verde, sua duração é de 25 segundos 
      delay(25000);
    }
  }
}
