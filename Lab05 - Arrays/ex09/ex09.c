#include <stdio.h>
#include <stdlib.h>

int main()
{
	int alunos, i, j;
	float soma;
	printf ("<<Media de n alunos. Maximo 100 alunos>>\n");
	printf("Entre com o numero maximo de alunos: ");

	scanf("%d",&alunos);
	int aluno[alunos];

	if(alunos > 100)
		printf("Erro! O numero maximo de alunos permitido eh 100\n");
	else{
		for (int i = 0; i < alunos; i++)
		{
			printf("Digite a nota do aluno %d: ", i+1);
			scanf("%d",&aluno[i]);
		}
		printf("\n");
		printf("Relatorio de notas\n");

		for (int j = 0; j < alunos; j++)
		{
			printf("A nota do aluno %d eh: %d\n", j, aluno[j]);
			soma = soma + aluno[j];
		}
		printf("A media da turma eh: %.1f\n",soma/alunos);
	}
     return 0;
}
