#include<stdio.h>
#include<conio.h>
int top=-1;
int array[5];
void push(int num)
{
	if(top>=4)
		printf("stack is full---\n");
	else
	{
		top++;
		array[top]=num;
	}
}
int pop()
{
	if(top<=-1)
		printf("stack is empty---\n");
	else
	{
		top--;
	}
	return array[top+1];
}
void printstack()
{
	int i;
	if(top<=-1)
		printf("\n stack is empty");
	else
	{
		for(i=0;i<=top;i++)
		printf("%d ",array[i]);
	}
}
void insertAtBottom(int item)
{
	if(top<=-1)
	{
		push(item);
	}
	else
	{
		int top=pop();
		insertAtBottom(item);
		push(top);
	}
}
void reverse()
{
	if(top!=-1)
	{
		int top=pop();
		reverse();
		insertAtBottom(top);
	}
}
int main()
{
	clrscr();
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	printf("\n original stack \n");
	printstack();
	reverse();
	printf("\n reversed stack\n");
	printstack();
	getch();
	return 0;
}