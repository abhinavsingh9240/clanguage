#include<stdio.h>
#include<conio.h>

void main()
{
	int *p,a=23;
	clrscr();
	p=&a;

	//value printing
	printf("\n\nvalue of a=\t %d",a);
	printf("\n\nvalue of a=\t %d",*(&a));
	printf("\n\nvalue of a=\t %d",*p);

	//adress printing
	printf("\n\nadress of a =\t %u",&a);
	printf("\n\nadress of a =\t %u",p);
	printf("\n\nadress of p =\t %u",&p);

	getch();
}