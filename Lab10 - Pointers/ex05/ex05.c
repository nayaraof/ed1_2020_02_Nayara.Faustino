#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[] = "Jose Augusto";
    char *c;
    c = &nome;

    printf("%s", c);
    c ++;

}
