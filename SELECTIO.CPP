#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,temp,min;
	clrscr();
	printf("\n enter array size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter array elements a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("\n\n sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	getch();
}