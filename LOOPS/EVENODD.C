#include<stdio.h>
#include<conio.h>
//for number of even and odd digits
void main(){
int b,even=0,odd=0;
long int a;
clrscr();
scanf("%ld",&a);
while(a>0){
	b=a%10;
	if (b%2==0)
		even++;
	else
		odd++;
	a/=10;
	}
printf("Odd digit=\t%d\nEven digit=\t%d",odd,even);
getch();
}