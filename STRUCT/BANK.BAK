#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct bank
{
	int accno,mobno[10];
	long float balance;
	char name[10],typ[10],gen;
}bank;

void center(char ar[])
{
	int i,sp,a=strlen(ar);
	sp=40-(a/2);
	for(i=1;i<=sp;i++)
		printf(" ");
	for(i=0;i<a;i++)
		printf("%c",ar[i]);
}

void create()
{       int c=0,lp=0,i,j;
	char ch,details[4][15],title[][15]={"Name\t:",
				"Mobile No.\t:",
				"Gender\t:",
				"Acc Typ\t:"};
	bank b1,b2;
	FILE *f1,*f2;
	f1=fopen("bank.dat","rb");
	f2=fopen("temp.dat","wb");
	while(fread(&b1,sizeof(b1),1,f1))
		{fwrite(&b1,sizeof(b1),1,f2);
		 printf("34");
		}
	b2.accno=b1.accno+1;


	while(lp==0)
	{       clrscr();
		center("ENTER INFO\n");
		for(i=0;i<4;i++)
		{
			for(j=0;title[i][j]!='\0';j++)
				printf("%c",title[i][j]);
			for(j=0;details[i][j]!='\0';j++)
				printf("%c",details[i][j]);

			if(c==i)
				printf("|");
			printf("\n");

		}
		fflush(stdin);
		ch=getch();
		switch(ch)
		{
			case 9:
				if(c==3)
					c=0;
				else
					c++;
				break;
			case 27:
				lp=1;
				break;
			case 13:
				strcpy(b2.name,details[0]);
				strcpy(b2.typ,details[3]);
				for(i=0;i<10;i++)
					b2.mobno[i]=details[1][i]-48;
				b2.gen=toupper(details[2][0]);
				b2.balance=3000;
				fwrite(&b2,sizeof(b2),1,f2);
				fclose(f1);
				fclose(f2);
				lp=1;
				break;
			case 8:
				for(i=0;details[c][i]!='\0';i++)
					{}
				details[c][i-1]='\0';

			default:
				for(i=0;details[c][i]!='\0';i++)
					{}
				details[c][i+1]='\0';
				details[c][i]=ch;



		      }
	}
}

void main()
{
	int i,j,c=0,nav;
	char m[4][20]={"Create Account",
			"Manage Account",
			"Edit Account Info",
			"Bank Info"};
	A:
	clrscr();
	printf("\n\n\n");
	center("MAIN MENU\n\n");
	for(i=0;i<4;i++)
	{      if(c==i)
			printf(">>> ");
		else
			printf("    ");
		for(j=0;m[i][j]!='\0';j++)
			printf("%c",m[i][j]);
		printf("\n");
	}
	printf("\n\n\n\nSpace/Enter\t- Select\nW\t\t- Up\nS\t\t- Down\nEsc\t\t- Exit\n");
	nav=getch();
	switch(nav)
	{
			case 'w':
			if(c==0)
				c=3;
			else
				c--;
			goto A;
		case 's':
			if(c==3)
				c=0;
			else
				c++;
			goto A;
		case 27:
			exit(0);
		case 32:
		case 13:
			goto B;

		default:
			goto A;

	}

	B:
	switch(c)
	{
		case 0:
			clrscr();
			create();
			break;
		case 1:
			clrscr();
			//manage();
			break;
		case 2:
			clrscr();
			//edit();
			break;
		case 3:
			clrscr();
			//info();
			break;
	}
	getch();
}