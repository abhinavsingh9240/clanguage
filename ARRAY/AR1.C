#include<stdio.h>
#include<conio.h>
void main()
{
	int x[50],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	if(n>50)
		printf("invalid choice");
	else
	{
		printf("enter the array:");
		for(i=0;i<n;i++)
			scanf("%d",&x[i]);
	}
	getch();
}