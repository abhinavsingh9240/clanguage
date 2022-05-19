#include<stdio.h>
#include<conio.h>
void main(){
int p,e,n,g,d,b;
clrscr();
printf("\nWELCOME\n");
printf("Enter the number of pencil:\t");
scanf("%d",&p);
printf("\nEnter the number of eraser:\t");
scanf("%d",&e);
printf("\nEnter the number of notebook:\t");
scanf("%d",&n);
g=(p*10)+(e*5)+(n*20);
d=g/10;
b=g-d;
printf("\nThe Gross Bill is:\t%d",g);
printf("\nThe Discount is:\t%d",d);
printf("\nThe Net Bill is:\t%d",b);
getch();
}