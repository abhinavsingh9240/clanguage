#include<stdio.h>
#include<conio.h>

void main()
{
	int ar[50],i,ele,n,f=-1;
	clrscr();
	printf("enter the array length:\t");
	scanf("%d",&n);
	if(n<=50){
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("\n\nenter the element for search:\t");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{	if(ar[i]==ele)
		{	f=i;
			break;
		}
	}
	if(f==-1)
		printf("element not found");
	else
		printf("element found at %d-index",i);
	}
	else
		printf("length of array is out of range");
	getch();
}
