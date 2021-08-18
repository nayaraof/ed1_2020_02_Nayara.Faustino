#include <stdio.h>
#include <stdlib.h>
int main()

{

    char letra;
    float n1,n2,n3,media;

    printf("<<Calculo da Media >>\n");

    printf("Digite o nome do aluno : ");
    scanf("%c", &letra);

    printf("Digite a nota da prova 1 : ");
    scanf("%f", &n1);

     printf("Digite a nota da prova 2 : ");
    scanf("%f", &n2);

    printf("Digite a nota da prova 3 : ");
    scanf("%f", &n3);

        media=((n1*1)+(n2*1)+(n3*2))/4;
    printf("A nota media do aluno  %c eh :   %f  " , letra ,media);

    return 0;
}
