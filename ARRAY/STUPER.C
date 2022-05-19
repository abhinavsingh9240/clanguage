#include<stdio.h>
#include<conio.h>

void main()
{
	int ar[5],i,total=0,per;
	clrscr();
	printf("enter the number of five subject:\n");
	for(i=0;i<5;i++)
	{		scanf("%d",&ar[i]);
			total+=ar[i];
	}
	per=total/5;
	printf("\ntotal marks = %d",total);
	printf("\npercentage = %d",per);
	getch();
}
