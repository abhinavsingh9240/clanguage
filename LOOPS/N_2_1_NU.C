#include<stdio.h>
#include<conio.h>
void main(){
int n;
clrscr();
printf("\nEnter the number:\t");
scanf("%d",&n);
for(;n>=1;n--)
	printf("\n%d",n);
getch();
}