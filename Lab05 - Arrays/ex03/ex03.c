int main()
{
    int val[6];
    int i ;
    printf("<< Listando um vetor em ordem inversa >>");
    printf("\n");
        for(i=0;i<6;i++){
   printf("Entre com o numero %d :  ", i+1);
   scanf("%d", &val[i]);
                         }
    printf("\n");
    printf("A ordem inversa dos numeros eh: ");
        for(i=5;i>=0;i--){
    printf("%d", val[i]);
                           }

    return 0 ;
    }


