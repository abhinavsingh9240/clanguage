#include<stdio.h>
#include<graphics.h>
#include<conio.h>
		     //480x640pixels
void main()
{       int i;
	int gmode,gdriver= DETECT;
	clrscr();
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
	rectangle(100,200,200,300);
	for(i=100;i<700;i+=100)
	circle(0,0,i);
	for(i=600;i<1000;i+=10)
	circle(0,0,i);
	getch();
	closegraph();



}