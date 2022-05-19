#include<stdio.h>
#include<conio.h>

void main()
{
	int const a=20;
	const int *p=&a;
	int b=500;

	printf("the value of *p is %d ",*p);
	p=&b;
	printf("the value of *p is now %d",*p);
	getch();
}
