//Elemento que recebe o dado do tipo inteiro e adiciona na lista
typedef struct element* List; 
//Função para criar a lista
List* create();
//Retornar tamanho lista
int size(List* l);
//Adiciona elemento a lista
void add(List* l, int n);
//Mostra a lista encadeada
void view(List* l);
//Mostra a lista de tras para frente
void view_reverse(List* l);
