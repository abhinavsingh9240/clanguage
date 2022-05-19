#include<conio.h>
#include<stdio.h>

void main()
{	int i,j,a;
	char l;
	clrscr();
	printf("Enter the number:\t");
	scanf("%c",&l);
	for(i='A';i<=l;i++)
	{       a=0;
		for(j='A';j>='A';)
		{       printf("%c ",j);
			if(j==i)
				a=1;
			if(a==0)
				j++;
			else
				j--;

		}
		printf("\n");
	}
	;
getch();
}