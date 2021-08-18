#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    printf("<< Valores iguais >> \n\n");

    int x = 1;
    int v[8];
    int i=0;

    for(i=0;i<8;i++){

        printf("Entre com o numero: %d\n", x);
        fflush(stdin);
        scanf("%d",&v[i]);
        x++;

    }



   return 0;
}
