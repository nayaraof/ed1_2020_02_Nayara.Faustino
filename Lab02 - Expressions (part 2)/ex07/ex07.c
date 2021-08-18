 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
printf("<<Operadores Booleanos>>");
printf("\n");

int  num1,num2;
printf("Entre com o primeiro valor :  ");
scanf("%d",&num1);
printf("\n");
printf("Entre com o primeiro valor :  ");
scanf("%d",&num2);
printf("\n");

    if ((num1 %2 == 0) && (num2  %2 == 0)  ){

    printf(" 0 ");
     }
     else{
    printf(" 1");
     }
   if ((num1 %2 == 0) || (num2  %2 == 0)  ){

    printf(" 0 ");
     }
     else{
    printf(" 1");
     }
     return 0 ;

}
