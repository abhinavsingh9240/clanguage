#include<stdio.h>
#include<conio.h>
void main(){
int a,i;
clrscr();
printf("enter the number:\t");
scanf("%d",&a);
for(i=1;i<=a;i+=2)
	printf("\n%d",i);
getch();
}
