#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c=1;
clrscr();
printf("Enter the number");
scanf("%d",&a);
printf("Enter the power:");
scanf("%d",&b);
for(;b>=1;b--)
	c=c*a;
printf("Answer is %d",c);
getch();
}
