

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    struct data{

    int dia;
    int mes;
    int ano;

    };

    int i = 0;
    struct data datas[3];
    int maiorano;

    for(i=0;i<3;i++){

        printf("Digite o Dia: ");
        fflush(stdin);
        scanf("%d",&datas[i].dia);

        printf("Digite o Mes: ");
        fflush(stdin);
        scanf("%d",&datas[i].mes);

        printf("Digite o Ano: ");
        fflush(stdin);
        scanf("%d",&datas[i].ano);

    }


    for(i=0;i<3;i++){

        while (maiorano < datas[i].ano){

            maiorano = datas[i].ano;


        }

   }
  printf("\n maior ano %d",maiorano);
   return 0;
}
