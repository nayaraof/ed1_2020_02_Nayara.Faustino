/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.
Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)
*/

struct Lista
{
  int qtd;
  Aluno*dados;
  int MAX;
  int MaxInicial;
};

int remove_intervalo_lista(Lista*lista, int posI, int posF){
  if(lista == NULL || posI > lista->qtd || posF > lista->qtd) 
        return -1;

    for(int i=posI-1;i<=posF-1;i++){ 
        lista->dados[i] = lista->dados[i+1]; 
        lista->qtd--; 
    }

    return 0;
}