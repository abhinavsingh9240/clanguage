#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a;
	clrscr();
	printf("Enter the number:\t");
	scanf("%d",&a);
	for(i=1;i<=a;i++);
		printf("%d\t",i);
	getch();
}