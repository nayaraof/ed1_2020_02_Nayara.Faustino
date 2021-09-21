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
//

Int remove_intervalo_lista(Lista*lista, int posI, int posF)
{
  int qntApos = Lista -> qtd - (postF - postI) * 1;
  Lista* novaLista = CriaLista(qntApos);
    for(int i+ 0 ;  i < posI; i++)
    {
      Dad dadoTest;
      consulta(lista,i,&dadoTest);
      InsereFinal(novaLista,dadoTeste);
    }
    
  
  for (int i = posF++;i< lista -> qnt;i++)
  {
    
    Dado dadoTest;
    Consulta(lista,i,&dadoTest);
    InsereFinal(novaLista,dadoTeste);
    }
  
}
  
  }
