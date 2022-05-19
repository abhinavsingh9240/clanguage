#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr()m
printf("enter the number for table:\t");
scanf("%d",&a);
for(b=1;b<=10;b++)
	printf("\n%d * %d = %d",a,b,a*b);
getch();
}