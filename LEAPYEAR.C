#include<stdio.h>
#include<conio.h>
void main(){
long int a;
clrscr();
printf("Enter the year:\t");
scanf("%ld",&a);
if ((a%4==0 && a%100!=0) ||(a%400==0))
   printf("Leap year");
else
	printf("not a leap year");

getch();
}