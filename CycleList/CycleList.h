#ifndef CYCLELIST_H
#define CYCLELIST_H

typedef struct _NODE_DATA
{
	int data;
	struct _NODE_DATA *next;
} NODE_DATA;

typedef struct _CLINK
{
	int max_size;
	int size;
	NODE_DATA *head;
}CLINK;

void init(CLINK *p_clink,int max_size);
bool insert(CLINK *p_clink,NODE_DATA *p_data);
bool print(CLINK *p_clink);

#endif
