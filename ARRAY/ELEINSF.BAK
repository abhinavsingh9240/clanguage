#include<stdio.h>
#include<conio.h>
void show(int *p,int s)
{
	for(;s>0;s--)
	{	printf("%d ",*p);
		p++;
	}
}

void insert(int *p,int *l,int ele)
{
	int *i,*j;
	for(i=p;i<p+*l;i++)
	{
		if(*i>ele)
			break;
	}
	for(j=p+*l;j>=i;j--)
	{
		*j=*(j-1);
	}
	*i=ele;
	++*l;


}


void main()
{
	int arr[]={11,22,33,44,55,66},i,j,n=6,ele;
	clrscr();
	printf("intial array\t");
	show(arr,n);
	printf("\nEnter the element to insert:\t");
	scanf("%d",&ele);
	insert(arr,&n,ele);
	printf("sorted array\n");
	show(arr,n);
	getch();
}

