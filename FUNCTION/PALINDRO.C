#include<stdio.h>
#include<conio.h>
int rev(int a)
{
	int p,q=0;
	while(a>0)
	{
		p=a%10;
		q=q*10+p;
		a=a/10;
	}
	return  q;
}

void main()
{
	int a;
	clrscr();

	printf("Enter the number:\t");
	scanf("%d",&a);
	if(a==rev(a))
		printf("Entered number is palindrome");
	else
		printf("Entered number is not palindrome");
	getch();
}