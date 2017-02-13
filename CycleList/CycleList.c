#include "CycleList.h"
#include <stdio.h>
#include <memory.h>

void init(CLINK *p_clink,int max_size)
{
	memset(p_clink,0,sizeof(CLINK));
	p_clink->max_size=max_size;
}
bool insert(CLINK *p_clink,NODE_DATA *p_data)
{
	//链表为空
	if(p_clink->max_size==p_clink->size)
	{
		return false;
	}
	// 链表为空
	if(p_clink->size==0)
	{
		p_clink->head=p_data;
		p_data->next=p_clink->head;
		p_clink->size++;
		return true;
	}
	int i=0;
	NODE_DATA *p_index=p_clink->head;
	while(p_index->next!=p_clink->head)   // 将指针推向最后一个元素 
	{
		p_index=p_index->next;
	}

	p_index->next=p_data;
	p_data->next=p_clink->head;
	p_clink->size++;

}
bool print(CLINK *p_clink)
{
	if(p_clink->size==0)
	{
		return false;
	}
	NODE_DATA *p_index=p_clink->head;
	while(p_index->next!=p_clink->head)   //最后一个元素不能进入循环 
	{
		printf("%d\n",p_index->data);
		p_index=p_index->next;
	}
	
	printf("%d\n",p_index->data);
}
