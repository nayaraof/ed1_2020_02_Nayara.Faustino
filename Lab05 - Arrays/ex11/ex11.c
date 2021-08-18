 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=1;
    int i=0;
    int v1[5];
    int v2[5];
    int v[5];

    printf("Pares e Impares\n\n");

    for(i=0;i<5;i++){
        printf("Digite o valor %d",x);
        scanf("%d", &v[i]);
        x++;
    }

        x=0;

     for(i=0;i<5;i++){
        if(v[i]%2 == 0){
                printf("Pares %d",v[i]);
                x++;

       } else
            printf("Impares %d", v[i]);

        }


   return 0;
}
