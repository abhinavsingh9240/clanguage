#include<stdio.h>
#include<conio.h>
struct student
{
	int regno;
	long long int mob;
	char gen,name[20],fname[20];

};
struct student in()
{       struct student s;
	printf("Registration Number:\t");
	scanf("%d",&s.regno);
	fflush(stdin);
	printf("Student Name:\t");
	gets(s.name);
	fflush(stdin);
	printf("Father`s Name:\t");
	gets(s.fname);
	fflush(stdin);
	printf("Gender:\t");
	scanf("%c",&s.gen);
	printf("Mobile Number:\t");
	scanf("%lld",&s.mob);
	return s;

}
void out(struct student s)
{
	printf("\nRegistration number:\t%d",s.regno);
	printf("\nStudent Name:\t%s",s.name);
	printf("\nFather`s Name:\t%s",s.fname);
	printf("\nGender:\t%c",s.gen);
	printf("\nMobile Number:\t%lld",s.mob);

}

void main()
{      struct student stud[3];
	int i;
	for(i=0;i<3;i++)
	{       clrscr();
		printf("\nENTER THE INFORMATION OF STUDENT\n");
		stud[i]=in();

	}
	for(i=0;i<3;i++)
	{       clrscr();
		printf("\nINFORMATION OF STUDENT:-\n");
		out(stud[i]);
		getch();

	}


	getch();
}