#include<stdio.h>
#include<conio.h>
void main(){
int a,b=2;
clrscr();
printf("Enter the number here:\t");
scanf("%d",&a);
a1:     if (a==1){
		printf("the number is co prime");
		goto a2;
		}
	else if(b==a){
		printf("The number is prime number");
		goto a2;
		}
	else if(a%b==0){
		printf("The number is not a prime number");
		goto a2;
		}

	b++;
	goto a1;
a2:
	getch();
}