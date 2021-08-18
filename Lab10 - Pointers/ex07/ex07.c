#include <stdio.h>
#include <stdlib.h>

int main()
{
  double var[10] = {1,2,3,4,5,6,7,8,9,0};
  int i;

    printf ("Valores do vetor:\n");
    printf ("\n");
  for (i=0; i<10; i++){
     printf ("%lf\n", *(var+i));
  }
return 0;
}

//Exercício 10:
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int var[10] = {1,2,3,4,5,6,7,8,9,0};
  int i;

    printf ("Valores do vetor:\n");
    printf ("\n");
  for (i=9; i>=0; i--){
     printf ("%d\n", *(var+i));
  }
return 0;
}
