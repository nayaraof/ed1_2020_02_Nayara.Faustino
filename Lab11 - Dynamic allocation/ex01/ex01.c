#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *produtos;
    int n,i;
    printf("Informe o numero de produtos:");
    scanf("%d",&n);
    // é necessário usar o comando malloc para alocar a memória
    produtos = (double *)malloc(n*sizeof(double));
    for (i = 0; i < n; i++){
    printf("Informe o valor do produto %d R$:", i+1);
    scanf("%lf", &produtos[i]);
}
    printf("\nProdutos cadastrados\n");
    for (i = 0; i < n; i++){
    printf("Produto %d - R$: %f\n" ,i+1, produtos[i]);
}
  // ao terminar de usar o vetor, devemos liberar a memória
free(produtos);
}
//*A váriavel 'n' fica responsável por informar quantos espaços de memória deverão ser utilizados, mas como cada tipo (int, float, double, char) possui seu respectivo valor de bits, o sizeof ficará encarregado de armazenar o tamanho desse tipo. Logo a variável 'n' vai ser multiplicado pelo sizeof que transformar o 'n' em bits exatos declarado pelo seu tipo informado e, logo sera alocado pela função malloc.*//
