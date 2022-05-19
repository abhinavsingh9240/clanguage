#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter the character:\t");
	scanf("%c",&ch);
	if (ch>='A' && ch<='Z')
		printf("The character is Uppercase alphabet");
	else if (ch>='a' && ch<='z')
		printf("The characteris lower case alphabet");
	else if (ch>='0' && ch<='9')
		printf("the character is digit");
	else
		printf("Character is other symbol");
	getch();
}