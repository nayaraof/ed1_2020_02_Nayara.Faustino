int main () {
int a,b,x;

    printf("<<Troca do conteudo de variaveis>>");
    printf("\n");

    printf("Entre com o valor de A:  ");
    scanf("%d",&a);

    printf("Entre com o valor de B:  ");
    scanf("%d",&b);

    x= a;
    a=b;
    b=x;

    printf("Apos a troca, o valor de A eh %d   o valor de B eh  %d", a,b);

    return 0;
    }
