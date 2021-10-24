//1)Implemente o TAD Fila na forma de um wrapper para uma lista encadeada 
//(ver dica abaixo)Dica para os exercícios 1  -
//Crie um arquivo .h com a definição da struct aluno (aluno.h)-
//Altere seus códigos de listas de forma a retirar a definição da struct aluno do arquivo .h-
//Inclua no .h de suas listas um comando #include aluno.h-
//Inclua no .h de sua fila um comando #include aluno.h- 
//No arquivo .c da fila faça um include do .h da lista. 
//Não o inclua no .h pois dessa forma as funções da lista ficariam visíveis no main.- 
//No main faça o include do .h da fila

//--------------------- Aluno.h -------------------------------------------------------------------------------------
#ifndef A
#define A

struct aluno{
  int matricula;
  char nome[30];
  float n1,n2,n3;
};

typedef struct aluno Aluno;

#endif
//-------------------------TadFila.c---------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "tadFila.h"
#include "tadEncadeada.h"

struct queue{
  Lista *li;
};

Queue *queue_create(){
  Queue *qe;
  qe = malloc(sizeof(Queue));
  if(qe != NULL){
    qe->li = criar_lista();
    if(qe->li == NULL){
      return NULL;
    }
  }
  return qe;
}

int queue_push(Queue *qe, struct aluno al){
  return insere_lista_inicio(qe->li, al);
}

void queue_print(Queue *qe){
  imprime_lista(qe->li);
}

int queue_pop(Queue *qe){
  return remove_lista_inicio(qe->li);
}

int top(Queue *qe, struct aluno *al){
  return consulta_lista_pos(qe->li, tamanho_lista(qe->li), al);
}

int queue_size(Queue *qe){
  return tamanho_lista(qe->li);
}

int queue_empty(Queue *qe){
  return lista_vazia(qe->li);
}

int queue_full(Queue *qe){
  return lista_cheia(qe->li);
}

//-------------------------main.c-----------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include "tadFila.h"

void fill_stack(struct aluno *al){
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

int main()
{
    Queue *qe;
    Aluno al;
    qe = queue_create();
    if(qe == NULL){
    printf("Erro ao criar lista");
    }

    fill_stack(&al);
    queue_push(qe, al);
    fill_stack(&al);
    queue_push(qe, al);
    fill_stack(&al);
    queue_push(qe, al);

       printf("Tamanho: %d\n\n\n\n",queue_size(qe));

    system("pause");
    return 0;
}
