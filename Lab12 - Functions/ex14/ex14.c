#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};
typedef struct ponto ponto;

void imprime_ponto(ponto p1);
void multponto(ponto * p1, float * con);

int main() {

	ponto p1;

	float con;

    multponto(&p1,&con);
    imprime_ponto(p1);

	return 0;
}

void multponto(ponto * p1, float * con){

    printf("Digite o valor dos pontos");
    scanf("%f %f",&(*p1).x,&(*p1).y);

    float a;
    printf("Digite o valor da constante");

    scanf("%f",&a);

    *con = a;

    (*p1).x = (*p1).x * a;
    (*p1).y = (*p1).y * a;
}
void imprime_ponto(ponto p1) {
	printf("O valor de ponto eh(%.2f, %.2f)", p1.x,p1.y);
}

