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
    

