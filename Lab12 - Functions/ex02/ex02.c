#include <stdio.h>
#include <stdlib.h>

int DesenhaLinha(int n, int i){
   for(i=0; i<n; i++){
   printf("=");
}
}

int main()
{
    int n,i;
    printf("Entre com o numero de linhas: ");
    scanf("%d", &n);
    DesenhaLinha(n,i);

    return 0;
}
