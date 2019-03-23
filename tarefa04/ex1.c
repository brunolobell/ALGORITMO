#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

typedef struct element{
	int data;
	struct element* next;
	struct element* prev; 
}el;

List* create(){
	List* li = (List*)malloc(sizeof(List));
	return li;
}

int size(List* l){
	el* no;
	no = *l;
	int i = 0;
	for(i = 0; no != NULL; i++){
		no = no->next;
	}
	return i;
}

void add(List* l, int n){
	el* no;
	no = (el*)malloc(sizeof(el));
	no->data = n;
	no->next = (*l);
	no->prev = NULL;
	if (*l != NULL)
		(*l)->prev = no;
	*l = no;
}

void view(List* l){
	el* no;
	no = *l;
	for(int i = 0; no != NULL; i++){
		printf("%d ",no->data);
		no = no->next;
	}
	printf("\n");
}

void view_reverse(List* l){
	el* no;
	no = *l;
	while (no->next != NULL)
		no = no->next;
	while (no != NULL){
		printf("%d ",no->data);
		no = no->prev;
	}
	printf("\n");		
}
