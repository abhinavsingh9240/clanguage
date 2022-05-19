#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a,l;
	clrscr();
	printf("Enter the limit");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=l-i+3;j++)
			printf("*");
		for(j=1;j<=i;j++)
			printf("%d*",i);
		for(j=1;j<l-i+3;j++)
			printf("*");
		printf("\n");
	}
	getch();
}