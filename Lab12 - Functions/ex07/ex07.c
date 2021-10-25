7)

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    float a = 0.0;
    float b = 0.0;

    Troque(a,b);

  return 0;

}

void Troque(float a, float b){

    float aux = 0.0;

    printf("Troca valores\n ");
    printf("Digite valor de a: ");
    fflush(stdin);
    scanf("%f",&a);

    printf("Digite valor de b: ");
    fflush(stdin);
    scanf("%f",&b);

    aux = a;
    a = b;
    b = aux;

    printf("Valor de a:%.2f b:%.2f", a,b);

}
