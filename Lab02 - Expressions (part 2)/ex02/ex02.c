#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf ( " << Calculo da Media >> " );
  printf("\n");

  float n1,n2,media;
  char letra;

  printf("Digite o nome do aluno: " );
   scanf(" %c",&letra);
  printf("Digite a nota da prova 1: ");
  scanf("%f", &n1);
  printf("Digite a nota da prova 2: ");
  scanf("%f", &n2);
    printf("\n");

    media = ((n1+n2)/2);

    printf("A nota media do aluno %c  e:  %.2f:",letra, media);
    return 0;
}
