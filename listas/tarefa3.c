#include <stdio.h>
#include <stdlib.h>
#include "tarefa3.h"
#define M 100

struct list{
	desc D;
	int num[M];
};

List* create(int size_ls, int* ls, int pos_st){
	List* L;
	L = (List*)malloc(sizeof(struct list));
	L->D.pos_start = pos_st;
	for(int i = 0; i < size_ls; i++){
		L->num[i+pos_st] = ls[i];
		L->D.size++;
	}
	L->D.pos_end = pos_st + size_ls - 1;
	return L;
}

void view(List* L){
	int szl = L->D.size + L->D.pos_start;
	for(int i = L->D.pos_start; i < szl; i++){
		printf("[%d]:%d",i,L->num[i]);
		printf("\n");
	}
}

List* add(List* L, int n, int pos){
	int end = L->D.pos_end;
	int start = L->D.pos_start;
	if ((pos>end+1)||(pos<start-1)){
		printf("Posicao ainda nao difinida\n\n");		
		return L;
	}	
	else if(pos == end + 1)
		L->num[pos] = n;
	else if(pos == start-1){
		L->num[pos] = n;
		L->D.pos_start--;
		L->D.size++;
		return L;
	}
	else{
		for(int i = end+1; i > pos; i--){
			L->num[i] = L->num[i-1];		
		}
		L->num[pos] = n;
	}
	L->D.size++;
	L->D.pos_end++;
	return L;
}

int search(int n, List* L){
	int start = L->D.pos_start;
	int siz = L->D.size;	
	for(int i = start; i < siz + start; i++){
		if(n == L->num[i]){
			return i;
		}
	}
	printf("Valor nao encontrado na lista");
	return -1;
}

int del(int pos, List* l){
	int end = l->D.pos_end;
	int start = l->D.pos_start;	
	if (pos == start){
		printf("\nContidas em %d: %d\n",pos,l->num[pos]);
		l->D.size--;
		l->D.pos_start++;
		return 1;
	}
	else if (pos == end){
		printf("Contidas em %d: %d\n",pos,l->num[pos]);
		l->D.size--;
		l->D.pos_end--;
		return 1;
	}
	else if ((pos>end+1)||(pos<start-1)){
		printf("\nPosicao ainda nao difinida\n\n");		
	}
	else{
		printf("\nContidas em %d: %d\n",pos,l->num[pos]);
		for(int i = pos; i < end; i++){
			l->num[i] = l->num[i+1];		
		}
		l->D.size--;
		return 1;
	}
	return -1;
}
