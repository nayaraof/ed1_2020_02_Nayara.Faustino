/*
1) Considerando o TAD ListaSequencial¹, implemente uma nova 
função chamada troca_pos_lista, que troca dois elementos da
lista de posição. Na chamada da função o usuário deverá informar
os dois elementos que devem ser trocados. Por exemplo, na chamada
abaixo, é feita a troca dos elementos na posição 4 e 10, isto é,
o elemento da posição 4 vai para a posição 10, e o da  posição 10
vai para a posição 4. Nas situações inválidas a função deverá
retornar como código de erro o número -1. Sucesso retornar 0. 
Mantenha o padrão pré-definido do TAD, que diz que a
posição 1 corresponde ao primeiro elemento da lista.

Exemplo da chamada da função
troca_pos_lista( lista, 4, 10)


¹struct lista
 {
    int qtd;
    struct aluno dados[MAX];
 };
*/
// check:<<<erro: e1.1: Declaração da função errada.>>>>
int troca_pos_lista (struct lista lista , int i, int j){
if(lista == NULL || i<0 || j<0){
return-1;
}// check:<<<erro: e1.2: erro em testes de tamanho da lista com as posições de troca (posições aceitas >=1 <=qtd/ teste de lista null>>>>

struct aluno auxA;
auxA = lista.dados[j]; // c=b
lista.dados[j]=lista.dados[i]; // b=a
lista.dados[i]=auxA; //a=c

return 0;

}
