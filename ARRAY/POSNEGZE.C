#include<stdio.h>
#include<conio.h>
int p,z,ng;

void counttyp(int arr[],int size)
{        int i;
	for(i=0;i<size;i++)
		if(arr[i]<0)
			ng++;
		else if(arr[i]>0)
			p++;
		else
			z++;
}


void main()
{
	int x[50],i,n;
	clrscr();
	printf("Enter the length of array:\t");
	scanf("%d",&n);
	if(n<=50)
	{
		printf("enter the array:\n");
		for(i=0;i<n;i++)
			scanf("%d",&x[i]);

	counttyp(x,n);
	printf("\nnegative numbers:\t %d",ng);
	printf("\npositive numbers:\t %d",p);
	printf("\nzeros :\t %d",z);
	}
	else
		printf("out of range");
	getch();
}