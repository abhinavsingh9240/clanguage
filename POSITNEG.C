#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("ENTER THE NO. :");
scanf("%d",&a);
if (a>0)
	printf("THE NO. IS POSITIVE");
else if(a<0)
	printf("THE NO. IS NEGATIVE");
else
	printf("THE NO. IS ZERO");
getch();
}