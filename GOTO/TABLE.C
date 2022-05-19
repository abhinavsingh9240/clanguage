#include<stdio.h>
#include<conio.h>

void main(){
int a,b=1;
clrscr();
printf("Enter the enter :\t");
scanf("%d",&a);
a1:
	printf("%d x %d = %d\n",a,b,a*b);
	if (b==10)
		goto a2;
	b++;
	goto a1;
a2:
	getch();
}