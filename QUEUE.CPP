#include<stdio.h>
#include<conio.h>
int queue[10];
int front=-1,rear=-1;
void enq(int);
void dq();
void dis ();
void main()
{
	clrscr();
	enq(50);
	enq(99);
	enq(1);
	dis();
	printf("\n-----------\n");
	dq();
	printf("\n------------\n");
	dis();
	getch();

}
void enq(int a)
{
	if(rear>=9)
	{
		printf("\n queue is full");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			rear++;
			queue[rear]=a;
		}
		else
		{
			rear++;
			queue[rear]=a;
		}
	}
}
void dis()
{
	int i;
	if(rear>-1)
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d=> %d",queue[i],i);
		}
	}
	else
	{
		printf("\nqueue is empty");
	}
}
void dq()
{
	if(rear<0)
	{
		printf("\n Queue is empty");
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}