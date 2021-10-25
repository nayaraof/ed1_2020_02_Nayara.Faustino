8)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   float x = 0.0;
   float y = 0.0;

   incp(x,y);

   return 0;
}

void incp(float x, float y){

    fflush(stdin);
    scanf("%f",&x);
    fflush(stdin);
    scanf("%f",&y);
    if(x>0){

        x = x + x*(y/100
        printf("Digite a % para aumentar");
        printf("Valor positivo = %f",x);

    }

    else{

        x = x - x*(y/100);
        printf("Digite a % para decrementar");
        printf("Valor negativo = %f",x);
    }

}
