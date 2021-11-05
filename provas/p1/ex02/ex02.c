#include <stdio.h>
#include <stdlib.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
struct livro
{
    char *nome;
    double preco;
    int novo;          //1 para novo, 0 para usado
    int ano;
 };
 typedef struct livro Livro;

// Função:
// check:<<<erro: e2.4: Declaração da função com erros de saída (deveria retornar inteiro, não o objeto>>>>

// check:<<<erro: e2.6d: se todos os livros são novos o programa vai retornar errado>>>>

Livro buscar(Livro *lib, int size)
{
    Livro aux;
    aux.ano=10000000;// check:<<<comentário: poderia usar uma variável inteira normal>>>>
    for(int i;i<size;i++)
    {// check:<<<erro: faltou inicializar i com 0>>>>
        if(lib[i].novo==0){//se não ,não novo,
            if(lib[i].ano<aux.ano){
                aux=lib[i];
            }
        }
    } 
    return aux;
}
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)


int main(){

    int i, n;
    Livro *lib, li;

   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal
   printf("Informe quantos livros deseja cadastrar: ");

    scanf("%d", &n);
    lib = malloc(n*sizeof(Livro));
    for ( i = 0; i < n; i++){

         printf("Digite o nome do livro: ");
        scanf("%s", &lib[i].nome);

 

        printf("Digite o preco do livro: ");
        scanf("%f", &lib[i].preco);

 

        printf("Digite o status do livro: ");
        scanf("%d", &lib[i].novo);

 

        printf("Digite o ano do livro: ");
        scanf("%d", &lib[i].ano);
    }

// check:<<<erro: e2.2b: não usou o índice retornado pela função para mostrar os valores>>>>
// check:<<<erro: e2.1b: Não passou o tamanho do vetor para a função>>>>
    li=buscar(lib,sizeof(lib)); // check:<<<erro: sizeof(lib) é sempre 4>>>>
// check:<<<erro: não mostrou os dados dos livros>>>>

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)
   printf("Livro usado mais antigo: \n");

  
    return 0;
}
----------------------------------------------------------------------------------------------------------------------
    c
