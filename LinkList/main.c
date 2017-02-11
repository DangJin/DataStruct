#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <stdbool.h>
#include "LinkList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i,size,del_num;
	LINK L;
	init_link(&L,256);
	
	printf("Please enter the length of the test data \n\r");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		NODE_DATA *data_;
		data_=(NODE_DATA *)malloc(sizeof(NODE_DATA));
		//memset(data_,0,sizof(NODE_DATA));
		scanf("%d",&(data_->data));
		insert_link(&L,data_);
	}
	printf("L:\n\r");
	print_link(&L);
	printf(" \nPlease enter you will delete num:");
	scanf("%d",&del_num);
	delete_link(&L,del_num);
	printf("L:\n\r");
	print_link(&L);
	printf(" \nPlease enter you will insert num:");
	NODE_DATA *data_;
	data_=(NODE_DATA *)malloc(sizeof(NODE_DATA));
	//memset(data_,0,sizof(NODE_DATA));
	scanf("%d",&(data_->data));
	insert_link(&L,data_);
	
	printf("L:\n\r");
	print_link(&L);
	return 0;
}
