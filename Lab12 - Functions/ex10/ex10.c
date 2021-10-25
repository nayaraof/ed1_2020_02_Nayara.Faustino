

#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};
typedef struct ponto ponto;

void imprime_ponto(ponto p);

int main() {

	ponto p = {20, 10};

	imprime_ponto(p);
	return 0;
}

void imprime_ponto(ponto p) {
	printf("(%.2f, %.2f)", p.x, p.y);
}
