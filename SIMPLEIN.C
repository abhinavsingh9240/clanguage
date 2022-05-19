#include<stdio.h>
#include<conio.h>
void main(){
long int p,r,t,s;
clrscr();
printf("\nWelcome\n");
printf("Enter the principal amount:\t");
scanf("%ld",&p);
printf("\nEnter the rate of intrest:\t");
scanf("%ld",&r);
printf("\nEnter the Time:\t");
scanf("%ld",&t);
s=(p*r*t)/100;
printf("\nThe Simple intrest is:\t%ld",s);
getch();
}