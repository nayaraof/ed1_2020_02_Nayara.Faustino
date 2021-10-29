//TCircLinkedList.c



#include "ListaCircular.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct circ_node circ_node;

struct circlist{
    circ_node *end;
    int size;
};

struct circ_node{
    struct aluno data;
    circ_node *next;
};

List* list_create(){

    List *li;
    li = malloc(sizeof(List));

    if (li != NULL){
        li->end = NULL;
        li->size=0;
    }

    return li;
};

int list_free(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    circ_node *aux;
    aux = li->end;

    while (aux->next != li->end){

        aux = aux->next;
        free(aux);
    }

    free(aux);
    free(li->end);
    free(li);

    return 0;

}


int list_size(List *li){
    if (li == NULL) {
        return INVALID_NULL_POINTER;
    } else {
        return li->size;
    }
}


int list_print_forward(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(li->size==0){
        return -1;
    }

    circ_node *aux;
    aux = li->end->next;
    int vis =0;

    while(vis==0){
        printf("\nNome: %s", aux->data.nome);
        printf("\nMatricula: %d\n", aux->data.matricula);
        printf("Notas: %.2f %.2f %.2f\n",aux->data.n1,
                                   aux->data.n2,
                                   aux->data.n3);

        if(aux==li->end){
            vis = 1;
        }
        aux = aux->next;

    }

    return 0;
}

int list_push_front(List *li, aluno al){

    if (li == NULL){

        return INVALID_NULL_POINTER;
    }

    else{

        circ_node *node;
        node = malloc(sizeof(circ_node));

        if (node == NULL){

            return INVALID_NULL_POINTER;
        }

        else{

            node->data = al;

           //se a lista for vazia
        if (li->size == 0){
            li->end = node;
            li->size = li->size + 1;
            node->next = node;

            }

        else{

            node->next = li->end->next;
            li->end->next = node;
            li->size = li->size + 1;

        }

        return 0;

        }
    }
}

int list_push_back(List *li, struct aluno al){

    if (li == NULL){

        return INVALID_NULL_POINTER;

    } else {

       circ_node *node;
       node = malloc(sizeof(circ_node));

       if (node == NULL){
          return -1;

       } else {

        node->data = al;

        if (li->size == 0) {

          li->end = node;
          node->next = node;

        } else {

          circ_node *aux;
          //aux = li->end->next;
          aux = li->end;

          while(aux != li->end){

            aux = aux->next;

          }

            node->next = li->end->next;
            li->end->next = node;
            li->end = node;


        }

        li->size = li->size + 1;

        return 0;
       }
    }
}

int list_front(List *li, struct aluno *al){

    if(li==NULL){
        return INVALID_NULL_POINTER;
    }

    *al = li->end->next->data;

    return 0;

}

int list_back(List *li, struct aluno *al){

    if(li==NULL){
        return INVALID_NULL_POINTER;
    }

    *al = li->end->data;

    return 0;
}

int list_pop_back(List *li){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    circ_node *aux;
    aux = li->end;

    while(aux->next != li->end){

        aux = aux->next  ;
    }

    aux->next = li->end->next;
    free(li->end);
    li->end = aux;

    return 0;
}

int list_find_pos(List *li, int pos, struct aluno *al){

    if(li == NULL){
        return INVALID_NULL_POINTER;
    }

    if(pos <= 0){
        return INVALID_RANGE;
    }

    circ_node *aux;
    aux = li->end;

    int i=1;

    while(i != pos && aux->next!=li->end){
        aux = aux->next;
        i++;
    }

    *al = aux->data;

    return 0;
}

---------------------------------------
 //main.c
    
    #include "ListaCircular.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{

    struct aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {3,"Ricardo",7.5,8.7,6.8},
                         {4,"Bianca",9.7,6.7,8.4},
                         {5,"Ana",5.7,6.1,7.4}};

    int pos;
    struct aluno b[1] = {{1,"Bruno",10,20,30}};
    int i;
    struct aluno c;

    List *l1;
    l1 = list_create();

   for(i=0;i<4;i++){
    list_push_front(l1,a[i]);
    }

    int tamanho = list_size(l1);
    printf("Tamanho da lista: %d\n", tamanho);


    list_print_forward(l1);

    return 0;
}
