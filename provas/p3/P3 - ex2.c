int concatena(Lista * l1, Lista * l2, Lista * l3){
    if(l1 == NULL || l2 == NULL || l3 == NULL) 
        return -1;

    DLNode *aux; 
    aux = l1->end; 
    aux->next = l2->begin;
    aux = aux->next; 
    aux->prev = l1->end;

    aux = l2->end; 
    aux->next = l3->begin;
    aux = aux->next; 
    aux->prev = l2->end 

    l1->qtd += (l2->qtd + l3->qtd); 

    l2->begin = NULL;
    l2->end = NULL;

    l2->qtd = 0;
    l3->begin = NULL;
    l3->end = NULL;
    l3->qtd = 0;
   
   return 0;
}