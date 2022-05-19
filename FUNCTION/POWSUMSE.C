#include<stdio.h>
#include<conio.h>

int power(int x,int y);

void main()
{
	int a,l,s=0,i;
	clrscr();
	printf("Enter the number(a):\t");
	scanf("%d",&a);
	printf("Enter the limit:\t");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
		s+=i*power(a,i);
	printf("Sum of the series is %d",s);
	getch();
}

int power(int x,int y)
{
	int p=1;
	for(;y>=1;y--)
	      p*=x;
	return p;
}