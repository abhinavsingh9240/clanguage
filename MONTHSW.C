#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter the number of month:\t");
	scanf("%d",&a);
	switch(a)
	{	case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 Days");
		break;
		case 2:
			printf("28 Days");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("31 Days");
		break;
		default:
			printf("invalid month number");
		}
	getch();
}