// Este programa acende um LED a cada 1 segundo.
// A cada segundo, um LED a mais será acesso, até o momento em que todos os 10 LEDs estão ligados.

// Declaração da variável "pino".

int pino = 1;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
}

void loop() { 
  digitalWrite(pino, HIGH);
  delay(1000);

  while(pino != 10){
    pino = pino + 1;
  }
}
