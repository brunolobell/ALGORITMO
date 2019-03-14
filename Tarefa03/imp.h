// Estrutura da lista
typedef struct list List;
// Alocar lista
List* create(int size_ls,int* ls);
// Insere novo elemento na lista
int insert(List* l, int n1, int n2);
// Vizualizar lista
void view(List* l);
// Buscar numero na lista
int search(int n, List* l);
// Apagar elemento da lista
int del(int p, List* l);
