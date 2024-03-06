#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1;
int size=5;
int queue[5];
void insert(int);
void display();
void main()
{
	clrscr();
	insert(30);
	insert(45);
	insert(20);
	insert(67);
	insert(75);
	display();
	getch();
}
void insert(int ele)
{
	if(front==0&&rear==size-1)
		printf("\n queue is full");
	else if(front==-1)
	{
		front=rear=0;
		queue[rear]=ele;
	}
	else if(rear==size-1)
	{
		rear=0;
		queue[rear]=ele;
	}
	else
	{
		rear++;
		queue[rear]=ele;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("\n queue is empty");
	else if(front>rear)
	{
		for(i=0;i<=rear;i++)
		{
			printf("\n element at %d is %d",i,queue[i]);
		}
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n element at %d is %d",i,queue[i]);
		}
	}
}