#include <stdio.h>
#include <stdlib.h>

int main(){

    void copiarvet(float *vet_origem, float *vet_dest, int n);
    void imprime_vet_float(float *vetor, int n);

    float vet_origem[10] = {-100,200,-3,4,5,-6,7,-8,9,10};

    float vet_dest[10] = {10,20,-30,40,50,-60,7,-8,9,10};

    int n = 10;

    int z = 0;

    copiarvet(&vet_origem, &vet_dest, n);

}


void copiarvet(float *vet_origem, float *vet_dest, int n){

    int i=0;


        for(i=0;i<n;i++){

            vet_dest[i] = vet_origem[i];

        }

        for(i=0;i<n;i++){

            printf("%.2f, ", vet_dest[i]);

        }
    }
