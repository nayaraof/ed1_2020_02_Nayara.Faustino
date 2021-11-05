#include <stdio.h>
#include <stdlib.h>

int calcula_lucro(float compra, float venda, float *porcentagem){
   if(compra<=0 || venda <=0)
      return -1;   
   int resultado = venda-compra;
   double resultVenda = resultado / venda;
   *porcentagem = compra * 100 / venda;
   if(resultVenda<=0)
      return 1;
   else if(resultVenda > 0 && resultVenda <=0.2)
      return 2;
   else if(resultVenda > 0.2 && resultVenda <= 0.4)
      return 3;
   else if(resultVenda > 0.4)
      return 4;
    
    return -1;
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
    double  compra,venda,porcentagem;
    int lucro;
    // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
    // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
    // a tabela acima. 
    printf("Digite o preco de compra:");
    scanf("%lf",&compra);
    printf("Digite o preco de venda:");
    scanf("%lf",&venda);

    lucro = calcula_lucro(compra,venda,&porcentagem);

 
    printf("Preco de compra: %.1lf; Preco de venda: %.1lf; ",compra, venda);

    if(lucro == 1){
        printf("abaixo ou igual 0%");
    } else if(lucro == 2){
        printf("abaixo ou igual 0%");
    } else if(lucro == 3){
        printf("abaixo ou igual 0%");
    } else if(lucro == 4){
        printf("abaixo ou igual 0%");
    } else if(lucro == 5){
        printf("abaixo ou igual 0%");
    }

    printf(" de %.1lf%%", porcentagem);

    // exemplo de saída:
    // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
    // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
  
    return 0;
}