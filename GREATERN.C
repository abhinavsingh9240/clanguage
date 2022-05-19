#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
printf("\nEnter two no.s to compare\n");
scanf("%d%d",&a,&b);
if (a>b)
	printf("\nFirst no.(%d) is greater",a);
else if (a<b)
	printf("\nSecond no.(%d) is greater",b);
else
	printf("\nBoth no.s(%d) are equal",a);
getch();
}