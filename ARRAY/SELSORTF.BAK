#include<stdio.h>
#include<conio.h>

void selsort(int *p,int s)
{       int *i=p,*j,c;
	for(;i<p+s;i++)
	{
		for(j=i+1;j<p+s;j++)
		{
			if(*i>*j)
			{
				c=*i;
				*i=*j;
				*j=c;
			}
		}

	}
}


void show(int *p,int s)
{
	 for(;s>0;s--)
	{	printf(" %d",*p);
		p++;
	}
}

void main()
{	int arr[]={34,45,43,56,2,33},n=6;
	clrscr();
	printf("\n\nArray before sorting\n");
	show(arr,n);
	printf("\n\nArray ater sorting\n");
	selsort(arr,n);
	show(arr,n);
	getch();
}



