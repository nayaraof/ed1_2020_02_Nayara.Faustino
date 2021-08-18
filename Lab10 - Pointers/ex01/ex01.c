

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val[5] = {2,4,5,8,10};
    unsigned int end_val;
    end_val = &val[2];
    int i=0;

    printf("Endereco do vetor na posicao 2: %d\n", end_val);

    printf("digite o 5 para armazena-lo na posicao 2 do vetor val\n");

    scanf("%d",end_val);

    for(i=0;i<5;i++){
        printf("%d", val[i]);
    }

   return 0;
}
