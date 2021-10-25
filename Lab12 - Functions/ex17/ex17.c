#include <stdio.h>
#include <stdlib.h>


int main() {

void imprime_vet_int(int *vetori, int n);
void imprime_vet_double(double *vetori, int n);
void imprime_vet_float(float *vetori, int n);


	float vetori[5]={1,2,3,4,5};
	int n=5;


	imprime_vet_float(vetori,n);

	return 0;
}

void imprime_vet_int(int *vetori, int n){

    int i;

    printf("Vetor:");

    for(i=0;i<n;i++){

        printf("%d, ", vetori[i]);

    }

}



void imprime_vet_double(double *vetori, int n){

    int i;

    printf("Vetor:");

    for(i=0;i<n;i++){

        printf("%f, ", vetori[i]);

    }

}

void imprime_vet_float(float *vetori, int n){

    int i;

    printf("Vetor:");

    for(i=0;i<n;i++){

        printf("%f, ", vetori[i]);

    }

}
