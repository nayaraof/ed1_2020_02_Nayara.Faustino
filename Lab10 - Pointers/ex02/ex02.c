#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 40;   // cria uma variável do tipo inteiro, chamada a, e inicializa
                // com valor 40
   int *p;     // cria uma variável do tipo ponteiro para inteiro, chamada p, e o
              //conteúdo inicial é lixo
   p = &a;   // faz p receber o endereço de a. Dizemos que p aponta para a
   //a)
   printf ("Endereco da variavel: %d", &a);
   printf ("\nEndereco da variavel: %d", p);

   printf ("\n");
   //b)
   printf ("\nAltere o valor da variavel p/ 20:");
   scanf ("%d", p);
   printf ("\n");
   //c)
   int val[0] = {10};
   int *v;
   v = &val;

   printf ("\nAltere o valor do vetor:");
   scanf ("%d", v);
   //d)
   printf ("\n<<Mapa de memoria>>");
   printf ("\nValor da variavel 'a' eh: %u", p);
   printf ("\nValor do vetor 'val' eh: %u", v);

}
