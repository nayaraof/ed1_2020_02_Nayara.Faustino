#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1 = 1;
    double v2 = 2;
    char c = 'a';

    int *p_v1;
    double *p_v2;
    char *p_c;

    p_v1 = &v1;
    p_v2 = &v2;
    p_c = &c;

    printf("\nEndereco de v1 %u", p_v1);
    printf("\nEndereco de v2 %u", p_v2);
    printf("\nEndereco de c %u", p_c);
    printf("\nEndereco+1 de v1 %u", p_v1+1);
    printf("\nEndereco+1 de v2 %u", p_v2+1);
    printf("\nEndereco+1 de c %u", p_c+1);
    printf("\nEndereco-1 de v1 %u", p_v1-1);
    printf("\nEndereco-1 de v2 %u", p_v2-1);
    printf("\nEndereco-1 de c %u", p_c-1);
    printf("\nEndereco-2 de v1 %u", p_v1-2);
    printf("\nEndereco-2 de v2 %u", p_v2-2);
    printf("\nEndereco-2 de c %u", p_c-2);
    printf("\nEndereco+2 de v1 %u", p_v1+2);
    printf("\nEndereco+2 de v2 %u", p_v2+2);
    printf("\nEndereco+2 de c %u", p_c+2);

    //Nome:  var-2     var-1      var      var+1     var+2
    //p_v1: 6356712 | 6356716 | 6356720 | 6356724 | 6356728
    //p_v2: 6356696 | 6356704 | 6356712 | 6356720 | 6356728
    //p_c : 6356609 | 6356710 | 6356711 | 6356712 | 6356713
}
