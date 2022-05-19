#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter the character:\t");
	scanf("%c",&ch);
	if (ch>=65 && ch<=90)
	      {
		ch=ch+32;
		printf("In lower case:\t%c",ch);
		}
	else if (ch>=97 && ch<=122)
		{
		 ch=ch-32;
		 printf("In Upper case:\t%c",ch);
		 }
	else
		printf("Not an alphabet");
	getch();
}