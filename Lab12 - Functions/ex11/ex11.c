#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};
typedef struct ponto ponto;

void imprime_ponto(ponto p1, ponto p2, ponto p3);
void somapontos(ponto p1, ponto p2, ponto * p3);

int main() {

	ponto p1 = {20, 10};
	ponto p2 = {30, 20};
	ponto p3;


    somapontos(p1, p2, &p3);
    imprime_ponto(p1,p2,p3);

	return 0;
}

void somapontos(ponto p1, ponto p2, ponto * p3){

    (*p3).x = p1.x + p2.x;
    (*p3).y = p1.y + p2.y;
}
void imprime_ponto(ponto p1, ponto p2, ponto p3) {
	printf("A soma de (%.2f, %.2f) com (%.2f, %.2f) eh (%.2f, %.2f)", p1.x,p1.y,p2.x,p2.y,p3.x, p3.y);
}
