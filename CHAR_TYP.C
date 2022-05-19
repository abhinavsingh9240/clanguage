#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter the character:\t");
	scanf("%c",&ch);
	if (islower(ch))
		printf("Character is an alphabet in lowercase");
	else if (isupper(ch))
		printf("Character is an alphabet in uppercase");
	else if (isdigit(ch))
		printf("Character is an digit");
	else
		printf("Character is an other symbol");
	getch();
}