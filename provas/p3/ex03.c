/*
Utilizando uma ED de Pilha (STACK) que armazena caracteres, 
faça um programa que lê uma string do teclado e, 
**utilizando a pilha**, mostre a string na ordem reversa. 
Entregar somente o código do programa principal. 
Não há necessidade de mostrar o código da pilha

Se a pessoa digitar abcd, o programa vai devolver: dcba 


*/

int main(){
    scanf("%d",&n);//nro de valores
    char vet[n];
    for(n)
    scanf("%c"vet[i]);//pega todos os valores na main()
    
    stack st = create_stack();
    for(i=0;i<n;i++){
      empilha(vet[i]);
    }
    while(stack_size()!=0)
    imprimeTop(st);
    desempilha();
    }
    // check:<<<erro: não está seguindo o que fizemos no curso mas vou considerar o raciocínio>>>>
