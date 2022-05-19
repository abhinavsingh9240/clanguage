#include<stdio.h>
#include<conio.h>
void main(){
int p,c,m,e,cs,total;
long int per;
clrscr();
printf("\nEnter the No. of Physics:\t");
scanf("%d",&p);
printf("\nEnter the No. of Chemistry:\t");
scanf("%d",&c);
printf("\nEnter the No. of Maths:\t");
scanf("%d",&m);
printf("\nEnter the No. of English:\t");
scanf("%d",&e);
printf("\nEnter the No. of CS:\t");
scanf("%d",&cs);
total=(p+c+m+e+cs);
per=total/5;
printf("\nPercentage of The Student is:\t%ld",per);
getch();
}