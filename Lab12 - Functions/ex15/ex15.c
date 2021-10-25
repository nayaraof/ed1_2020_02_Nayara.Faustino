15) 

#include <stdio.h>
#include <stdlib.h>

struct ponto {
	float x;
	float y;
};

typedef struct ponto ponto;

void inc_dir(ponto * p1, char l);

int main() {

	ponto p1 = {10,20};

	char n = 'n';
	char s = 's';
	char l = 'l';
	char o = 'o';

	inc_dir(&p1, n);
	inc_dir(&p1, s);
	inc_dir(&p1, l);
	inc_dir(&p1, o);


	return 0;
}


void inc_dir(ponto * p1, char l){

    switch(l) {
        case 'n':
            (*p1).y = (*p1).y + 1;

            printf("Norte:(%.2f, %.2f)\n", (*p1).x,(*p1).y);
            break;
        case 's':
            (*p1).y = (*p1).y - 1;
            printf("Sul:(%.2f, %.2f)\n", (*p1).x,(*p1).y);
            break;
        case 'l':
            (*p1).x = (*p1).x +1;

            printf("Leste:(%.2f, %.2f)\n", (*p1).x,(*p1).y);
            break;
        case 'o':
            (*p1).x = (*p1).x - 1;

            printf("Oeste:(%.2f, %.2f)\n", (*p1).x,(*p1).y);
            break;
    }
}
