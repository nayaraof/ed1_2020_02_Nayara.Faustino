
-------------------------------------------------------------------------------------------------------------------------------------------------
    correcao_sub
    #include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

struct livro{
    char nome[100]; 
    double preco;
    int  novo;
    int ano;
 };

 typedef struct livro Livro; 

int main(){
 
    int c; 
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d", &c); 
    
    Livro *livro = malloc(sizeof(Livro) * c); 
 
    for (int x = 0; x < c; x++){  
        printf("Digite o nome do livro: ");
        getchar();
        gets(livro[x].nome);
        printf("Digite o preco do livro: ");
        scanf("%lf", &livro[x].preco); 
        printf("Digite o status do livro: ");
        scanf("%d", &livro[x].novo);
        printf("Digite o ano de compra livro: ");
        scanf("%d", &livro[x].ano);
    }

    for (int x = 0; x < c; x++){ 
        printf("Nome do livro: ");
        puts(livro[x].nome); 
        printf("Preco do livro: R$ %.2f\n",livro[x].preco);
        printf("Status do livro: ");
        if(livro[x].novo == 1){ 
            printf("Novo\n");
        } else{
            printf("Usado\n");
        }
        printf("Ano de compra do livro: %d\n", livro[x].novo);
        printf("\n");
    }
     
    free(livro); //tinha me esquecido e levei check do prof
    return 0;
}
*/
 

    Livro *livro = malloc(sizeof(Livro)*c);

 

    for (int x = 0; x < c; x++){
        printf("Digite o nome do livro: ");
        scanf("%s", &livro[x].nome);// check:<<<erro: só le uma palavra do nome do livro>>>>

 

        printf("Digite o preco do livro: ");
        scanf("%f", &livro[x].preco);

 

        printf("Digite o status do livro: ");
        scanf("%d", &livro[x].novo);

 

        printf("Digite o ano do livro: ");
        scanf("%d", &livro[x].ano);
    }

 

    printf(livro[0].nome);
    printf(livro[1].nome);// check:<<<erro: se a pessoa digitou um livro só vai dar erro>>>>
 }
    
    
  free(livro);
    return 0;
}
