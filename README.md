# gsi006_labs_2020-02
ex_1

#include <stdio.h>
#include <stdlib.h>

 int main () {
 float num, quad;

 printf("digite um numero real:");
 scanf("%f",&num);
    quad =  num * num ;

    printf("O valor do numero ao quadrado e: %.2f", quad);

 return 0 ;
 }
-------------------------------------------------------
ex_2
  float c, f;


 printf("Converter Celsios em Fahrenheit");
 printf("Entre com temperatuda em C:> ");
 scanf ("%f", &c);

  f = (c * (9.0/5.0)) + 32.0;

  printf ("essa temperatura em celsius corresponde a seguinte temperatura em Em F:> %.2f\n", f);
  system ("pause");
  return 0;
}
---------------------------------------------------------------
ex_3
int main () {

int x = 0 ;

printf (" Digite um numero inteiro:");
    scanf("%d", &x);

printf(" O antecessor de %d = %d", x,(x-1));
printf(" O sucessor de %d = %d", x,(x+1));

    return 0 ;

}

*/
---------------------------------------------------------
ex_4
 /*
int main () {
    float n1,n2,n3,n4;
    float media =0;
    printf("Digite as notas do aluno:");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    media = ((n1+n2+n3+n4)/4 );

    printf(" a media eh %f ", media);

    return 0 ;

}
-------------------------------------------------
ex_5
int main () {

float salario;

printf("Digite o valor do salario:");
scanf("%f", &salario);
    printf("Seu salario com um aumento de 25%% e igual a = %.2f", ((salario * 25)/100)+salario);
return 0;
}

--------------------------------------------------
ex_6
int main () {

const int premio = 780000;
float ganhador1,ganhador2,ganhador3;
ganhador1 = (46*premio)/100;
ganhador2 = (32*premio)/100;
ganhador3 = (22*premio)/100;

printf("GANHADOR 1 = %.3f", ganhador1);
printf("GANHADOR 2 = %.3f", ganhador2);
printf("GANHADOR 3 = %.3f",ganhador3);
return 0;
}
---------------------------------------------------------
ex_7 

int main() {
  float valordia = 30;
  float taxair= 0.08;
  float taxainss= 0.04;
  float valorbruto ;
  int dias;


  printf(" Digite o numero de dias trab:");
    scanf("%d",&dias);
    valorbruto = (dias *valordia);


    printf("o salario bruto e  %.2f:", valorbruto);

    printf("O salario liquido e:  %.2f :",valorbruto - (valorbruto * taxair) -  (valorbruto * taxainss));
    printf("taxa ir e:  %.2f :",  valorbruto * taxair );
    printf("taxa inss e:  %.2f :", valorbruto * taxainss);

    return 0;

}

------------------------------------------------------------------------------------------------
ex_8
ex_7 

int main() {
  float valordia = 30;
  float taxair= 0.08;
  float taxainss= 0.04;
  float valorbruto ;
  int dias;


  printf(" Digite o numero de dias trab:");
    scanf("%d",&dias);
    valorbruto = (dias *valordia);


    printf("o salario bruto e  %.2f:", valorbruto);

    printf("O salario liquido e:  %.2f :",valorbruto - (valorbruto * taxair) -  (valorbruto * taxainss));
    printf("taxa ir e:  %.2f :",  valorbruto * taxair );
    printf("taxa inss e:  %.2f :", valorbruto * taxainss);

    return 0;

}


------------------------------------------------------------------------------------------------
ex_9

#include <stdio.h>
int main () {
   int x;
   int y;
   float distancia;
   printf(" digite a coordenada x:");
   scanf("%d", &x);
   printf("Digite a coordenada y:");
   scanf("%d",&y);
   printf("\n\nDistancia entre os pontos: %5.2f\n", distancia = sqrt(pow(x,2)+pow(y,2)));
  return 0 ;




---------------------------------------
ex_10
/*
int main () {

const int premio = 6000;
float jogador1,jogador2,jogador3;
int inv1,inv2,inv3;

printf("Digite o valor investido do jogador1:");
scanf ("%d", &inv1);
printf("Digite o valor investido do jogador2:");
scanf ("%d", &inv2);
printf("Digite o valor investido do jogador3:");
scanf ("%d", &inv3);

   jogador1 = (inv1*premio)/100;
   jogador2 = (inv2*premio)/100;
   jogador3 = (inv3*premio)/100;

printf("jogador 1  recebera = %f", jogador1);
printf("\n");
printf("jogador 2  recebera = %f", jogador2);
printf("\n");
printf("jogador 3  recebera = %f",jogador3);
return 0;
}


*/
--------------------------------------------------------------
ex_11
#include<stdio.h>
#include<stdlib.h>
#include<complex.h>

//Backes [C99] AULA 108 - O tipo complexo
//https://www.youtube.com/watch?v=_1s0mERKxwg
int main () {

 _Complex double z1 = 2.0 + 3.0*_Complex_I;
 _Complex double z2 = 5.0 + 2.0*_Complex_I;
 _Complex double z3 = z1 + z2;
 _Complex double z4 = z1 * z2;
 _Complex double z5 = conj (z3);

 printf("z3 = %f + i%f\n", creal (z3) , cimag(z3));
 printf("z4 = %f + i%f\n", creal (z4) , cimag(z4));
 printf("z5 = %f + i%f\n", creal (z5) , cimag(z5));


 return 0 ;

}

*/
