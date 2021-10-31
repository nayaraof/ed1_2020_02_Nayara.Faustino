/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente 
encadeada de alunos (a lista usada na prática 16 – copiar o código 
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que 
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir 
a nota máxima). Pode-se utilizar qualquer função já implementada na
lista (que estão no .h)


*/

  
  int list_erase_max_nota_n1(TDLinkedList * li){

    if(list_size(li)==NULL)// check:<<<erro: size com NULL nao comparáveis>>>>
        return 0;
    aluno aux = li->begin;// check:<<<erro: ponteiro ao invés de aluno>>>>
    aluno aux = 
    float max = 10;//total// check:<<<erro: essa será a máxima, mas para procurar tem que ser a mínima>>>>
    i=0;
    while (aux->prox != NULL){
        if(aux->dados->n1=max){// check:<<<erro: está testando com '=' ao invés de > (= é atribuição)>>>>
            max=aux->dados->n1
            list_erase(aux,i);// check:<<<erro: pode nao ser a maior nota e já está apagando>>>>
            
        }
        aux=aux->prox;
        i++;
    }

}
