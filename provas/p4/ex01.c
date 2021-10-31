/* ex03
Crie uma função que faz a junção de dois vetores inteiros. 
A função deve ter como entrada os dois vetores e seus
respectivos tamanhos. A alocação de espaço necessário para
o vetor concatenado deve ser feita dentro da função 
(a função então deve devolver para o programa principal 
o vetor alocado e também o tamanho desse novo vetor). 
A função deve retornar um valor inteiro: (0 - zero)
se a junção ocorreu de forma correta; (-1) em caso de erro.
Mostre o uso da função no programa principal. Não é
permitido criar novos tipos de dados para a solução
do exercício (ou seja, sem uso de structs).


Vetor 1: [1, 5, 2]
Vetor 2: [10, 30] 
Concatenção Vetor 1, Vetor 2

Vetor Concatenado = [ 1, 5, 2, 10, 30]

*/

int concat_string(int *vet1, int *vet2)
{
    int *aux;
    aux = malloc(1*sizeof(int)*(sizeof(vet1) + sizeof(vet2)));// check:<<<erro: errado, retorna o tamanho do ponteiro>>>>
    if (aux == NULL)
        return -1;
        size_t n = sizeof(aux);//tamanho de aux
        int j=0;//contador para string2
        for(int i=0;i<(int)n;i++)
        {
            aux[i]=vet1[i];
            if(vet1[i+1]==(int)sizeof(vet1))
            {
              aux[i]=vet2[j];
              j++;
            }
        }
    return 0;
}

//main.c
int main()
{
    int vet1[3]={1,5,2}, vet2[2]={10,30};
    int *vet3=concat_string(vet1,vet2);// check:<<<erro: funcao retorna inteiro>>>>

    size_t size = sizeof(vet3);

    printf("Vetor Concatenado = ");
    for(int i =0;i<(int)size;i++)
    {
        printf("%d ", vet3[i]);
    }
}
