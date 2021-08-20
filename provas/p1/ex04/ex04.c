#include <stdio.h>
#include <stdlib.h>
#include <math.h>

   struct ponto{
    int x,y;
};
typedef struct ponto Ponto;

struct circulo{
    Ponto p;
    int raio;
};
typedef struct circulo Circulo;

int main(){


   // Ex04: Um círculo pode ser definido com duas informações
   // - um ponto central; que é sua coordenada x,y no espaço cartesiano
   // - um raio; que é a distância da borda ao centro

   // Crie uma estrura Circulo. Para isso, crie uma estrutura chamada Ponto, que armazenará as
   // coordenadas reais (x,y) de um ponto. Em seguida, crie uma estrutura chamada Circulo,
   // que define o círculo, isto é, armazena um ponto e um raio.

   // No programa principal crie uma variável para definir um círculo e a partir dessa variável
   // e mostre a área e a distância do centro do círculo até a origem. 
   // fórmulas:
   // area = 3,14*r*r
   // distancia d = sqtr(x*x + y*y)
   
   // Exemplo de saída: Circulo: Centro (3,5); Raio 2; Área: 12.56; Distancia: 5.0
Circulo cir;

    printf("\nEntre com o ponto do circulo (x,y):");
    scanf("%d %d", &cir.p.x, &cir.p.y);

    printf("\nEntre com o raio do circulo:");
    scanf("%f",&cir.raio);
    printf("Calculo: Centro (%d, %d);",cir.p.x,cir.p.y);
    printf("Raio %d;",cir.raio);
    printf("Area: %f",3,14*cir.raio*cir.raio);
    printf("Distancia = %f",sqrt(cir.p.x*cir.p.x + cir.p.y*cir.p.y));



    return 0;
}
