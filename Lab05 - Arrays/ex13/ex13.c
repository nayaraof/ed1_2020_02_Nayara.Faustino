#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x=1;
    int i=0;
    int v[5];


    printf("Zerando negativos\n\n");

    for (i=0;i<4;i++){

        printf("Entre com o numero %d\n", x);
        scanf("%d",&v[i]);

        if(v[i]<0){

            v[i] = 0;
        }

        x++;
    }

    x=1;

    printf("\n Zerando os negativos, obtem-se");

    for(i=0;i<4;i++){

        printf(" %d",v[i]);
    }


   return 0;
}
