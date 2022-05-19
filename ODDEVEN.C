#include<stdio.h>
#include<conio.h>
void main()
{ int n;
clrscr();
printf("\nENTER THE NO. :\t");
scanf("%d",&n);
if (n%2==0)
	printf("THE NO. IS EVEN");
else
	printf("THE NO. IS ODD");

getch();
}