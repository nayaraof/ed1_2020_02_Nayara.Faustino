#include "TLista.h"
#include <stdio.h>

struct lista{

    int qtd;
    struct aluno dados[MAX];

};

Lista* cria_lista(){

    Lista *li;

    li = malloc(1*sizeof(Lista));

    if(li != NULL){
        li->qtd = 0;
    }
    return li;
}


void imprime_lista(Lista* li){

    if(li == NULL){
        return NULL;
    }
    int i;

    for(i=0;i<li->qtd;i++){

        printf("Matricula:%d\nNome:%s\nNota1%.2f\nNota2%.2f\nNota3%.2f\n\n",li->dados[i].matricula,li->dados[i].nome,li->dados[i].n1,li->dados[i].n1,li->dados[i].n3);
    }

}

int insere_lista_inicio(Lista* li, struct aluno al){

    if(li == NULL){
        return -1;
    }

    if(li->qtd == MAX){//lista cheia //fazer realoc

    return -1;
    }

    int i;

    for(i=li->qtd-1; i>=0; i--){

        li->dados[i+1] = li->dados[i];

    }

    li->dados[0] = al;
    li->qtd++;

        return 0;

}

int insere_lista_final(Lista *li, struct aluno al){

    if(li == NULL){
        return -1;
    }

    int i;

    li->dados[li->qtd] = al;
    li->qtd++;


}


int tamanho_lista(Lista* li){

    if (li == NULL){
        return -1;
    }

    if (li->qtd <0){
        return -1;
    }

    printf("Tamanho da lista: %d\n",li->qtd);

    return 0;
}

void libera_lista(Lista* li){

    free(li);
}

int consulta_lista_pos(Lista* li, int pos, struct aluno *al){

    if(li == NULL){

        return -1;
    }

    if(pos <0){
        return -1;
    }

    *al = li->dados[pos-1];

    return 0;

}


int consulta_lista_mat(Lista* li, int mat, struct aluno *al){

    if(li == NULL){
        return -1;
    }

    int i;

    for(i=0; i < li->qtd; i++){

        if(li->dados[i].matricula == mat){

        *al = li->dados[i];

        return 0;
       }

    }

}

int remove_lista(Lista* li, int mat){

    int i=0;
    int j=0;

    while(i<li->qtd && li->dados[i].matricula != mat){ //percorre a lista, enquanto i < qtd de elementos da lista, e enquanto a matricula for diferente

        i++;

    }

    if(i == li->qtd){ //se o i, somar ate chegar na quantidade, e pq n conseguiu encontrar o elemento

        return 0;

    }

    for(j=i; j < li->qtd-1;j++){ // j recebe o i, com o elemento em q a matricula eh igual, enquanto j < qtd -1, ele vai sobrescrevendo

        li->dados[j] = li-> dados[j+1]; // o valor da posicao j, pelo valor da posicao seguinte
    }

    li->qtd--;
    return 0;

}

int remove_lista_final(Lista *li){

    if(li==NULL){
        return -1;
    }

    if(li->qtd == 0){
        return -1;
    }

    li->qtd--;
    return 0;

}

int remove_lista_inicio(Lista* li){

    if(li==NULL){
        return-1;
    }
    if(li->qtd==0){
        return-1;
    }

    int k=0;
    for(k=0;k<li->qtd-1;k++){
        li->dados[k] =li->dados[k+1];
    }

    li->qtd--;

    return 0;

}

int remove_lista_otimizado(Lista*li,int mat){

    if(li==NULL){
        return -1;
    }

    if(li->qtd==0){
        return -1;
    }

    int i = 0;

    while(i<li->qtd&&li->dados[i].matricula!=mat){
        i++;
    }

    if(i==li->qtd){ //nao encontrou
        return 0;
    }

    li->qtd--;
    li->dados[i] = li->dados[li->qtd];

    return 0;

}

int insere_lista_ordenada(Lista *li, struct aluno al){

    if(li == NULL){
        return -1;
    }

    if(li->qtd == MAX){
        return -1;
    }

    int i=0;
    int k=0;

    while(i<li->qtd && li->dados[i].matricula < al.matricula){
        i++;
    }

    for(k=li->qtd; k>= i; k--){
        li->dados[k+1] = li->dados[k];
    }

    li->dados[i] = al;
    li->qtd++;

    return 0;
}

int lista_cheia(Lista* li){

    if(li->qtd == MAX){
        printf("\nLista cheia");
        return 0;
    }

}

int lista_vazia(Lista* li){

    if(li->qtd == 0){
        printf("\nLista vazia");
        return 0;
    }

}











