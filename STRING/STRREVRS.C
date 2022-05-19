#include<stdio.h>
#include<conio.h>

void reverse(char ar[])
{       char ch;
	int i,len=1;
	for(;ar[len]!='\0';len++)
	{}
	for(i=0;i<=len/2;i++)
	{       ch=ar[i];
		ar[i]=ar[len-i-1];
		ar[len-i-1]=ch;

	}

}

void main()
{
	char x[50];
	clrscr();
	printf("Enter the string:\t");
	scanf("%s",x);
	clrscr();
	printf("\nEntered string is:\t%s",x);
	reverse(x);
	printf("\n\nReversed string is:\t%s",x);

	getch();
}