#include<conio.h>
#include<stdio.h>


void calfact(int x)
{	int i,f=1;
	for(i=x;i>=1;i--)
		f=f*i;
	printf("Factorial:\t %d",f);
}

int calculator(int a,int b,char ch)
{
	if(ch=='+')
	   a+=b;
	else if(ch=='-')
		a-=b;
	else if(ch=='*')
		a*=b;
	else if(ch=='/')
		a/=b;
	return a;
}
