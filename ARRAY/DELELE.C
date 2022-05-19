#include<stdio.h>
#include<conio.h>

void show(int *p,int s)
{	for(;s>0;s--)
	{	printf("%d ",*p);
		p++;
	}
}

int del(int *p,int *l,int ele)
{       int i,pos=-1;
	for(i=0;i<*l;i++)
	{
		if(ele==*(p+i))
			pos=i;
	}
	if(pos!=-1)
	{     for(i=pos;i<*l-1;i++)
		{	*(p+i)=*(p+i+1);
		}
	}
	--*l;
	return pos;
}



void main()
{ 	int arr[]={23,4,41,34,15},n=5,ele,p;
	clrscr();
	printf("initial array\n");
	show(arr,n);
	printf("\nenter the element you eant to delete:\t");
	scanf("%d",&ele);
	p=del(arr,&n,ele);
	if(p==-1)
		printf("entered element is not in the array");
	else
	{       printf("\n element is at %d index\n",p);
		printf("New array is \n");
		show(arr,n);
	}
	getch();


}