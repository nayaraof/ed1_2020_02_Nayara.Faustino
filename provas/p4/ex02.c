/* ex02
Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer
todos os elementos por diversas vezes em um loop. Modifique o TAD para incluir uma
função que retornará sempre o próximo elemento. Por exemplo, se a lista não foi
percorrida ainda, o próximo elemento é a cabeça. Depois, ao chamar a função
novamente, será devolvido o segundo elemento, e assim sucessivamente.

(a) mostrar como fica a estrutura do TAD


 struct circlist{
	
    CList_node *end;
    CList_node *next;
};

struct clistnode{
    Student data;
    CList_node *prox;

(b) mostrar a função que retorna o próximo elemento
*Não é necessário mostrar as outras funções afetadas pela modificação proposta

int list_next(TClList *list, struct estudante *next_elem)

{
    if(list == null)
       return null_pointer;
    if(list->end == null)
       return null_pointer;
    if(list->next == null)
        list->next = list->end->next;
    list_node *aux;
        aux = list->next;
    list->next = aux->next;
        *next_elem = aux->data;
         return SUCCES;
};

(c) Qual a diferença entre o vetor de acesso circular usado na 
implementação de uma fila estática de uma lista circular?
// responder aqui:
A fila e tipo FIFO onde o primeiro elemento a entrar , vai ser o primeiro a sair /retirar-se da fila, ou seja entra na fila um item no fim da fila e consequentimente sai/remove um do inicio
a fila estática tenta realizar sempre (entra um -> anda para a proxima posição) 
já a circular funciona de forma que o proximo a entrar possa escolher a sua posição  e ela nunca vai ser nula,pq ele aponta pra alguém que já está na fila, e por isso o termo circular, (elem entra os demais se movimentam para que ele assuma asua posição que não precisa ser sempre a cabeça)

** e o tempo computacional que essa abordagem proporcional é melhor!

*/
