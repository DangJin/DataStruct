#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
typedef struct _NODE_DATA
{
	int data;
	struct _NODE_DATA *next;
}NODE_DATA;

typedef struct _STACK
{
	int MAX_SIZE;
	int SIZE;
	NODE_DATA *top;
	NODE_DATA *base; 
}STACK;

void init(STACK *p_stack,int max_size);
bool push(STACK *p_stack,NODE_DATA *p_data);
bool pop(STACK *p_stack); 
bool print(STACK *p_stack); 
#endif
