#include<stdio.h>
#include<conio.h>


void main()
{       int i,arr[]={61,30,400,20,5},c,j,l;
	clrscr();
	printf("\n\n intial array is \n");
	for(i=0;i<5;i++)
		printf(" %d",arr[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{

			if(arr[i]>arr[j])
			{
				c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}

		}


	}
	printf("\nSorted array is\n");
	for(i=0;i<5;i++)
		printf(" %d",arr[i]);
	getch();
}