#include <stdio.h>
#include <stdlib.h>
#include "imp.h"
#define M 100

struct list{
	int size;
	int num[M];
};

List* create(int size_ls,int* ls){
	int sz;	
	List *l;
	l = (List*)malloc(sizeof(struct list));
	if(l != NULL){
		l->size = 0;
	}
	sz = l->size;
	for(int i = 0; i<size_ls; i++){
		l->num[sz] = ls[i];
		sz++;
		l->size++;
	}
	return l;
}

int insert(List* l, int n1, int n2){
	int sz = l->size;	
	if(sz == M){
		printf("Nao e possivel inserir mais elementos\n");
		return 0;
	}
	l->num[sz] = n1;
	sz++;
	l->size++;
	l->num[sz] = n2;
	l->size++;
	return 1;
}

void view(List* l){
	for(int i = 0; i < l->size; i++){
		printf("%d ",l->num[i]);
	}
	printf("\n");
}

int search(int n, List* l){
	int sz = l->size;
	int position = 0;	
	for(int i = 0; i < sz; i++){
		if(n == l->num[i])
			return position;
		position++;
	}	
	printf("Nao encontrado");
	return -1;
}

int del(int p, List* l){
	int sz = l->size;
	if (sz == 0){
		printf("Lista vazia");
		return 0;	
	}	
	if (p == sz-1){
		printf("%d\n",l->num[p]);		
		l->size--;
		return 1;
	}
	else if (p>sz-1){
		printf("Sem elemento na posicao %d \n",p);
		return 0;
	}
	else if(p<sz){
		printf("%d\n",l->num[p]);
		for(int i = p; i < sz-1; i++)
			l->num[i] = l->num[i+1];
		l->size--;
		return 1;						
	}
}
