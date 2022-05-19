#include<stdio.h>
#include<conio.h>
#include<string.h>

void center(char ar[])
{
	int i,sp,a=strlen(ar);
	sp=40-(a/2);
	for(i=1;i<=sp;i++)
		printf(" ");
	for(i=0;i<a;i++)
	{	printf("%c",ar[i]);
	}
}

void main()
{      	center("abhinav");
	getch();
}