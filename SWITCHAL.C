#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char a;
	clrscr();
	printf("Enter the alphabet");
	scanf("%c",&a);
	a=tolower(a);
	switch(a)
	{
		case 'a':
			printf("Vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		default:
			printf("consonant");
	}
	getch();
}