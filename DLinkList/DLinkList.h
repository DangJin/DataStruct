#ifndef DLINKLIST_H
#define DLINKLIST_H
#include <stdbool.h>
#include <stdio.h>
typedef int Datatype;
typedef struct _NODE_DATA
{
	Datatype data;
	struct _NODE_DATA *pre;
	struct _NODE_DATA *next;
} NODE_DATA;

typedef struct _DLINK
{
	int size;
	int max_size;
	NODE_DATA *p_head;
	NODE_DATA *p_last;
} DLINK;

void init_DLinkList(DLINK *d_link,int max_size);
bool insert_DLinkList(DLINK *d_link,NODE_DATA *p_data);
bool print_DLinkList(DLINK *d_link);


#endif
