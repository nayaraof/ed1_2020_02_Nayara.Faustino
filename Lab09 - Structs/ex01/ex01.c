#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    struct telefone{

    int ddd;
    int telefone;

    };

    int i = 0;
    struct telefone telefone1[i];

    for(i=0;i<3;i++){

        printf("Digite o DDD: ");
        fflush(stdin);
        scanf("%d",&telefone1[i].ddd);

        printf("Digite o Numero: ");
        fflush(stdin);
        scanf("%d",&telefone1[i].telefone);

    }

    for(i=0;i<3;i++){

        printf("\nTelefone: %d %d",telefone1[i].ddd,telefone1[i].telefone);

    }

   return 0;
}
