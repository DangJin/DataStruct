#ifndef LINKLIST_H
#define LINKLIST_H
#include<stdbool.h>
typedef int Datatype;
typedef struct _NODE_DATA
{
	Datatype data;
	struct _NODE_DATA *next;
} NODE_DATA;

typedef struct _LINK
{
	int size;
	int max_size;
	NODE_DATA *p_head;
	NODE_DATA *p_last;
} LINK;

void init_link(LINK *p,int max_size);
bool insert_link(LINK *p,NODE_DATA *p_data);
bool delete_link(LINK *p,int p_data);
bool get_link(LINK *p,NODE_DATA *p_data);
void print_link(LINK *p);


#endif
