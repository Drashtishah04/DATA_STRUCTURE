#include<conio.h>
#include<stdio.h>
float fact(float c);
void main()
{
	float a;
	clrscr();
	a=fact(8);
	printf("\n RESULT: %f",a);
	getch();
}
float fact(float x)
{
	float r;
	if(x==0)
	{
		r=1;
	}
	else
	{
		r=x*fact(x-1);
	}
	return r;
}















