#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main()
{

double x = 0.0;
int n = 0;

    Quadrado(x);

  return 0;

}

void Quadrado(float x){

    double aux=0;
    printf("Numero Quadrado perfeito?\n ");
    printf("Digite valor de x: ");
    fflush(stdin);
    scanf("%f",&x);

    if(x>=0){

        x = x*x;

        aux = fmod(sqrt(x),2.0);

        if(aux == 0){
                printf("\nVerdadeiro");
        }

        else printf("\nFalso");

     }
}
