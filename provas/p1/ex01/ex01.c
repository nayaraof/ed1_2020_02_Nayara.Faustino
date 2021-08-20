#include <stdio.h>
#include <stdlib.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:
struct livro{
    char nome[100];
    double preco;
   int  novo;  //1 para novo, 0 para usado
    int ano;
 };
 typedef struct livro Livro;

int main(){

    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    printf("Informe quantos livros deseja cadastrar: ");
    int main()
 {
    int c;

 

    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d", &c);

 

    Livro *livro = malloc(sizeof(Livro)*c);

 

    for (int x = 0; x < c; x++){
        printf("Digite o nome do livro: ");
        scanf("%s", &livro[x].nome);

 

        printf("Digite o preco do livro: ");
        scanf("%f", &livro[x].preco);

 

        printf("Digite o status do livro: ");
        scanf("%d", &livro[x].novo);

 

        printf("Digite o ano do livro: ");
        scanf("%d", &livro[x].ano);
    }

 

    printf(livro[0].nome);
    printf(livro[1].nome);
 }
    
    
  free(livro);
    return 0;
}
