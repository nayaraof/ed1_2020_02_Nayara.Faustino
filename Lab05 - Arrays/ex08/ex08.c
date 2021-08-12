#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int i;
    float numeros[5];
    float soma, media, desvioFinal, desvioPad=0;
    printf ("<<Media e desvio-padrao>>\n");

    for(i=0;i<5;i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f",&numeros[i]);
        soma=soma+numeros[i];
        }
        media=soma/5;
        printf("\n");
        printf("E media eh %0.f", media);

        for(i=0;i<5;i++){
            desvioPad = desvioPad + pow (numeros[i]-media,2);
        }
        desvioFinal = sqrt(desvioPad/4);
        printf(" e o desvio-padra eh %.2f", desvioFinal);
    return 0 ;

}


