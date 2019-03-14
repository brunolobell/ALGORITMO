#include <stdio.h>
#include "imp.h"

int main(){
	int start_list[10] = {15,1,1545,234,52,10,121,13,5,98}; 
	List* ls;
	ls = create(10,start_list);
	view(ls);
	insert(ls,5,4);
	view(ls);
	insert(ls,15616,4515);
	view(ls);
	int pos = search(234,ls);
	printf("%d\n",pos);
	int posi = search(151531,ls);
	printf("%d\n",posi);
	del(5,ls);
	view(ls);
	return 0;
}
