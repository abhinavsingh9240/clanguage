#include<stdio.h>
#include<conio.h>

void find(int[],int);

void main()
{
	int arr[50],i,n;
	clrscr();
	printf("\n\nenter the length of element:\t");
	scanf("%d",&n);
	if(n>50)
		printf("Length is out of range");
	else
	{   	printf("enter the array:\n");
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		find(arr,n);

	}
	 getch();
}

void find(int x[],int size)
{    	int i,max=x[0],min=x[0];

	for(i=0;i<size;i++)
	{
		if(max<x[i])
			max=x[i];
		else if(min>x[i])
			min=x[i];
	}
	printf("\n\nlargest one :\t %d",max);
	printf("\n\nsmallest one :\t %d",min);
}
