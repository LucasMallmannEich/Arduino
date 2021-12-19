Utilizando Botões de Pull Down para Controlar um LED e um Buzzer

Proposta:

O desafio desse programa é conseguir controlar um Buzzer e um LED por meio de dois botões de Pull Down.    
Isso deve ser feito de modo que, quando o primeiro botão (da esquerda para a direita, na imagem anexada) for pressionado, o LED acenda.    
Além disso, quando o segundo botão de Pull Down for pressionado, o Buzzer deve dar três toques sonoros e, após esses toques, o LED deverá ser desligado.

Resolução:

Em primeiro lugar, utilizei "#define" para definir quais pinos serão de quais componentes (LED, botão1, botão2 e Buzzer).  
Em segundo lugar, defini o LED e o Buzzer como sinais de saída (OUTPUT), pois eles receberão os sinais do Arduino.  
Também defini os dois botões de Pull Down como sinais de entrada (INPUT), pois eles enviarão os sinais ao Arduino.    
Feito isso, codifiquei que, quando o "botao_liga" for pressionado, ou seja, estiver em nível lógico alto, o LED também ficará, por tempo indeterminado, em nível lógico alto, ou seja, aceso.    
Após isso, codifiquei que, quando o "botao_desliga" for pressionado, o Arduino enviará ao Buzzer sinais lógicos altos e baixos, periodicamente, três vezes, após 0,25 segundos.   
Por fim, ao final do código para o "botao_desliga", escrevi que o LED será desligado.
