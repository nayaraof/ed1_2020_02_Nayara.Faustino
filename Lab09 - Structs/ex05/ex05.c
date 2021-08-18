5)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    int i = 0;
    int x=0;

    float maiornota=0.0;
    float maiormedia=0.0;
    float menormedia=100.0;


    struct aluno{

    char matricula[10];
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
    float media;
    int faltas;

    };

    struct aluno alunos[3];



    while(x != 6){

        printf("\n\nMenu de Opcoes\n\n");
        printf("1. Cadastre os 3 alunos\n");
        printf("2. Listar aluno com maior nota da primeira prova\n");
        printf("3. Listar aluno com a maior media geral\n");
        printf("4. Listar aluno com a menor media geral\n");
        printf("5. Mostrar situacao final dos alunos\n");
        printf("6. Sair\n");

        scanf("%d", &x);
        system("cls || clear");

        switch(x)
        {
            case 1:

                printf("Cadastre os 3 alunos");

                for(i=0;i<3;i++){

                    printf("\n\nDigite a Matricula:");
                    fflush(stdin);
                    gets(alunos[i].matricula);

                    printf("\nDigite o nome:");
                    fflush(stdin);
                    gets(alunos[i].nome);

                    printf("\nDigite a nota da prova 1:");
                    fflush(stdin);
                    scanf("%f", &alunos[i].nota1);

                    printf("\nDigite a nota da prova 2:");
                    fflush(stdin);
                    scanf("%f", &alunos[i].nota2);

                    printf("\nDigite a nota da prova 3:");
                    fflush(stdin);
                    scanf("%f", &alunos[i].nota3);

                    printf("\nDigite o numero de faltas:");
                    fflush(stdin);
                    scanf("%d", &alunos[i].faltas);

                    fflush(stdin);

                    alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
                }

                break;


            case 2:

                for(i=0;i<3;i++){
                    if(alunos[i].nota1 > maiornota){
                        maiornota = alunos[i].nota1;
                        }
                    }
                    for(i=0;i<3;i++){

                        if(maiornota == alunos[i].nota1){
                            printf("Aluno com a maior nota da primeira prova: %s",alunos[i].nome);
                        }
                    }


                break;

            case 3:

                for(i=0;i<3;i++){
                    if(alunos[i].media > maiormedia){
                        maiormedia = alunos[i].media;
                    }
                }

                for(i=0;i<3;i++){

                    if(maiormedia == alunos[i].media){
                        printf("Aluno com a maior media geral: %s",alunos[i].nome);
                    }
                }

                break;

            case 4:


            for(i=0;i<3;i++){
                    if(alunos[i].nota1 <= menormedia){
                        menormedia = alunos[i].nota1;
                        }
                    }
                    for(i=0;i<3;i++){
                    if(menormedia == alunos[i].media){
                        printf("Aluno com menor media geral: %s",alunos[i].nome);
                    }
                }

                break;

            case 5:

                printf("Situacao final dos alunos\n\n");

                for(i=0;i<3;i++){

                    printf("Aluno: %s",alunos[i].nome);

                    if(alunos[i].media >= 60 && alunos[i].faltas <= 72*25/100){

                        printf("\nAluno Aprovado\n");
                    }

                    else if (alunos[i].media < 60 && alunos[i].faltas <= 72*25/100)
                        printf("\nAluno Reprovado por Nota\n");

                    else printf("\nAluno Reprovado por Falta\n");

                }


                break;

            case 0:

                break;

            }
    }



   return 0;
}
