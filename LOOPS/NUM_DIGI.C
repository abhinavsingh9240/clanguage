#include<stdio.h>
#include<conio.h>
// program to find the number of digit in a number

void main(){
int a,n=0;
clrscr();
printf("Enter the number");
scanf("%d",&a);
do{
	a/=10;
	n++;
	}while(a>0);
printf("Total num of digit is %d",n);
getch();
}