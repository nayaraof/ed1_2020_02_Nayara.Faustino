#include <stdio.h>
#include <stdlib.h>
#include "TLista2.h"

int main()
{
   struct aluno a[5] = {{1,"Andre",9.5,7.8,8.5},
                        {2,"Ricardo",7.5,8.7,6.8},
                        {3,"Bianca",9.7,6.7,8.4},
                        {4,"Bianca",9.7,6.7,8.4},
                        {5,"Bianca",9.7,6.7,8.4}};

    struct aluno b[1] = {{1,"Andre",9.5,7.8,8.5}};
    
    struct aluno c;
    struct aluno d;
    
    Lista *l1;
    l1 = cria_lista();
    
    int i;
        for(i=0;i< 5 ; i++ ){
            insere_lista_inicio(l1,a[i]);
        };
        
        for(i=0;i< 1; i++){
            insere_lista_final (l1,b[i]);
        };
        
        imprime_lista(l1);

        consulta_lista_pos(l1,1,&c);
        printf("\nConsulta pela posicao 1 - Matricula da Consulta : %d\n",c.matricula);
        
        consulta_lista_mat(l1,1,&d);
        printf("\nNome da Consulta: %s\n", d.nome);
        
        remove_lista(l1,1);
        
        remove_lista_final(l1);
        imprime_lista(l1);
        
        tamanho_lista(l1)
