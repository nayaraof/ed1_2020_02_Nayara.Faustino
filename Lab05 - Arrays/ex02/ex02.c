#include <stdio.h>

int main()
{
    int val[6];
    int i;
    printf("<<Listando um vetor>>\n");

   for (i=0; i<6; i++){
     printf("Entre com o numero %d:", i+1);
     scanf("%d", &val[i]);
   }

    printf("\n");
    printf("Valores lidos sao: %d %d %d %d %d %d", val[0], val[1], val[2], val[3], val[4], val[5]);
    return 0;

}
