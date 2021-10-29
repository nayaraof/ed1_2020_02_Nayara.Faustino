#define SUCCESS 0
#define OUT_OF_MEMORY -1
#define ELEM_NOT_FOUND -2
#define INVALID_NULL_POINTER -3
#define INVALID_RANGE -4

struct aluno{
 int matricula;
 char nome[30];
 float n1,n2,n3;
};

typedef struct circlist List;
typedef struct aluno aluno;

List* list_create();
int list_free(List *li);
int list_size(List *li);
int list_push_front(List *li, struct aluno al);
int list_front(List *li, struct aluno *al);
int list_push_back(List *li, struct aluno al);
int list_pop_front(List *li);
int list_back(List *li, struct aluno *al);
int list_pop_back(List *li);
int list_print_forward(List *li);
int list_erase(List *li, int pos);
int list_find_pos(List *li, int pos, struct aluno *al);
