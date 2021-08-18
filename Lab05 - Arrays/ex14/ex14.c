#include <stdlib.h>
#include <stdio.h>

int main()
{
  int n;
  int qntalunos = 0;
  int nroaluno = 0;
  char classe = ' ';
  int vnroaluno[10000];
  int vclasse[10000];
  float vcra[10000];
  int i=0;

  printf("\n Universidade X \n\n");

  printf("\nQuantos alunos serao cadastrados:\n\n");
  fflush(stdin);
  scanf("%d", &qntalunos);

  if (qntalunos>10000){

    printf("Numero maximo de alunos = 10.000\n\n");

  }

  else{

        for(i=0;i<qntalunos;i++){

            printf ("\nEntre com o numero do aluno:\n");
            fflush(stdin);
            scanf("%d", &vnroaluno[i]);

            printf ("\nEntre com a classe social do aluno %d:\n", vnroaluno[i]);
            fflush(stdin);
            scanf("%c", &vclasse[i]);

            printf ("\nEntre com o CRA do aluno %d:\n", vnroaluno[i]);
            fflush(stdin);
            scanf("%f", &vcra[i]);

        }

  }

  printf("\n\n-----Alunos Cadastrados ----\n\n");

  for(i=0;i<qntalunos;i++){

  printf("Numero:%d Classe Social:%c CRA:%.2f\n", vnroaluno[i], vclasse[i], vcra[i]);

  }

  return 0;
}
