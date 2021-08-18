12)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x=1;
    int i=0;
    float vA[3];
    float vB[3];
    float vC[3];

    float verde = 0;
    float azul = 0;
    float amarela = 0;
    float vermelha = 0;
    float probverde = 0;
    float probvermelha = 0;
    float probazul = 0;
    float probamarela = 0;
    int total = 0;

    printf("Digite a quantidade de bolinhas\n\n");

     printf("\nVerde:");
        fflush(stdin);
        scanf("%f",&verde);

       printf("\nAzul:");
        fflush(stdin);
        scanf("%f",&azul);

        printf("\nAmarela:");
        fflush(stdin);
        scanf("%f",&amarela);

        printf("\nVermelha:");
        fflush(stdin);
        scanf("%f",&vermelha);

        total = verde + azul + amarela + vermelha;

        printf("\n\nProbabilidades\n\n");

        probverde = (verde / total) *100;
        probazul = (azul / total) *100;
        probamarela = (amarela / total) *100;
        probvermelha = (vermelha / total) *100;

        printf("Verde: %.2f\n", probverde);
        printf("Azul: %.2f\n", probazul);
        printf("Amarela: %.2f\n", probamarela);
        printf("Vermelha: %.2f\n", probvermelha);

   return 0;
}
