#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[6];
	int i = 0;
	printf ("<<Listando um vetor de numeros pares:>>\n");

	do{
		printf("Entre com o numero %i: ", i+1);
		scanf("%d",&vet[i]);

		if (vet[i] % 2 != 0){

			printf("Erro: Valor invalido\n");
			printf("\n");
			printf("Entre com o numero %d: ",i+1);
			scanf("%d",&vet[i]);
		}
		i++;
	}while(i < 6);

	printf("Os numeros pares digitados foram: ");

	for (i = 0; i < 6 ;i++)
	{
		printf("%d ",vet[i]);
	}
	return 0;
}
