#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "Stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n_size;
	STACK L;
	init(&L,256);
	printf("Please enter the DLinkList size: \n");
	scanf("%d",&n_size);
	for(i=0;i<n_size;++i)
	{
		NODE_DATA *data=(NODE_DATA *)malloc(sizeof(NODE_DATA));
		scanf("%d",&(data->data));
		push(&L,data);
	}
	printf("L: \n");
	print(&L);
	
	printf("pop: \n");
	pop(&L);
	pop(&L);
	pop(&L);
	
	
	return 0;
}
