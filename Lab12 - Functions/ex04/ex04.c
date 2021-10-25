4)

#include<stdio.h>


int main()
{

float x = 0.0;
int n = 0;

void CalculaX(float x, int n){
    int i=0;
     float guardax = 0.0;
     float guardafrac = 0;

     printf("Digite valor de x");
     fflush(stdin);
     scanf("%f",&x);

     printf("Digite o valor de n");
     fflush(stdin);
     scanf("%d",&n);


     if(n>0){

        guardax = x;

        for(i=1;i<n;i++){

            x = x * guardax;
            printf("%f",guardax);
        }

        printf("%f", x);

        }else if (n==0){

             x = 1;

             printf("%f",x);



        } else {

            n = abs(n);
            guardafrac = 1/x;
            float z=0.0;
            

            z=1/x;

            for(i=2;i<=n;i++){

            x = z * guardafrac;
            z=x;

            }

            printf("x: %f", x);
        }

     }

    CalculaX(x,n);

  return 0;

}
