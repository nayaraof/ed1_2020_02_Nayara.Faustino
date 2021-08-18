#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    int i = 0;
    int x=0;

    float total = 0.0;
    int dias=0;
    float totalxdias = 0.0;
    float relativoxdias = 0.0;
    float individual = 0.0;

    struct eletrodomesticos{

    char nome[15];
    float potencia;
    float tempo;

    };

    struct eletrodomesticos eletro[5];



    while(x != 3){

        printf("\n\nMenu de Opcoes\n\n");
        printf("1. Cadastre 5 eletrodomesticos\n");
        printf("2. Relatorio de gastos\n");
        printf("3. Sair\n");

        scanf("%d", &x);
        system("cls || clear");

        switch(x)
        {
            case 1:

                printf("Cadastre os 5 eletrodomesticos");

                for(i=0;i<5;i++){

                    printf("\nDigite o nome:");
                    fflush(stdin);
                    gets(eletro[i].nome);

                    printf("\nDigite a potencia em KW:");
                    fflush(stdin);
                    scanf("%f", &eletro[i].potencia);

                    printf("\nDigite o tempo ativo em Hrs:");
                    fflush(stdin);
                    scanf("%f", &eletro[i].tempo);

                    fflush(stdin);

                    }

                break;


            case 2:

            printf("Digite um tempo t (dias) para ser calculado o Consumo Relativo:\n");

                scanf("%d",&dias);

            /*Consumo total da casa */

                for(i=0;i<5;i++){

                    total = total + (eletro[i].potencia * eletro[i].tempo);

                    }
                    totalxdias = total * dias;

                    printf("Consumo total da casa em %d dias: %.2f\n\n",dias,totalxdias);

            /*Consumo relativo eletros */



                for(i=0;i<5;i++){

                    individual = ((eletro[i].potencia * eletro[i].tempo)*dias)/totalxdias;


                     printf("Consumo Relativo do(a) %s: %.2f%\n\n",eletro[i].nome,individual*100);
                    }



                break;



            case 0:

                break;

            }
    }


   return 0;
}
