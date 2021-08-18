#include <stdio.h>
#include <stdlib.h>


typedef struct pontint{
    int px;
    int py;
} pontos;
int main()
{
    pontos *ponto;
    int qnt = 0, i = 0;
    printf("Digite a quantidade de pontos para cadastro: ");
    scanf("%d", &qnt);
    printf("\n");
    ponto = malloc(sizeof(pontos) * qnt);  // Define o tamanho do array (quantidade de pontos que o cara quer colocar * o tamanho em bits de cada struct)
    for(i=0;i<qnt;i++)
    {
        printf("Entre com a coordenada x do ponto %d: ", i);
        scanf("%d", &ponto[i].px);
        printf("\n");
        printf("Entre com a coordenada y do ponto %d: ", i);
        scanf("%d", &ponto[i].py);
        printf("\n");
    }
    printf("Pontos digitados: ");
    for(i=0;i<qnt;i++)
    {
        if(i == 0)
            printf("(%d,%d)",ponto[i].px, ponto[i].py);
        if(i > 0)
            printf(";(%d,%d)",ponto[i].px, ponto[i].py);
    }
    return 0;
}
