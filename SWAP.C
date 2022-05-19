#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("a=\t");
scanf("%d",&a);
printf("b=\t");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("now a=%d and b=%d",a,b);
getch();
}