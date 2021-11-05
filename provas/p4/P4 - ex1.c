int concat_string(int *vet1, int *vet2, int *tamanho1, int *tamanho2){
    if (vet1 == NULL || vet2 == NULL || tamanho1 == NULL || tamanho2 == NULL)
        return -1;
​​​​​
    int *aux, tamanho3 = *tamanho1 + *tamanho2;

    aux = malloc(sizeof(int) * tamanho3); 

    if (aux == NULL)
        return -1;
    int j = 0;
    for(int i=0;i<tamanho3;i++){​​​​​
        if(i < tamanho1) 
            aux[i]=vet1[i];
        if(i > tamanho1){
            aux[i]=vet2[j]; 
            j++;
        }​​​​​
    }
    
    vet1 = aux;

    *tamanho1 = tamanho3; 

    return 0;
}​​​​​

int main(){
    int vet1[3]={​​​​​1,5,2}​​​​​, vet2[2]={​​​​​10,30}​​​​​;
    concat_string(vet1,vet2,3,2);
    printf("Vetor Concatenado = ");
    for(int i = 0; i < 5; i++){​​​​​
        printf("%d ", vet1[i]);
    }​​​​​
}​​​​​
