int main () {

float salario;

printf("Digite o valor do salario:");
scanf("%f", &salario);
    printf("Seu salario com um aumento de 25%% e igual a = %.2f", ((salario * 25)/100)+salario);
return 0;
}
