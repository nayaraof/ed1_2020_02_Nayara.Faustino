10)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x=1;
    int i=0;
    float vA[3];
    float vB[3];
    float vC[3];

    printf("Subtracao de valores\n\n");

      for(i=0;i<3;i++){

        printf("\nDigite o valor %d de A \n", x);
        fflush(stdin);
        scanf("%f",&vA[i]);
        x++;
        }

        x=1;

        for(i=0;i<3;i++){

        printf("\nDigite o valor %d de B \n", x);
        fflush(stdin);
        scanf("%f",&vB[i]);
        x++;
        }

        printf("\n\nRelatorio de notas\n\n");

        x=1;

        for(i=0;i<3;i++){

          vC[i] = vA[i] - vB[i];
        }

        printf("O vetor de C, definido como C = A - B eh");


        for(i=0;i<3;i++){

          printf(" %.2f", vC[i]);
        }

   return 0;
}
