#include<stdio.h>
#include<conio.h>

int strpalin(char ar[])
{       int i,l=0,a=0;
	for(;ar[l]!='\0';l++)
	for(i=0;i<=l/2;i++)
	{	if(ar[i]!=ar[l-2-i])
		      a=1;
	}
	return a;
}


void main()
{	char st[50];
	int a;
	clrscr();
	printf("Enter the string");
	scanf("%s",st);
	a=strpalin(st);
	if(a==0)
	{
		printf("The string is plaindrome");
	}
	else
	{
		printf("The string is NOT palindrome");
	}
	getch();
}