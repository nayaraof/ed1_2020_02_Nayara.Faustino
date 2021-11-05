#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
    float x;
    float y;
};

struct circulo{
    struct ponto ponto;
    float raio;
};

struct circulo circulo1;

int main(){

    int x1=2.5 , y1=4.5;
    float raio = 2.0;

    circulo1.ponto.x = x1;
    circulo1.ponto.y = y1;
    circulo1.raio =  ;

    printf("Calculo: centro (%d,%d)\n",circulo1.ponto.x,circulo1.ponto.y);
    printf("Raio %.1f\n",circulo1.raio);
    printf("Área: %.2f\n",3.14*circulo1.raio*circulo1.raio);
    printf("Distancia: %.1f",sqrt(circulo1.ponto.x * circulo1.ponto.x + circulo1.ponto.y * circulo1.ponto.y));

    return 0;
}