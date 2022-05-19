#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l,a=0;
	clrscr();
	printf("Enter the limit:\t");
	scanf("%d",&l);
	for(i=l;i<=l;)
	{   for(j=l;j>=1;j--)
		{       if(i>=j)
			printf("%d ",j);
			else
			printf("  ");
		}
	    if(a==0)
		i--;
	    else
		i++;
	    if(i==1)
		a=1;
	    printf("\n");
	}
	getch();
}

