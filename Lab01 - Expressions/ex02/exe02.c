#include <stdio.h>

int main() {
 float f,c;
 printf("<< Conversor Temperatura >>\n");
    
    printf("Digite a temperatura em celsius: ");
    scanf("%f",&c);
     f = (c * (9.0/5.0)) + 32.0;
    printf ("essa temperatura em celsius corresponde a seguinte temperatura em Em F:> %.2f\n", f);
    system ("pause");
    return 0;
}
    

/*
=> Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de 
conversão é : F = C ∗ (9.0/5.0)+ 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor Temperatura >>
Digite a temperatura (em Celsius): 2.5O 
30 graus Celsius correspondem a 86 Fahrenheit
-------------------------------------------------------------------------------
*/
