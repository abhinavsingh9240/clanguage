#include<stdio.h>
#include<conio.h>

void main(){
int a,i,sum=0;
clrscr();
printf("Enter the number:\t");
scanf("%d",&a);
for(i=1;i<=a/2;i++){
	if (a%i==0){
		sum=sum+i;
		}
	}
if (sum==a)
	printf("Number is perfect");
else
	printf("Number is not perfect");
getch();
}