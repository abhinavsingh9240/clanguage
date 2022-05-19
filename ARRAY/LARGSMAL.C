#include<stdio.h>
#include<conio.h>

void main()
{	int x[50],i,n,max,min;
	printf("Enter the length of array:\t");
	scanf("%d",&n);
	if(n>50)
		printf("out of range");
	else
	{
		printf("enter the array:\n");
		for(i=0;i<n;i++)
			scanf("%d",&x[i]);
		max=x[0];
		min=x[0];
		for(i=1;i<n;i++)
		{      	if(x[i]<min)
				min=x[i];
			else if(max<x[i])
				max=x[i];

		}
		printf("\n\nLARGEST NUMBER IN THE ARRAY IS :\t %d\n\n",max);
		printf("SMALLEST NUMBER IN THE ARRAY IS :\t %d",min);


	}
	getch();

}