18)

#include <stdio.h>
#include <stdlib.h>

int main(){

    void maioremenor(double *vetor,int n);
    void imprime_vet_double(double *vetor, int n);

    double vetor[10] = {100,200,3,4,5,6,7,8,9,10};

    int n=10;

    maioremenor(&vetor,n);
    imprime_vet_double(&vetor,n);

}


void maioremenor (double *vetor,int n){

    int i=0;

    double maior = 0.0;
    double menor = 0.0;

    for(i=0;i<n;i++){

        if(vetor[i] > maior ){
            maior = vetor[i];
        }
    }
    menor = maior;
    for(i=0;i<n;i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }


     printf("Maior: %.2f, Menor: %.2f\n",maior,menor);

}

void imprime_vet_double(double *vetor, int n){

    int i=0;

    printf("Vetor:");

    for(i=0;i<n;i++){

        printf("%.2f, ", vetor[i]);

    }

}
