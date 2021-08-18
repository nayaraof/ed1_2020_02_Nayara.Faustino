

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    int i = 0;
    int x=0;

    int a=0;
    int b=0;
    int c=0;

    struct endereco{

    char rua[30];
    int numero;
    char complemento[20];
    char cidade[20];
    char estado[2];
    int cep;
    };

    struct s_telefone{

    int ddd;
    int telefone;
    };

    struct data{

    int dia;
    int mes;
    int ano;

    };

    struct cadastro{

    char nome[30];
    char cpf[15];
    char sexo[10];
    struct endereco endresid;
    struct endereco endcom;
    char estadocivil[10];
    float salario;
    struct s_telefone tel;
    struct s_telefone telresid;
    char identidade[10];
    struct data datanasc;
    struct data dataing;
    };

    struct cadastro pessoa[5];

    /* Pessoa 1 */
    strcpy(pessoa[0].nome,"Bruno");
    strcpy(pessoa[0].cpf,"10823569823");
    strcpy(pessoa[0].sexo,"masc");

    strcpy(pessoa[0].endresid.rua,"Elpidio");
    pessoa[0].endresid.numero = 20;
    strcpy(pessoa[0].endresid.complemento,"casa");
    strcpy(pessoa[0].endresid.cidade,"udi");
    strcpy(pessoa[0].endresid.estado,"mg");
    pessoa[0].endresid.cep = 38400365;

    strcpy(pessoa[0].endcom.rua,"Elpidio");
    pessoa[0].endcom.numero = 20;
    strcpy(pessoa[0].endcom.complemento,"casa");
    strcpy(pessoa[0].endcom.cidade,"udi");
    strcpy(pessoa[0].endcom.estado,"mg");
    pessoa[0].endcom.cep = 38400365;

    pessoa[0].tel.ddd = 34;
    pessoa[0].tel.telefone = 9188;

    pessoa[0].telresid.ddd = 34;
    pessoa[0].telresid.telefone = 3210;

    strcpy(pessoa[0].estadocivil,"solteiro");
    pessoa[0].salario = 1000;
    strcpy(pessoa[0].identidade,"MG1020");

    pessoa[0].datanasc.dia = 10;
    pessoa[0].datanasc.mes = 10;
    pessoa[0].datanasc.ano = 1990;

    pessoa[0].dataing.dia = 20;
    pessoa[0].dataing.mes = 4;
    pessoa[0].dataing.ano = 2005;


    /* Pessoa 2 */
    strcpy(pessoa[1].nome,"Vitoria");
    strcpy(pessoa[1].cpf,"10823569823");
    strcpy(pessoa[1].sexo,"masc");

    strcpy(pessoa[1].endresid.rua,"Elpidio");
    pessoa[1].endresid.numero = 20;
    strcpy(pessoa[1].endresid.complemento,"casa");
    strcpy(pessoa[1].endresid.cidade,"udi");
    strcpy(pessoa[1].endresid.estado,"mg");
    pessoa[1].endresid.cep = 38400365;

    strcpy(pessoa[1].endcom.rua,"Elpidio");
    pessoa[1].endcom.numero = 20;
    strcpy(pessoa[1].endcom.complemento,"casa");
    strcpy(pessoa[1].endcom.cidade,"udi");
    strcpy(pessoa[1].endcom.estado,"mg");
    pessoa[1].endcom.cep = 38400365;

    pessoa[1].tel.ddd = 34;
    pessoa[1].tel.telefone = 9188;

    pessoa[1].telresid.ddd = 34;
    pessoa[1].telresid.telefone = 3210;

    strcpy(pessoa[1].estadocivil,"solteiro");
    pessoa[1].salario = 1000;
    strcpy(pessoa[1].identidade,"MG1020");

    pessoa[1].datanasc.dia = 10;
    pessoa[1].datanasc.mes = 10;
    pessoa[1].datanasc.ano = 1980;

    pessoa[1].dataing.dia = 20;
    pessoa[1].dataing.mes = 4;
    pessoa[1].dataing.ano = 2005;

    /* Pessoa 3 */
    strcpy(pessoa[2].nome,"Felipe");
    strcpy(pessoa[2].cpf,"10822569822");
    strcpy(pessoa[2].sexo,"masc");

    strcpy(pessoa[2].endresid.rua,"Elpidio");
    pessoa[2].endresid.numero = 20;
    strcpy(pessoa[2].endresid.complemento,"casa");
    strcpy(pessoa[2].endresid.cidade,"udi");
    strcpy(pessoa[2].endresid.estado,"mg");
    pessoa[2].endresid.cep = 28400265;

    strcpy(pessoa[2].endcom.rua,"Elpidio");
    pessoa[2].endcom.numero = 20;
    strcpy(pessoa[2].endcom.complemento,"casa");
    strcpy(pessoa[2].endcom.cidade,"udi");
    strcpy(pessoa[2].endcom.estado,"mg");
    pessoa[2].endcom.cep = 28400265;

    pessoa[2].tel.ddd = 24;
    pessoa[2].tel.telefone = 9188;

    pessoa[2].telresid.ddd = 24;
    pessoa[2].telresid.telefone = 2210;

    strcpy(pessoa[2].estadocivil,"solteiro");
    pessoa[2].salario = 1000;
    strcpy(pessoa[2].identidade,"MG1020");

    pessoa[2].datanasc.dia = 10;
    pessoa[2].datanasc.mes = 10;
    pessoa[2].datanasc.ano = 1980;

    pessoa[2].dataing.dia = 20;
    pessoa[2].dataing.mes = 4;
    pessoa[2].dataing.ano = 2005;

    /* Pessoa 4 */
    strcpy(pessoa[3].nome,"Ana");
    strcpy(pessoa[3].cpf,"30823569823");
    strcpy(pessoa[3].sexo,"masc");

    strcpy(pessoa[3].endresid.rua,"Elpidio");
    pessoa[3].endresid.numero = 20;
    strcpy(pessoa[3].endresid.complemento,"casa");
    strcpy(pessoa[3].endresid.cidade,"udi");
    strcpy(pessoa[3].endresid.estado,"mg");
    pessoa[3].endresid.cep = 38300365;

    strcpy(pessoa[3].endcom.rua,"Elpidio");
    pessoa[3].endcom.numero = 20;
    strcpy(pessoa[3].endcom.complemento,"casa");
    strcpy(pessoa[3].endcom.cidade,"udi");
    strcpy(pessoa[3].endcom.estado,"mg");
    pessoa[3].endcom.cep = 38300365;

    pessoa[3].tel.ddd = 33;
    pessoa[3].tel.telefone = 9388;

    pessoa[3].telresid.ddd = 33;
    pessoa[3].telresid.telefone = 3230;

    strcpy(pessoa[3].estadocivil,"solteiro");
    pessoa[3].salario = 3000;
    strcpy(pessoa[3].identidade,"MG3020");

    pessoa[3].datanasc.dia = 30;
    pessoa[3].datanasc.mes = 30;
    pessoa[3].datanasc.ano = 1982;

    pessoa[3].dataing.dia = 20;
    pessoa[3].dataing.mes = 3;
    pessoa[3].dataing.ano = 2005;

    /* Pessoa 5 */
    strcpy(pessoa[4].nome,"Mariana");
    strcpy(pessoa[4].cpf,"40823569823");
    strcpy(pessoa[4].sexo,"masc");

    strcpy(pessoa[4].endresid.rua,"Elpidio");
    pessoa[4].endresid.numero = 20;
    strcpy(pessoa[4].endresid.complemento,"casa");
    strcpy(pessoa[4].endresid.cidade,"udi");
    strcpy(pessoa[4].endresid.estado,"mg");
    pessoa[4].endresid.cep = 38400365;

    strcpy(pessoa[4].endcom.rua,"Elpidio");
    pessoa[4].endcom.numero = 20;
    strcpy(pessoa[4].endcom.complemento,"casa");
    strcpy(pessoa[4].endcom.cidade,"udi");
    strcpy(pessoa[4].endcom.estado,"mg");
    pessoa[4].endcom.cep = 38400365;

    pessoa[4].tel.ddd = 34;
    pessoa[4].tel.telefone = 9488;

    pessoa[4].telresid.ddd = 34;
    pessoa[4].telresid.telefone = 3240;

    strcpy(pessoa[4].estadocivil,"solteiro");
    pessoa[4].salario = 4000;
    strcpy(pessoa[4].identidade,"MG4020");

    pessoa[4].datanasc.dia = 40;
    pessoa[4].datanasc.mes = 40;
    pessoa[4].datanasc.ano = 1995;

    pessoa[4].dataing.dia = 20;
    pessoa[4].dataing.mes = 4;
    pessoa[4].dataing.ano = 2005;

    while(x != 5){

        printf("\n\nMenu de Opcoes\n\n");
        printf("1. Listar todos os cadastros\n");
        printf("2. Cadastrar/Sobrescrever nova pessoa\n");
        printf("3. Listar as pessoas que nasceram depois de 1990\n");
        printf("4. Copiar dados de um cadastro para outro\n");
        printf("5. Sair\n");

        scanf("%d", &x);
        system("cls || clear");

        switch(x)
        {
            case 1:

                printf("Pessoas Cadastradas\n\n");

                for(i=0;i<5;i++){

                    printf("Nome: %s\n CPF:%s Sexo:%s\nEnd Residencial:%s,%d - %s - %s -%s, CEP: %d\nEnd Comercial:%s,%d - %s - %s -%s, CEP: %d\nTelefone: %d %d \nTelefone Residencial: %d %d \nEstado civil: %s \n" \
                           "Salario: %.2f\nID: %s\nData de Nascimento %d/%d/%d \nData do Ingresso %d/%d/%d \n\n ", pessoa[i].nome ,pessoa[i].cpf, pessoa[i].sexo,pessoa[i].endresid.rua, pessoa[i].endresid.numero, \
                           pessoa[i].endresid.complemento, pessoa[i].endresid.cidade, pessoa[i].endresid.estado, pessoa[i].endresid.cep, pessoa[i].endcom.rua, pessoa[i].endcom.numero, pessoa[i].endcom.complemento, \
                            pessoa[i].endcom.cidade, pessoa[i].endcom.estado, pessoa[i].endcom.cep, pessoa[i].tel.ddd, pessoa[i].tel.telefone, pessoa[i].telresid.ddd, pessoa[i].telresid.telefone, \
                            pessoa[i].estadocivil, pessoa[i].salario, pessoa[i].identidade, pessoa[i].datanasc.dia, pessoa[i].datanasc.mes, pessoa[i].datanasc.ano, \
                            pessoa[i].dataing.dia, pessoa[i].dataing.mes, pessoa[i].dataing.ano);

                        }

                break;

            case 2:

                printf("Cadastrar/Sobrescrever nova pessoa");

                printf("\n\nDigite a posicao os novos dados serao cadastrados:(0,1,2,3 ou 4)\n");

                fflush(stdin);
                scanf("%d",&c);

                printf("\nDigite o nome:");
                fflush(stdin);
                gets(pessoa[c].nome);

                printf("\nDigite o CPF:");
                fflush(stdin);
                gets(pessoa[c].cpf);

                printf("\nDigite o Sexo:");
                fflush(stdin);
                gets(pessoa[c].sexo);

                printf("\nDigite o End Residencial:");
                fflush(stdin);
                gets(pessoa[c].endresid.rua);

                printf("\nDigite o numero:");
                fflush(stdin);
                scanf("%d", &pessoa[c].endresid.numero);

                printf("\nDigite o complemento:");
                fflush(stdin);
                gets(pessoa[c].endresid.complemento);

                printf("\nDigite a cidade:");
                fflush(stdin);
                gets(pessoa[c].endresid.cidade);

                printf("\nDigite o estado:");
                fflush(stdin);
                gets(pessoa[c].endresid.estado);

                printf("\nDigite o cep:");
                fflush(stdin);
                scanf("%d",pessoa[c].endresid.cep);

                printf("\nDigite o Rua do End Comercial:");
                fflush(stdin);
                gets(pessoa[c].endcom.rua);

                printf("\nDigite o numero:");
                fflush(stdin);
                scanf("%d", &pessoa[c].endcom.numero);

                printf("\nDigite o complemento:");
                fflush(stdin);
                gets(pessoa[c].endcom.complemento);

                printf("\nDigite a cidade:");
                fflush(stdin);
                gets(pessoa[c].endcom.cidade);

                printf("\nDigite o estado:");
                fflush(stdin);
                gets(pessoa[c].endcom.estado);

                printf("\nDigite o cep:");
                fflush(stdin);
                scanf("%d",pessoa[c].endcom.cep);

                printf("\nDigite o ddd:");
                fflush(stdin);
                scanf("%d",pessoa[c].tel.ddd);

                printf("\nDigite o telefone:");
                fflush(stdin);
                scanf("%d",pessoa[c].tel.telefone);

                printf("\nDigite o ddd Residencial:");
                fflush(stdin);
                scanf("%d",pessoa[c].telresid.ddd);

                printf("\nDigite o telefone Residencial:");
                fflush(stdin);
                scanf("%d",pessoa[c].telresid.telefone);

                printf("\nDigite o estadocivil:");
                fflush(stdin);
                gets(pessoa[c].estadocivil);

                printf("\nDigite o salario:");
                fflush(stdin);
                scanf("%f",&pessoa[c].salario);

                printf("\nDigite a identidade:");
                fflush(stdin);
                gets(pessoa[c].identidade);

                printf("\nDigite o dia de nascimento:");
                fflush(stdin);
                scanf("%d",&pessoa[c].datanasc.dia);

                printf("\nDigite o mes de nascimento:");
                fflush(stdin);
                scanf("%d",&pessoa[c].datanasc.mes);

                printf("\nDigite o ano de nascimento:");
                fflush(stdin);
                scanf("%d",&pessoa[c].datanasc.ano);

                printf("\nDigite o dia do ingresso:");
                fflush(stdin);
                scanf("%d",&pessoa[c].dataing.dia);

                printf("\nDigite o mes do ingresso:");
                fflush(stdin);
                scanf("%d",&pessoa[c].dataing.mes);

                printf("\nDigite o ano do ingresso:");
                fflush(stdin);
                scanf("%d",&pessoa[c].dataing.ano);

                fflush(stdin);


                break;

            case 3:
                printf("Pessoas que nasceram depois de 1990:\n");

                    for(i=0;i<5;i++){
                        if (pessoa[i].datanasc.ano >= 1990){
                        printf("%s\n", pessoa[i].nome);

                    }

                    else printf("nao existem pessoas nascidas depois de 1990");

                    }

                break;

            case 4:

                printf("Digite a posicao dos dados da pessoa:\n");

                fflush(stdin);
                scanf("%d",&a);

                printf("Digite a posicao que eh para os dados serem copiados:\n");

                fflush(stdin);
                scanf("%d",&b);

                pessoa[a] = pessoa[b];

                break;

            case 0:

                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    }



   return 0;
}
