#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,limit;
	clrscr();
	printf("limit=\t");
	scanf("%d",&limit);
	for(i=limit;i>=1;i--)
	{	for(j=limit;j>=1;j--)
		{	if(j<=i)
				printf("%d ",j);
			else
				printf("  ");
		}
		printf("\n");
	}
getch();
}