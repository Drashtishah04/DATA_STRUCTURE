#include<stdio.h>                                                                                                                                      #include<conio.h.
#include<conio.h>
int stack[10];
int top=-1;
void push(int);
void pop();
void disp();
void peep();
void main()
{
	clrscr();
	push(100);
	push(3);
	push(20);
	disp();
	peep();
}
void push(int ele)
{
	if(top>=9)
	{
		printf("\nstack is full");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
void pop()
{
	if(top<0)
	{
		printf("\nStack is empty");
	}
	else
	{
		top--;
	}
}
void disp()
{
	int i;
	if(top>=0)
	{
		for(i=0;i<=top;i++)
		{
			printf("\n%d",stack[i]);
		}
	}
	else
	{
		printf("\n stack is empty");
	}
}
void peep()
{
	int ind;
	if(top>=0)
	{
		printf("\nEnter No: ");
		scanf("%d",&ind);
		if(ind>top+1 || ind<0)
		{
			printf("\n Out of range");
		}
		else
		{
			printf("\n value=%d",stack[top-ind+1]);
		}
	}
	else
	{
		printf("\n stack is empty");
	}
	getch();
}
                                                                                                                                                                                                                