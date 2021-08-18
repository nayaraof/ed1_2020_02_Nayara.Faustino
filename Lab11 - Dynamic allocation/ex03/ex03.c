#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *par_impar;
    int num= 0, qntpar = 0;
    int i = 0;
    printf("Entre com a quantidade de inteiros: ");
    scanf("%d", &num);
    printf("\n");
    par_impar = malloc(sizeof(int) * num);
    for(i=0;i<num;i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &par_impar[i]);
        printf("\n");
    }

    i = 0;
    for(i=0;i<num;i++)
    {
        if(par_impar[i] % 2 == 0 )
            qntpar++;
    }
    printf("Quantidade de pares: %d\n", qntpar);
    printf("Quantidade de impares: %d\n", num - qntpar);
    return 0;
}
