3)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    struct endereco{

    char rua[30];
    int numero;
    char complemento[20];
    char cidade[20];
    char estado[2];
    int cep;

    };

    int i = 0;
    struct endereco enderecos[3];


    printf("Cadastro de Enderecos\n\n");

    for(i=0;i<3;i++){

        printf("Digite a Rua: ");
        fflush(stdin);
        gets(enderecos[i].rua);

        printf("Digite o Numero: ");
        fflush(stdin);
        scanf("%d",&enderecos[i].numero);

        printf("Digite o Complemento: ");
        fflush(stdin);
        gets(enderecos[i].complemento);

        printf("Digite a Cidade: ");
        fflush(stdin);
        gets(enderecos[i].cidade);

        printf("Digite o Estado(sigla): ");
        fflush(stdin);
        gets(enderecos[i].estado);

        printf("Digite o CEP: ");
        fflush(stdin);
        scanf("%d",&enderecos[i].cep);

        printf("\n");

    }

    printf("Enderecos no estado de MG\n\n");

    for(i=0;i<3;i++){

        if(strcmp(enderecos[i].estado,"mg") == 0|| strcmp(enderecos[i].estado,"MG") == 0|| strcmp(enderecos[i].estado,"Mg")== 0){
            printf("Rua: %s Numero: %d Complemento: %s Cidade: %s Estado: %s CEP: %d \n",enderecos[i].rua, enderecos[i].numero, enderecos[i].complemento, enderecos[i].cidade, enderecos[i].estado, enderecos[i].cep);
        }
        else {printf("Nenhum endereco no estado de Minas Gerais\n");
            return 0;
        }
    }


   return 0;
}
