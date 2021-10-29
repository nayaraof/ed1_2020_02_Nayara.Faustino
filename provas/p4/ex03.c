ex03) Mostre como uma pilha pode ser usada para resolver a expressão 
matemática abaixo. Não confundir números negativos com subtrações.

Cada número e operador é lido em um passo. 
Para cada passo, mostre o estado da pilha 

Exemplo de como mostrar a pilha
2 2 <topo  // o número 2 está no topo
2 3 4 <topo // o número 4 está no topo

Expressão: 

6 -8 8 + * 9 -
------------------------------------------
  Ao atingir um operado, desimplilhamos os termos da operação e logo empilhamos 
  o resultado na pilha para dessa forma continuar com a proxima operação 
  >stack push:
 | 6| < topo//        o número em questão |6| está no topo da pilha
  >stack push:
|6| |-8| <topo//      o número em questão |-8| está no topo da pilha
  >stack push:
|6|-8| 8| < topo //   o número em questão  |8| está no topo da pilha
  >stack push:
dequeue: ((-8) +  8) = 0 // o resultado da expressão que encontramos nesse ponto da pilha  é 0 , pois -8 |+| 8 é 0 (regra de sinais:sinais diferentes na subtração |subtrai e conserva o sinal do maior)
>stack push:
|6| 0| < topo//      o número em questão |0| está no topo da pilha. [0 é o resultado da última operação]
>stack pop: (0*6) = 0  // 0 vezes qqr coisa é 0
>stack push:
0 < topo//             o número em questão |0| está no topo da pilha.
>stack push:
* < topo//             o sinal de multiplicação está ocupando uma posição sozinho na pilha 
  >stack push:
  9< topo//              o número em questão |9| está no topo da pilha, resultando no fim das operações da pilha.
  
 
  
  
 
