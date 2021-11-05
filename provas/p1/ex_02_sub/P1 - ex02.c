#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro{
    char nome[100]; 
    double preco;
    int novo;
    int ano;
};

typedef struct livro Livro;

int buscar(Livro *lib, int size){
    int aux = lib[0].ano; 
    for(int i=0;i<size;i++){
        if(lib[i].ano < aux){
            aux = lib[i].ano;
        }
    } 
    return aux;
}

int main(){

    int n;
    Livro *lib;

   
    printf("Informe quantos livros deseja cadastrar: ");

    scanf("%d", &n);
    lib = malloc(n*sizeof(Livro));

    for (int i = 0; i < n; i++){ 
        printf("Digite o nome do livro: ");
        getchar();         
        gets(lib[i].nome);
        printf("Digite o preco do livro: ");
        scanf("%lf", &lib[i].preco);
        getchar();
        printf("Digite o status do livro: ");
        scanf("%d", &lib[i].novo);
        getchar();
        printf("Digite o ano de compra livro: ");
        scanf("%d", &lib[i].ano);
        getchar();
    }

    printf("\n");
    printf("O ano do livro usado mais antigo : %d\n", buscar(lib,n));

    free(lib);
    return 0;
}