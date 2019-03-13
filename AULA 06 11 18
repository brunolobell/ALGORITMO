#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * criar(int x){
	int *V;
	V = (int *)realloc(V,x*sizeof(int));
	srand(time(NULL));
	V[x-1] = rand()%100;
	return V;		
}

void 

void mostrar(int v[], int n){
	for (int i = 0; i<n-1; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main(){
	int *vet1;
	int *vet2;
	vet1 = NULL;
	vet2 = NULL;
	int x;
	int tam = 1;
	int wl = 1;
	while(wl){
		scanf("%d",&x);
		switch(x){
			case 1:
				vet1 = criar(tam);
				tam++;
				break;
			case 3:
				mostrar(vet1,tam);
				break;
			case 0:
				wl = 0;
				break;
		}
	}
	return 0;
}
