{
    int vet[5], i, maior, menor;
    float media, soma;

    printf ("<< 5 valores >> \n");

    for (i=0; i<5; i++){

        printf ("Entre com o numero %d: ", i+1);
        scanf ("%d",&vet[i]);
        maior = vet[0];
        menor = vet[0];

    }
    printf ("\n");
    printf ("Os numeros digitados sao: ");

     for(i=0; i<5; i++){

        printf("%d ",vet[i]);

        if(maior < vet[i])
            maior = vet[i];
        if(menor > vet[i])
            menor = vet[i];

        soma = soma + vet[i];
        media = soma / 5;
    }
    printf("\n");
    printf("O maior valor e: %d \n", maior);
    printf("O menor valor e: %d \n", menor);
    printf("A media eh: %.1f", media);

    return 0;
}
