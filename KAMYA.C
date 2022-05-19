#include<stdio.h>
#include<conio.h>
void main(){
int a,x,b,n,y;
clrscr();
printf("Enter the values\nn=");
scanf("%d",&n);
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("x=");
scanf("%d",&x);
if (n==1)
       {
	y=a*x%b;
	printf("\ny=%d",y);
       }
else if (n==2){
	y=a*x*2+b*2;
	printf("\ny=%d",y);
	}
else if (n==3){
	y=a-b*x;
	printf("\ny=%d",y);
	}
else if (n==4){
	y=a+x/b;
	printf("\ny=%d",y);}
else
	printf("\ninvalid value of n");
getch();
}
