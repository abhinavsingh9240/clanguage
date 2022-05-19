#include<stdio.h>
#include<conio.h>
void main()
{	int i=1,j,l,a;
	clrscr();
	printf("Enter the limit:\t");
	scanf("%d",&l);
	while(i<=l)
	{       j=1;
		a=0;
		while(j>=1)
		{
			printf("%d ",j);
			if(j==i)
				a=1;
			if(a==0)
				j++;
			else
				j--;

		getch();
		}
		printf("\n");
		i++;
		getch();
	}
	getch();
}