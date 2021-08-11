#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maiorNota;
    float  alunos[5];

    printf("<<Normalizando as notas>>\n");

    for(i=0;i<5;i++){
        printf("Entre coma nota do aluno %d ", i+1);
        scanf("%f", &alunos[i]);
        maiorNota = alunos[0];
    }

    for(i=0;i<5;i++){
        if(maiorNota < alunos[i]);
           maiorNota = alunos[i];
        }

    printf("\n");
    printf("Notas normalizadas");
    printf("\n");

     for(i=0;i<5;i++){
        printf ("A nota do aluno %d eh %.0f\n", i+1, (alunos[i]/maiorNota) * 100);
    }

    return 0;
}
