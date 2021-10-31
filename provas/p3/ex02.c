

int  concatena(Lista * l1, Lista * l2,Lista * l3){
    Lista aux,aux2;


    aux2 = *l3;

    aux = *l1;

    while(aux != NULL){
        Lista n = (Lista) malloc(sizeof(struct no));// check:<<<erro: não é para fazer nenhum tipo de alocação>>>>

        if(n == NULL){
            return 0;
        }


        n->info = aux->info;// check:<<<erro: quem é info?>>>>

// check:<<<erro: não consegui entender>>>>
        if(aux2 == NULL){
            aux2 = n;
        }else{
            aux2->prox = n;
            aux2 = aux2->prox;
        }

        aux = aux->prox;
    }

   aux = *l2;

    while(aux != NULL){
        Lista n = (Lista) malloc(sizeof(struct no));
        if(n == NULL)
            return 0;
        n->info = aux->info;
        if(aux2 == NULL){
            aux2 = n;
        }else{
            aux2->prox = n;
            aux2 = aux2->prox;
        }

        aux = aux->prox;
    }

    if(aux2 != NULL)
        aux2->prox = NULL;

    return 1;
}
  }
