#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
// check:<<<erro: e3.1b: A função deve calcular e retornar por referência a porcentagem>>>>
int calcula_lucro(float compra, float venda){
   // check:<<<erro: e3.3: Cálculo com erros (não corresponde a porcentagem pedida OU erro na fórmula OU porcentagem baseada na venda e não na compra OU divisão inteira )>>>>
   int resultado = venda-compra;
   if(compra<=0 || evnda <=0)// check:<<<erro: fazer isso primeiro>>>>
      return -1;
   if(resultado/venda<=0)
      return 1;// check:<<<erro: vc não deve ficar recalculando resultado/venda toda hora>>>>
   else if(resultado/venda > 0 && resultado/venda <=0.2)
      return 2;
   else if(resultado/venda > 0.2 && reseultao/venda <= 0.4)
      return 3;
   else if(reseultado/venda > 0.4)
      return 4;
}
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/

int main(){
calcula l;
   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   printf("Digite o preco de compra:");
  
   printf("Digite o preco de venda:");
   
   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
  // check:<<<erro: faltou chamar a função no programa principal>>>>
    return 0;
}
