/*Considere o TAD TDLinkedList que serve para manipular uma lista duplamente 
encadeada de alunos (a lista usada na prática 16 – copiar o código 
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que 
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir 
a nota máxima). Pode-se utilizar qualquer função já implementada na
lista (que estão no .h)


*/

int list_erase_max_nota_n1(TDLinkedList *list){
     if (list == NULL)
        return INVALID_NULL_POINTER;
    if (list->begin == NULL)
        return ELEM_NOT_FOUND;

    DLNode *aux1, *aux2;
    aux1 = list->begin;
    float maior = 0;

    while (aux1 != NULL){
        if (aux1->data.n1 > maior)
            maior = aux1->data.n1;
        aux1 = aux1->next;
    }

    aux1 = list->begin; 
    while (aux1 != NULL){
        if (aux1->data.n1 == maior){
            if (aux1->next == NULL){
                aux2 = aux1->prev; 
                aux2->next = NULL; 
                list->end = aux2; 
            } else
            if (aux1->prev == NULL){ 
                aux2 = aux1->next; 
                aux2->prev = NULL; 
                list->begin = aux2;
            } else { 
                aux2 = aux1->prev; 
                aux2->next = aux1->next;
                aux2 = aux1->next; 
                aux2->prev = aux1->prev;
            }
            list->size--; 
            free(aux1);
        }
        aux1 = aux1->next;
    }
    return SUCCESS;
}
