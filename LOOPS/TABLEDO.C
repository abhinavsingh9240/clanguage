#include<stdio.h>
#include<conio.h>

void main(){
int a,b=1;
clrscr();
printf("Enter the numberfor table:\t");
scanf("%d",&a);
do{
	printf("%d x %d = %d\n",a,b,a*b);
	b++;
	}while(b<=10);
getch();
}