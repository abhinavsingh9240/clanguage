#include<stdio.h>
#include<conio.h>
// for armstrong number
//sum of cube of digits equal to the number
void main(){
int a,sum=0;
long int n,n2;
clrscr();
printf("Enter the number:\t");
scanf("%ld",&n);
n2=n;
while(n>0){
	a=n%10;
	sum=sum+(a*a*a);
	n/=10;
	}
if (n2==sum)
	printf("Number is Armstrong");
else
	printf("Number is not Armstrong");
getch();
}