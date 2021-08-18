#include <stdio.h>
#include <stdlib.h>

int DesenhaLinha(){
  printf("\n");
  printf("========");
  printf("\n");
}

int main()
{
   int n,i;
   printf("Entre com o numero de linhas: ");
   scanf("%d",&n);

  for(i=0; i<n; i++){
    DesenhaLinha();
}
 
