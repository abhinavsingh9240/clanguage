#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,max,min;
clrscr();
printf("Enter the no.s:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
	max=a ;
else if (b>a && b>c)
	max=b ;
else
	max=c ;
if (a<b && a<c)
	min=a ;
else if (b<a && b<c)
	min=b ;
else
	min=c;
printf("\nGREATEST:\t%d",max);
printf("\nSMALLEST:\t%d",min);
getch();
}