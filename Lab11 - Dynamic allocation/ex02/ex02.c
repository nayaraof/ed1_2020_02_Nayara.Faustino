#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *produtos, i,n=5;
    produtos = (int *)malloc (n*sizeof(int));

    printf("Entre com os valores: ");
    for (i = 0; i < n; i++)
    scanf ("%d", &produtos[i]);

    for (i = 0; i < n; i++)
    printf("%d,", produtos[i]);

    free(produtos);
}
