#include<stdio.h>
#include<conio.h>
void main()
{
	char ch1,ch2,ch3,ch4;
	clrscr();
	printf("Enter the password:\t");
	ch1=getch();
	printf("*");
	ch2=getch();
	printf("*");
	ch3=getch();
	printf("*");
	ch4=getch();
	printf("*");
	if (ch1==51 && ch2==48 && ch3==48 && ch4==48)
		printf("\n\nWelcome,ABHINAV");
	else
		printf("\n\nAccess Denied");
	getch();
	}