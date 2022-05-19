#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char ch;
	clrscr();
	printf("\nEnter the character:\t");
	scanf("%c",&ch);
	if isalpha(ch)
	{	if (isupper(ch))
			ch=tolower(ch);
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			printf("character is vowel");
		else
			printf("character is consonant");
	}
	else
	printf("Character is not an alphabet");

	getch();
}