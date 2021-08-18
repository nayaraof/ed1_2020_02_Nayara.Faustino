#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf ( " << Calculo da Media >> " );
  printf("\n");

  float n1,n2,media;

  printf("Digite a nota da prova 1: ");
  scanf("%f", &n1);

  printf("Digite a nota da prova 2: ");
  scanf("%f", &n2);

    media = ((n1+n2)/2);

    printf("A nota media eh %.2f:", media);
    return 0;
}
