#include <stdio.h>
#include <stdlib.h>

int main() {
  float valordia = 30;
  float taxair= 0.08;
  float taxainss= 0.04;
  float valorbruto ;
  int dias;


  printf(" Digite o numero de dias trab:");
    scanf("%d",&dias);
    valorbruto = (dias *valordia);


    printf("o salario bruto e  %.2f:", valorbruto);

    printf("O salario liquido e:  %.2f :",valorbruto - (valorbruto * taxair) -  (valorbruto * taxainss));
    printf("taxa ir e:  %.2f :",  valorbruto * taxair );
    printf("taxa inss e:  %.2f :", valorbruto * taxainss);

    return 0;

}
