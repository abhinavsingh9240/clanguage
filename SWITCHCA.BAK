#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n MAIN MENU\n");
	printf("\n 1.ODD AND EVEN");
	printf("\n 2.Greater in two");
	printf("\n 3.swaping");
	printf("\n 4.positive negative");
	printf("\n 5. exit");
	printf("\n\n Enter the choice");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		printf("\nenter the number");
		scanf("%d",&a);
		if (a%2==0)
			printf("the number is even");
		else
		printf("The number is odd");
		break;
	case 2:
		printf("\nenter first number:\t");
		scanf("%d",&a);
		printf("\nenter another number:\t");
		scanf("%d",&b);
		if (a>b)
			printf("%d is greater than %d",a,b);
		else if (b>a)
			printf("%d is greater than %d",b,a);
		else
			printf("both are equal");
		break;
	case 3:
		printf("\nEnter the numbers\n");
		printf("a=");
		scanf("%d",&a);
		printf("b=");
		scanf("%d",&b);
		c=a;
		a=b;
		b=c;
		printf("\na=%d\nb=%d",a,b);
		break;
	case 4:
		printf("\nEnter the number:\t");
		scanf("%d",&a);
		if (a>0)
			printf("positive number");
		else if (a<0)
			printf("negative number");
		else
			printf("number is zero");
		break;
	case 5:
		exit(0);
	default:
		printf("Invalid choice");
	}
	getch();
}