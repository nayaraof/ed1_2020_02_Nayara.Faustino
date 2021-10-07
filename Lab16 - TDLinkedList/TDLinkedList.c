#include <stdlib.h>
#include <stdio.h>
#include "TDLinkedList.h"

typedef struct dlnode dlnode;

struct DlinkedList{
    dlnode *begin;
    dlnode *end;
    int size;
};

struct dlnode{
    struct aluno data;
    dlnode *next;
    dlnode *prev;
};

List* list_create(){

    List *li;
    li = malloc(sizeof(List));

    if (li != NULL){
        li->begin = NULL;
        li->end = NULL;
        li-> size = 0;
    }

    return li;
};

int list_push_front(List *li, aluno al){

    if (li == NULL){

        return INVALID_NULL_POINTER;
    }

    else{

        dlnode *node;
        node = malloc(sizeof(dlnode));

        if (node == NULL){
            return INVALID_NULL_POINTER;
        }

        else{
            node->data = al;
            node->prev = NULL;

           //se a lista for vazia
        if (li->size == 0){

            li->begin = node;
            li->end = node;
            li->size = li->size + 1;
            node->next = NULL;


            }

        else{
            node->next = li->begin;
            li->begin->prev = node;
            li->begin = node;
            li->size = li->size + 1;


        }

        return 0;

        }
    }
}

int list_push_front(List *li, aluno al){

    if (li == NULL){

        return INVALID_NULL_POINTER;
    }

    else{

        dlnode *node;
        node = malloc(sizeof(dlnode));

        if (node == NULL){
            return INVALID_NULL_POINTER;
        }

        else{
            node->data = al;
            node->prev = NULL;

           //se a lista for vazia
        if (li->size == 0){

            li->begin = node;
            li->end = node;
            li->size = li->size + 1;
            node->next = NULL;


            }

        else{
            node->next = li->begin;
            li->begin->prev = node;
            li->begin = node;
            li->size = li->size + 1;


        }

        return 0;

        }
    }
}int list_insert(List *li, int pos, struct aluno al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(pos <= 0){

        return INVALID_RANGE;
    }

    List_node *aux;
    aux = li->head;

    int i = 1;

    while (i!=pos-1 && aux!=NULL){

        aux = aux->next;
        i++;
    }

    if(aux == NULL){

        return INVALID_RANGE;
    }

    List_node *node = malloc(sizeof(List_node));

    if(node == NULL){
        return OUT_OF_MEMORY;
    }

    if(pos==1){
        node->next = li->head;
        li->head = node;
    }

    node->next = aux->next;
    aux->next = node;

    node->data = al;

    return 0;

}


int list_print_reverse(List *li){

    if(li== NULL){
        return INVALID_NULL_POINTER;
    }

    dlnode *aux;
    aux = li->end;

    printf("Nome: %s\n", aux->data.nome);
    while(aux->prev != NULL){

        aux = aux->prev;
        printf("Nome: %s\n",aux->data.nome);

    }
    return 0;
}


int list_print_forward(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    dlnode *aux;
    aux = li->begin;

    while(aux != NULL){
        printf("\nNome: %s", aux->data.nome);
        printf("\nMatricula: %d\n", aux->data.matricula);
        printf("Notas: %.2f %.2f %.2f\n",aux->data.n1,
                                   aux->data.n2,
                                   aux->data.n3);
        aux = aux->next;
    }

    return 0;
}
