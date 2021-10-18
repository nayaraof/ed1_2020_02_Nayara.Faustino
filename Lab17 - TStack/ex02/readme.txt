#include <stdlib.h>

typedef struct stack Stack;

Stack *stack_create(int tamanhomax);
int stack_push(Stack *st, char elemento);
char stack_pop_top(Stack *st);

--------------------------------------------------------------------------
TStack.c
--------------------------------------------------------------------------
#include "TStack.h"

struct stack {
   char *dados;
   int size;
   int tamanhomax;
};

Stack *stack_create(int tamanhomax){

   Stack *st;
   st = malloc(sizeof(Stack));

   if (st != NULL){
     st->size = 0;
   }

   st->dados = malloc(tamanhomax * sizeof(char));

   st->tamanhomax = tamanhomax;
   st->size = 0;

   return st;

}

int stack_push(Stack *st, char elemento){

    if (st == NULL){
        return -1;
    } else {
        if (st->size >= st->tamanhomax){
            return -2;
    } else {
        st->dados[st->size] = elemento;
        st->size++;
        return 0;
      }
    }
}



char stack_pop_top(Stack *st){

    if (st == NULL){
        return -1;
        }

        else {

            if (st->size == 0){
                return -2;
            } else {
                st->size--;
                return st->dados[st->size];
            }
        }
}

---------------------------------------------------------------------------------------------
main.c
---------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include "TStack.h"
#include <string.h>

char *infixaParaPosfixa (char *inf);

int main(){

    char topo;
    char expressao [1000];
    char *posf;
    posf = malloc ((1000)* sizeof (char)); //+1 por causa do /0

    printf("\n\nDigite a expressao");
    fflush(stdin);
    gets(expressao);
    posf = infixaParaPosfixa(expressao);
    puts("\n");
    puts(posf);

    return 0;
}
//inf = expressao a converter
char *infixaParaPosfixa (char *inf) {
   int n = strlen (inf);
   char *posf;
   posf = malloc ((n+1) * sizeof (char)); //+1 por causa do /0
   Stack *pilha;
   pilha = stack_create(n); // create pilha com o tamanho da expressao passada
   //checagens pilha
   stack_push(pilha, inf[0]);       // empilhou o primeiro elemento da string

   int j = 0;
   for (int i = 1; inf[i] != '\0'; ++i) {

      switch (inf[i]) {
          char x;

         case '(':  stack_push(pilha,inf[i]);
                   break;
         case ')': x = stack_pop_top(pilha);
                   while (x != '(') {
                      posf[j++] = x;
                      x = stack_pop_top(pilha);
                   }
                   break;
         case '+':
         case '-': x = stack_pop_top(pilha);

                   while (x != '(') {
                      posf[j++] = x;
                      x = stack_pop_top(pilha);
                   }
                    stack_push(pilha,x);
                    stack_push(pilha,inf[i]);
                   break;
         case '*':
         case '/': x = stack_pop_top(pilha);
                   while (x != '(' && x != '+' && x != '-') {
                      posf[j++] = x;
                      x = stack_pop_top(pilha);
                   }
                    stack_push(pilha,x);
                    stack_push(pilha,inf[i]);
                   break;
         default:  posf[j++] = inf[i];

      }

   }
   posf[j] = '\0';
   return posf;
}

