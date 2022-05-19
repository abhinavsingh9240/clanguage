#include<stdio.h>

void fib(int);

void main()
{       int limit;
	clrscr();
	printf("Enter the maxmimum limit");
	scanf("%d",&limit);
	if(limit==1)
	{	printf("0");

	}
	else if(limit==2)
	{
		printf("0 1");
	}
	else
	{	printf("0 1 ");
		fib(limit-2);
	}
	getch();
}
void fib(int a)
{      int c;
       static int x=0,y=1;

       if(!(a<=0))
       {
		printf("%d ",x+y);
		c=x;
		x=y;
		y=c+y;
		fib(a-1);
       }

}