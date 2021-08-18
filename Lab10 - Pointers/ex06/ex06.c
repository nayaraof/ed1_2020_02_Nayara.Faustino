#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *num, *num1;
    int p1, p2;
    num = &p1;
    num1 = &p2;

    printf ("Entre com dois valores: ");
    scanf ("%i %lf", num, num1);

    printf ("Os numeros sao: %d e %lf", *(int*)num, *(double*)num1);

}
