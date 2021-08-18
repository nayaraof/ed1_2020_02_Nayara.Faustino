#include <stdio.h>
#include <stdlib.h>

int calcNep(int n, int i, int j, float k, float e){

     n=10;
     e=1.0;
   for(i=1; i<=n; i++){
     k=1;

   for(j=1;j<=n;j++){
     k = k * j;
}
   e = e + 1.0/ k;
}
    printf("Neperiano = %f\n", e);
}

int main()
{
    int n, i, j;
    float k, e;
    calcNep(n, i, j, k, e);

    return 0;
}
