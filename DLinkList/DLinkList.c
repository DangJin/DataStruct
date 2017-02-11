#include "DLinkList.h"
#include <memory.h>
#include <stdbool.h>
void init_DLinkList(DLINK *d_link,int max_size)
{
	memset(d_link,0,sizeof(DLINK));
	d_link->size=0;
	d_link->max_size=max_size;
}

bool insert_DLinkList(DLINK *d_link,NODE_DATA *p_data)
{
	//判断是否满了
	if(d_link->max_size==d_link->size)
	{
		return false;
	}
	
	//判断是否没有元素
	
	if(0==d_link->size)
	{
		p_data->pre=0;
		p_data->next=0;
		d_link->p_head=p_data;
		d_link->p_last=p_data;
		d_link->size++;
		return true;
	}
	
	d_link->p_last->next=p_data;
	p_data->pre=d_link->p_last;
	p_data->next=0;
	d_link->p_last=p_data;
	d_link->size++;
	
	return true;
	
}

bool print_DLinkList(DLINK *d_link)
{
	if(0==d_link->size)
	{
		return false;
	}
	
	printf("The DLinkList the length is :%d \n",d_link->size);
	NODE_DATA *p_index=d_link->p_head; 
	while(p_index!=0)
	{
		printf("%d",p_index->data);
		p_index=p_index->next;
	}
}

