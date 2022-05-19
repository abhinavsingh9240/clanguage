#include<stdio.h>
#include<conio.h>
void main(){
long int n,m,r;
clrscr();
printf("Enter the Amount :\t:");
scanf("%ld",&m);
r=m%2000;
n=(m-r)/2000;
printf("\n%ld x 2000",n);
m=r;
r=m%500;
n=(m-r)/500;
printf("\n%ld x 500",n);
m=r;
r=m%200;
n=(m-r)/200;
printf("\n%ld x 200",n);
m=r;
r=m%100;
n=(m-r)/100;
printf("\n%ld x 100",n);
m=r;
r=m%50;
n=(m-r)/50;
printf("\n%ld x 50",n);
m=r;
r=m%20;
n=(m-r)/20;
printf("\n%ld x 20",n);
m=r;
r=m%10;
n=(m-r)/10;
printf("\n%ld x 10",n);
m=r;
r=m%5;
n=(m-r)/5;
printf("\n%ld x 5",n);
m=r;
r=m%2;
n=(m-r)/2;
printf("\n%ld x 2",n);
m=r;
printf("\n%ld x 1",r);
getch();
}