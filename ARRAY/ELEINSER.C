#include<stdio.h>
#include<conio.h>
void show(int *p,int s)
{
	for(;s>0;s--)
	{	printf("%d ",*p);
		p++;
	}
}

void insert(int arr[],int s,int ele)
{
	int i,j;
	for(i=0;i<s;i++)
	{	if(arr[i]>ele)
			break;
	}
	for(j=s;j>=i;j--)
	{
		arr[j]=arr[j-1];

	}
	arr[i]=ele;
	s++;


}


void main()
{
	int arr[]={11,22,33,44,55,66},i,j,n=6,ele;
	clrscr();
	printf("intial array\t");
	show(arr,n);
	printf("\nEnter the element to insert:\t");
	scanf("%d",&ele);
	insert(arr,n,ele);
	printf("sorted array\n");
	n++;
	show(arr,n);
	getch();
}

