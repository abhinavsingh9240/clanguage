#include<stdio.h>
#include<conio.h>
void main(){
int f=1,a;
clrscr();
printf("Enter the Number:\t");
scanf("%d",&a);
for(;a>=1;a--){
	f=f*a;
	}
printf("factorial=%d",f);
getch();
}