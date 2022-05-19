#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,i;
clrscr();
printf("Enter the number:\n");
scanf("%d%d",&a,&b);
i=(a<b?a:b)/2;
for(;i>=1;i--){
	if (a%i==0 && b%i==0){
		c=i;
		break;
	      }
	}
printf("Hcf:\t%d",c);
getch();
}