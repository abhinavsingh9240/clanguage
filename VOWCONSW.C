#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter the alphabet:\t");
	scanf("%c",&ch);
	if (isupper(ch))
		ch=tolower(ch);
	switch(ch)
	{	case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf(" Alphabet is vowel");
		break;
		default:
			printf("Alphabet is consonent");
	}
	getch();
}