#include<stdio.h>
#include<conio.h>
//to reverse a number
void main(){
long int a,b=0;
int n;
clrscr();
printf("Enter the number:\t");
scanf("%ld",&a);
while(a>0){
	n=a%10;
	b=b*10+n;
	a/=10;
	}
printf("Reverse is %ld",b);
getch();
}