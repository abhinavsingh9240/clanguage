#include<stdio.h>
#include<conio.h>

typedef struct  student
{
	int eno,reg;
	char gen,name[20],fname[20];

}stud;

void main()
{  	stud  s1;
	clrscr();
	s1.reg=1;
	printf("Enter the enrollment number:\t");
	scanf("%d",&s1.eno);
	printf("Enter the name of student:\t");
	scanf("%s",s1.name);
	fflush(stdin);
	printf("Enter the Fathers name:\t");
	scanf("%s",s1.fname);
	printf("Enter the Gender:\t");
	fflush(stdin);
	scanf("%c",&s1.gen);

	clrscr();
	printf("\nRegistration number:\t%d",s1.reg);
	printf("\nEnrollment number:\t%d",s1.eno);
	printf("\nName of the student:\t%s",s1.name);
	printf("\nName of the father:\t%s",s1.fname);
	printf("\nGender of the student:\t%c",s1.gen);




 getch();
}