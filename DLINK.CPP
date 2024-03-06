#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *next, *prev;
};
typedef struct list node;
node *p;
void create(int,node*);
void display(node*);
void addbeg(int,node*);
void addafter(int,int,node*);
void main()
{
	p=NULL;
	clrscr();
	create(10,p);
	create(20,p);
	create(30,p);
	display(p);
	printf("\n--------------\n");
	addbeg(19,p);
	display(p);
	printf("\n-------------\n");
	addafter(3,4,p);
	display(p);
	printf("\n-------------\n");
	getch();
}
void create(int ele,node *q)
{
	node *temp;
	if(q==NULL)
	{
		p=(node *)malloc(sizeof(node));
		p->prev=NULL;
		p->info=ele;
		p->next=NULL;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		temp=(node *)malloc(sizeof(node));
		temp->next=NULL;
		temp->info=ele;
		temp->prev=q;
		q->next=temp;
	}
}
void addbeg(int ele,node *q)
{
	 p=(node *)malloc(sizeof(node));
	 p->prev=NULL;
	 p->info=ele;
	 p->next=q;
	 q->prev=p;
}
void display(node *q)
{
	while(q!=NULL)
	{
		printf("\t %d",q->info);
		q=q->next;
	}
}
void addafter(int a, int ele, node *q)
{
	node *temp;
	int i;
	for(i=1;i<a;i++)
	{
		q=q->next;
		if(q==NULL)
		{
			printf("out of range");
			return;
		}
	}
	temp=(node *)malloc(sizeof(node));
	temp->info=ele;
	temp->next=q->next;
	temp->prev=q;
	temp->next->prev=temp;
	q->next=temp;
}
void deleted(int ele,node *q)
{
	node *temp;
	if(q->info==ele)
	{
		p=q->next;
		free(q);
		return;
	}
	while(q->next->next!=NULL)
	{
		if(q->next->info==ele)
		{
			temp=q->next;
			q->next=q->next->next;
			free(temp);
			return;
		}
	}
}
