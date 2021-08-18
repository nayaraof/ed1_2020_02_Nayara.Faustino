 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int val[5] = {2,4,5,8,10};
   printf ("Vetor atual:\n");
   printf("{%d,%d,%d,%d,%d} ", val[0], val[1], val[2], val[3], val[4]);

   int *v;
   v = &val[2];
   *v = 6;

    printf ("\n");
    printf ("\nVetor alterado:\n");
    printf("{%d,%d,%d,%d,%d} ", val[0], val[1], val[2], val[3], val[4]);
    printf ("\n");
    printf ("\n<<Mapa de memoria>>");
    printf ("\n%u", v);
    return 0;

}
