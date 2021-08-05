#include <stdio.h>
#include <stdlib.h>

int main () {
    float n1,n2,n3,n4;
    float media =0;
    printf("Digite as notas do aluno:");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    media = ((n1+n2+n3+n4)/4 );

    printf(" a media eh %f ", media);

    return 0 ;

}

