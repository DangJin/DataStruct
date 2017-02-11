#include "LinkList.h"
#include<memory.h>
#include<stdbool.h>
#include<stdio.h>

void init_link(LINK *p,int max_size)
{
	memset(p,0,sizeof(LINK));
	p->max_size=max_size;
}

bool insert_link(LINK *p,NODE_DATA *p_data)
{
	//链表已满
	if(p->size==p->max_size)
	{
		return false;
	}
	//链表为空
	if(0==p->size)
	{
		p_data->next=0;
		p->p_head=p_data;
		p->p_last=p_data;
		p->size++;
	}
	else
	{
		NODE_DATA *p_index=p->p_last;
		p_index->next=p_data;
		p_data->next=0;
		p->p_last=p_data;
		p->size++;
	}

	return true;
}

bool get_link(LINK *p,NODE_DATA *p_data)
{
	if(0==p->size)
	{
		return 0;
	}
	NODE_DATA *p_index =p->p_head;

	while(p_index!=0)
	{
		if(p_index->data==p_data->data)
		{
			return true;
		}

		p_index=p_index->next;
	}
}


bool delete_link(LINK *p,int p_data)
{
	if(0==p->size)
	{
		return 0;
	}

	//头节点
	if(p_data==p->p_head->data&&1!=p->size)
	{
		p->p_head=0;
		p->size--;
		return true;
	}

	if(p_data==p->p_head->data&&0!=p->size)
	{
		p->p_head=p->p_head->next;
		return true;
	}


	NODE_DATA *p_index =p->p_head;

	while(p_index->next!=0)
	{

		if(p_index->next->data == p_data && p_index->next == p->p_last)
		{
			p->p_last=p_index;
			p_index->next=0;
			p->size--;
			printf("%d ",p->p_last->data);
			return true;
		}


		if(p_index->next->data==p_data)
		{
			p_index->next=p_index->next->next;
			p->size--;
			return true;
		}
		p_index=p_index->next;
	}
}
void print_link(LINK *p)
{
	if(0==p->size)
	{
		return;
	}

	NODE_DATA *p_index=p->p_head;
	while(0!=p_index)
	{
		printf("%d ",p_index->data);
		p_index=p_index->next;
	}
}
