#include <stdio.h>
#include <stdlib.h>

int main(){

    int negativos(float *vetor, int n);
    void imprime_vet_float(float *vetor, int n);

    float vetor[10] = {-100,200,-3,4,5,-6,7,-8,9,10};

    int z = 0;

    int n=10;


    z = negativos(&vetor, n);

    printf("Quantidade de numeros negativos: %d",z);


    imprime_vet_double(&vetor,n);

}


int negativos (float *vetor,int n){

    int i=0;
    int neg=0;

    for(i=0;i<n;i++){

        if(vetor[i] < 0 ){
            neg++;

        }
    }


    return neg;

}

void imprime_vet_double(float *vetor, int n){

    int i=0;

    printf("\nVetor:");

    for(i=0;i<n;i++){

        printf("%.2f, ", vetor[i]);

    }

}
