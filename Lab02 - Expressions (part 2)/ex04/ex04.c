#include <stdio.h>

exe_04
#include <stdio.h>
#include <stdlib.h>

int main()

{

    char letra;
    float n1,n2,n3,p1,p2,p3,media;

    printf("<<Calculo da Media >>\n");

    printf("Digite o nome do aluno : ");
    scanf("%c", &letra);

    printf("Digite a nota da prova 1 : ");
    scanf("%f", &n1);

     printf("Digite a nota da prova 2 : ");
    scanf("%f", &n2);

    printf("Digite a nota da prova 3 : ");
    scanf("%f", &n3);

    printf("Digite o peso da prova 1 : ");
    scanf("%f", &p1);

     printf("Digite o peso da prova 2 : ");
    scanf("%f", &p2);

     printf("Digite o peso da prova 3 : ");
    scanf("%f", &p3);

        media=((n1*p1)+(n2*p1)+(n3*p2))/5;
    printf("A nota media do aluno  %c eh :   %f  " , letra ,media);

    return 0;
}
