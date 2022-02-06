Utilizando Variáveis para Controlar o Tempo

Desafio:

Este programa deve acender e desligar um LED por vez, alternadamente.
O tempo entre um LED acender e apagar deve estar armazenado numa variável chamada "tempo".
Esse tempo deve ter o valor de 1000, pois será 1000 milissegundos o intervalo entre o acender e o desligar dos LEDs.

Resolução:

Em primeiro lugar, defini o "led1" como o pino 6 e o "led2" como o pino 3.
Em segundo lugar, declarei a variável chamada de "tempo" como um inteiro (int), cujo valor é 1000.
Após ter declarado os pinos dos LEDs como saídas (OUTPUT), efetuei a lógica do programa na função "void loop()".
Nessa função, fiz o "led1" acender e o "led2" desligar. Após "delay(tempo)", ou seja um intervalo de tempo de 1000 milissegundos, o "led1" desligará e o "led2" acenderá.
Após, novamente, 1000 milissegundos (ou 1 segundo), os papéis se inverterão mais uma vez e, dessa forma, se sucederá a lógica do programa.
