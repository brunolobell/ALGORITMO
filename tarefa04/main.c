#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

int main(){
	List* l;
	l = create(); //Cria a lista
	for(int i = 0; i<20; i++){
		add(l,rand()%100); //Adiciona um valor "aleatorio" 10x na lista
	}
	printf("Lista: ");
	view(l); //Mostra a lista
	printf("Numero de elementos: %d\n",size(l)); //Questao 1 - tamanho lista
	printf("Lista tras-frente: ");
	view_reverse(l); //Questao 3 - Mostra lista ao contrario
	return 0;
}
