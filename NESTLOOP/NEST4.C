#include<stdio.h>
#include<conio.h>
/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
void main()
{
	int i,j,l;
	clrscr();
	printf("Enter the number:\t");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		for(j=l;j>=i;j--)
			printf("%d ",j);
		printf("\n");
	}
getch();
}