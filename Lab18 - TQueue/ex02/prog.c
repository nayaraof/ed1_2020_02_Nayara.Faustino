//2)Implemente o TAD Fila utilizando alocação encadeada.
//    Dica: muito código será semelhante ao de lista encadeada. 
//    Não coloque a definição da struct aluno no .h da fila
//---------------------------TadEncadeada.h-----------------------------------------------
#ifndef tadEncadeada
#define tadEncadeada
#include "aluno.h"

typedef struct Lista Lista;
Lista* criar_lista();
void libera_lista(Lista* li);
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_pos(Lista* li, int pos, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);
int remove_lista(Lista* li, int mat);
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int tamanho_lista(Lista* li);
int lista_vazia(Lista* li);
int lista_cheia(Lista* li);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
void imprime_lista(Lista* li);
void preenche_lista(struct aluno *al);

#endif


//---------------------------------------TadEncadeada.c-------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "tadEncadeada.h"

typedef struct Lista_no lista_no;

struct Lista_no{
    struct aluno dados;
    struct Lista_no *prox;
};

struct Lista{
    struct Lista_no *head;
};

Lista *criar_lista(){
    Lista *li;
    li = malloc(sizeof(Lista));
    if(li == NULL)
        return NULL;
    li->head = NULL;
    return li;
}

void libera_lista(Lista *li){
    if(li == NULL)
        return;
    lista_no *nozin;
        while(li->head != NULL){
    nozin = li->head;
    li->head = li->head->prox;
    free(nozin);
  }
  free(li);
}

int insere_lista_inicio(Lista *li, struct aluno al){
    if(li == NULL)
        return -1;
    lista_no *nozin;
    nozin = (lista_no *)malloc(sizeof(lista_no));
        if(nozin == NULL)
            return -1;
    nozin->dados = al;//armazena na lista
    nozin->prox = li->head;//aponta pra onde a head ta apontando
    li->head = nozin;//faz o ponteiro pra head apontar pro primeiro elemento
    return 0;
}

int insere_lista_final(Lista *li, struct aluno al){
    if(li == NULL)
        return -1;
    lista_no *nozin, *teste;
    nozin = (lista_no *)malloc(sizeof(lista_no));
        if(nozin == NULL)
            return -1;
    nozin->dados = al;
    if(li->head == NULL){
        nozin->prox = NULL;
        li->head = nozin;
        return 0;
  }
    teste = li->head;//aponta o ponteiro que vai percorrer pra cabeça
    while(teste->prox != NULL){//enquanto o proximo não for NULL continua
        teste = teste->prox;
    }
    if(teste->prox == NULL){//faz o nozin->prox apontar pra NULL e o ultimo elemento apontar pro nozin
        nozin->prox = teste->prox;
        teste->prox = nozin;
        return 0;
    }
    return 0;
}

int remove_lista_inicio(Lista *li){
  if(li == NULL)
    return -1;
  if(li->head == NULL)
    return -1;
  lista_no *nozin;
  nozin = li->head;
  li->head = nozin->prox;
  free(nozin);
  return 0;
}

int remove_lista_final(Lista *li){
  if(li == NULL)
    return -1;
  if(li->head == NULL)
    return -1;
  lista_no *prev, *nozin;
  nozin = li->head;
  while(nozin->prox != NULL){
    prev = nozin;
    nozin = nozin->prox;
  }
  if(nozin == li->head){
    li->head = NULL;
  }else{
    prev->prox = nozin->prox;
  }
  free(nozin);
  return 0;
}

int consulta_lista_mat(Lista *li, int mat, struct aluno *al){
  if(li == NULL || li->head == NULL)
    return -1;
  lista_no *nozin;
  nozin = li->head;
  while(nozin != NULL && nozin->dados.matricula != mat)
    nozin = nozin->prox;
  if(nozin->dados.matricula != mat)
    return -1;
  else{
    *al = nozin->dados;
    return 0;
  }
}

int consulta_lista_pos(Lista *li, int pos, struct aluno *al){
  if(li == NULL || li->head == NULL || pos <= 0)
    return -1;
  lista_no *nozin;
  nozin = li->head;
  int i = 1;
  while(nozin != NULL && i < pos){
    nozin = nozin->prox;
    i++;
  }
  if(nozin == NULL)
    return -1;
  else{
    *al = nozin->dados;
    return 0;
  }
}

int tamanho_lista(Lista *li){
  if(li == NULL)
    return -1;
  if(li->head == NULL)
    return 0;
  lista_no *nozin;
  nozin = li->head;
  int i = 0;
  while(nozin != NULL){
    nozin = nozin->prox;
    i++;
  }
  return i;
}

int lista_cheia(Lista *li){//não existe lista cheia
  return -1;
}

int lista_vazia(Lista* li){
  if(li == NULL)
    return -1;
  if(li->head == NULL)
    return 0;
  return 0;
}

void imprime_lista(Lista* li){
  if(li == NULL || li->head == NULL)
    return;
  lista_no* nozin = li->head;
  while(nozin != NULL){
    printf("Matricula: %d\n",nozin->dados.matricula);
    printf("Nome: %s\n",nozin->dados.nome);
    printf("Notas: %.1f %.1f %.1f\n",nozin->dados.n1,
                                     nozin->dados.n2,
                                     nozin->dados.n3);
    printf("-------------------------------\n");
    nozin = nozin->prox;
    }
}

void preenche_lista(struct aluno *al){
  printf("Matricula: ");
  scanf("%d", &al->matricula);
  setbuf(stdin, NULL);
  printf("Nome: ");
  scanf("%[^\n]%*c", al->nome);
  setbuf(stdin, NULL);
  printf("Digite as 3 notas: ");
  scanf("%f %f %f", &al->n1, &al->n2, &al->n3);
  setbuf(stdin, NULL);
}

int insere_lista_pos(Lista *li, int pos, struct aluno al){
  if(li == NULL)
    return -1;
  lista_no *nozin, *teste, *prev;
  int i = 1;
  nozin = malloc(sizeof(lista_no));
  if(nozin == NULL)
    return -1;
  nozin->dados = al;
  if(li->head == NULL){
    nozin->prox = NULL;
    li->head = nozin;
    return 0;
  }
  teste = li->head;
  while(teste != NULL && i < pos){
    prev = teste;
    teste = teste->prox;
    i++;
  }
  if(teste == NULL){
    nozin->prox = teste;
    prev->prox = nozin;
    return 0;
  }
  if(li->head == teste){
    nozin->prox = li->head;
    li->head = nozin;
    return 0;
  }
  return 0;
}

int insere_lista_ordenada(Lista *li, struct aluno al){
  if(li == NULL)
    return -1;
  lista_no *nozin, *teste, *prev;
  nozin = malloc(sizeof(lista_no));
  if(nozin == NULL)
    return -1;
  nozin->dados = al;
  if(li->head == NULL){
    nozin->prox = NULL;
    li->head = nozin;
    return 0;
  }
  teste = li->head;
  while(teste != NULL && teste->dados.matricula < al.matricula){
    prev = teste;
    teste = teste->prox;
  }
  if(li->head == teste){
    nozin->prox = li->head;
    li->head = nozin;
    return 0;
  }
  if(teste == NULL){
    prev->prox = nozin;
    nozin = NULL;
    return 0;
  }else{
    nozin->prox = teste;
    prev->prox = nozin;
    return 0;
  }
}

int remove_lista(Lista *li, int mat){
  if(li == NULL)
    return -1;
  if(li->head == NULL)
    return -1;
  lista_no *nozin, *prev;
  nozin = li->head;
  while(nozin != NULL && nozin->dados.matricula != mat){
    prev = nozin;
    nozin = nozin->prox;
  }
  if(nozin == NULL)
    return -1;
  if(nozin == li->head){
    li->head = nozin->prox;
    free(nozin);
    return 0;
  }else{
    prev->prox = nozin->prox;
    free(nozin);
    return 0;
  }
}

