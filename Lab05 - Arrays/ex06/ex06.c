#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6],i,maior,menor;
    int maiorp, menorp;
    float media, soma;
    printf("<< Five Values with index >>");
    printf("\n");

    for(i=0;i<5;i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d",&vet[i]);
        maior =vet[0];
        menor = vet[0];
    }

    printf("\n");
    printf("Os numeros digitados sao: ");
     for(i=0;i<5;i++){
            printf("%d", vet[i]);
     if(maior  < vet[i]){
        maior  = vet[i];
        maiorp = i ;      }


     if(menor  > vet[i]){
        menor  = vet[i];
        menorp = i ;

     }
     soma=soma +vet[i];
     media=soma/5;
     }

     printf("\n");
     printf("O maior valor eh: %d,  localizado na posicao %d do vetor \n", maior,maiorp);
     printf("O menor valor eh: %d,  localizado na posicao %d do vetor \n", menor,menorp);
     printf("A media  eh: %.1f", media);


    return 0;
}
