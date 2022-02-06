Utilizando Variáveis para Controlar os Pinos do Arduino

Desafio:

Este programa deve acender um LED a cada segundo, um por vez.
No total, dez LEDs serão acessos.
O pino de cada LED estará armazenado em apenas uma variável chamada "pino".

Resolução:

Em primeiro lugar, declarei a variável chamada de "pino" como um inteiro (int), cujo valor é 1.    
Em segundo lugar, configurei os 10 pinos (do pino 1 ao pino 10) como saídas (OUTPUT) do Arduino.   
Já no "void loop()", acionei a variável pino, cujo valor atual é 1 (ou seja, acionei o pino 1), como "HIGH" ou nível lógico alto.           
Nessa mesma função, efetuei um "atraso" na execução do código de 1 segundo ou 1000 milissegundos.        
Após esse tempo, a variável "pino" irá ser acrescentada em uma unidade, logo, a variável passará a ter o valor de 2.   
Então, quando a variável "pino" for novamente acionada com o nível lógico alto, o pino 2 estará recebendo esse nível lógico alto, pois a variável "pino" é igual à 2.     
E, dessa forma, a variável "pino" é acrescentada toda vez que passou 1 segundo desde que o último LED acendeu.   
Dessa forma, é possível "automatizar" o processo de acionamento de diversos LEDs de uma maneira mais eficiente e menos trabalhosa.     
