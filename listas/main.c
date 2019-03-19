#include <stdio.h>
#include "tarefa3.h"

int main(){
	int list_st[10] = {5,2,3,6,9,8,7,4,0,1};
	int op1,op2;	
	List* l;
	printf("Posicao para inicar a lista: ");
	scanf("%d",&op1);
	l = create(10, list_st,op1);
	view(l);
	printf("\nInserir numero: ");
	scanf("%d",&op1);
	printf("Posicao: ");
	scanf("%d",&op2);
	l = add(l,op1,op2);
	view(l);
	printf("\nProcurar valor: ");
	scanf("%d",&op1);	
	printf("%dº posicao\n",search(op1,l));
	printf("\nPosicao a ser apagada: ");
	scanf("%d",&op1);
	del(op1,l);
	view(l);
	return 0;
}
