#include "Stack.h"
#include <memory.h>
#include <stdio.h>


void init(STACK *p_stack,int max_size)
{
	memset(p_stack,0,sizeof(STACK));
	p_stack->MAX_SIZE=max_size;
}
bool push(STACK *p_stack,NODE_DATA *p_data)
{
	
	//ÅÐ¶ÏÕ»ÊÇ·ñÂúÁË 
	if(p_stack->MAX_SIZE==p_stack->SIZE)
	{
	
		return false;
	}
	//ÅÐ¶ÏÊÇ·ñÊÇ¿ÕÕ»
	if(p_stack->SIZE==0)
	{
		p_stack->top=p_data;
		p_stack->base=p_data;
		p_data->next=0;	
		p_stack->SIZE++;
		return true;
	} 
	//Õý³£
	p_data->next=p_stack->top;
	p_stack->top=p_data; 
	p_stack->SIZE++;
	return true;
}

bool pop(STACK *p_stack)
{
	if(p_stack->SIZE==0)
	{
		return false;	
	}
	
	printf("%d",p_stack->top->data);
	p_stack->top=p_stack->top->next;
	p_stack->SIZE--;
	return true;
}
bool print(STACK *p_stack)
{
	if(p_stack->SIZE==0)
	{
		return false;	
	}
	NODE_DATA *p_index=p_stack->top;
	while(p_index!=p_stack->base)
	{
		printf("%d\n",p_index->data);
		p_index=p_index->next;	
	}	
	printf("%d\n",p_stack->base->data);
	
}
