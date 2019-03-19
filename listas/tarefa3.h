//Define a estrutura para a lista
typedef struct list List;
//Define descritor
typedef struct descritor{
	int size;
	int pos_start;
	int pos_end;
}desc;
//Aloca lista
List* create(int size_ls, int* ls, int pos_st);
//Vizualiza lista
void view(List* L);
//Adiciona elemento a lista
List* add(List* L, int n, int pos);
//Busca por valor na lista
int search(int n, List* L);
//Apagar elemento da lista
int del(int pos, List* l);
