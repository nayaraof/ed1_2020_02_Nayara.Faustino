#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

typedef struct list_node List_node;

struct list {
 List_node *head;
 int size; // qtd
};


struct list_node{
    struct aluno data;
    List_node *next;
};

List* list_create(){

    List *li;
    li = malloc(sizeof(List));

    if(li != NULL){
        li->head = NULL;
    }

    return li;

}


int list_push_front(List *li, struct aluno al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *node;
    node = malloc(sizeof(List_node));

    if(node == NULL){
        return OUT_OF_MEMORY;
    }

    node->data = al;
    node->next = li->head;
    li->head = node;

    return 0;

}

int list_push_back(List *li, struct aluno al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *node = malloc(sizeof(List_node));

    if(node == NULL){
        return OUT_OF_MEMORY;
    }

    if(li->head == NULL){

        li->head = node;
        node->next = NULL;

        return 0;

    }

    List_node *aux;
    aux = li->head;

    while (aux->next!=NULL){

        aux = aux->next;

    }

    aux->next = node;
    node->next = NULL;

    node->data = al;

    return 0;
}

int list_insert(List *li, int pos, struct aluno al){

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

int list_insert_sorted(List *li, struct aluno al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *node;
    node = malloc(sizeof(List_node));

    if(node == NULL){
        return OUT_OF_MEMORY;
    }

    node->data = al;

    List_node *aux;
    aux = li->head;

    if (li->head == NULL){ //se a lista for vazia

        li->head = node;
        node->next = NULL;
        return 0;
    }

    if (aux->data.matricula > al.matricula){//verificar 1 elemento
        node->next = li->head;
        li->head = node;
        return 0;
    }

    while(aux->next != NULL && al.matricula > aux->next->data.matricula){

        aux = aux->next;

    }

    node->next = aux->next;
    aux->next = node;



    return 0;

}

list_print(List *li){

    if(li == NULL){
        return -3;
    }

    List_node *node;
    node = li->head;

    while (node != NULL){
        printf("Nome: %s ", node->data.nome);
        printf("Matricula: %d\n", node->data.matricula);
        node = node->next;
    }
}

int list_size(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *aux;
    aux = li->head;

    int size=0;

    while(aux != NULL){
        aux = aux->next;
        size++;
    }

    return size;
}

list_free(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *aux;
    aux = li->head;

    while(aux != NULL){
        li->head = aux->next;
        free(aux);
        aux = li->head;
    }

    free(li);

return 0;

}



int list_find_mat(List *li, int nmat, struct aluno *al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(nmat <= 0){
        return INVALID_RANGE;
    }

    List_node *aux;
    aux = li->head;

    while(nmat != aux->data.matricula && aux->next!=NULL){
        aux = aux->next;


    }

    *al = aux->data;

    return 0;
}

int list_find_pos(List *li, int pos, struct aluno *al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(pos <= 0){
        return INVALID_RANGE;
    }

    List_node *aux;
    aux = li->head;

    int i=1;

    while(i != pos && aux->next!=NULL){
        aux = aux->next;
        i++;
    }

    *al = aux->data;

    return 0;
}

int list_pop_front(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *aux;
    aux = li->head;

    li->head = aux->next;
    free(aux);

    return 0;
}

int list_pop_back(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *aux;
    aux = li->head;

    while(aux->next->next != NULL){
        aux = aux->next;
    }

    free(aux->next);
    aux->next = NULL;

    return 0;
}

int list_get_pos(List *li, int nmat, int *pos){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(pos<=0){
        return INVALID_RANGE;
    }

    if(nmat<=0){
        return INVALID_RANGE;
    }

    List_node *aux;
    aux = li->head;

    int i=1;

    while(nmat != aux->data.matricula && aux != NULL){
        aux = aux->next;
        i++;
    }
    *pos = i;

    return pos;

}

int list_erase(List *li, int pos){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(pos <= 0){
        return INVALID_RANGE;
    }

    List_node *aux;
    aux = li->head;
    int i = 1;

    while(i != pos-1 && aux->next != NULL){
        aux = aux->next;
        i++;
    }

    //se so tiver 1 elemento na lista
    if(pos == 1 && aux->next==NULL){
        free(aux);
    }

    //ta no meio da lista
    else if (aux->next != NULL){
        aux = aux->next;
        aux->next = aux->next->next;
        free(aux);
    }
    //ultimo elemento
    else{
        free(aux->next);
        aux->next = NULL;

    }

    return 0;


}

int list_front(List *li, struct aluno *al){

    if(li==NULL){
        return INVALID_NULL_POINTER;
    }

   *al = li->head->data;

    return 0;

}

int list_back(List *li, struct aluno *al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    List_node *aux;
    aux = li->head;

    while(aux->next != NULL){
        aux = aux->next;
    }

    *al = aux->data;

    return 0;
}

































