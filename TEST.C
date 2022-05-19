#include<stdio.h>
#include<conio.h>
void main()
{   	char a[]={'a','b','c','d'};
	clrscr();
	printf("a=%s",a);
	char b[10];
	printf("\nEnter string:\t");
	scanf("%s",b);
	printf("\na=%s",a);
	printf("\nb=%s",b);
    getch();
}