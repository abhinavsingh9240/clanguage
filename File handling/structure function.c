#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct student
{
    char name[100];
    int rno,age,marks;

}stud;

void in(stud *p)
{
    printf("\nENTER THE DETAILS :-\n\n");
    printf("ROLL.NO\t:");
    scanf("%d",&p->rno);
    printf("NAME\t:");
    scanf("%s",p->name);
    printf("AGE\t:");
    scanf("%d",&p->age);
    printf("MARKS(OUT OF 500)\t:");
    scanf("%d",&p->marks);
}

void out(stud *p)
{
    printf("\nDETAILS OF THE STUDENT :-\n\n");
    printf("ROLL.NO\t:%d",p->rno);
    printf("\nNAME\t:%s",p->name);
    printf("AGE\t:%d",p->age);
    printf("MARKS(OUT OF 500)\t:%d",p->marks);
}

void main()
{   int i,limit;
    printf("Enter the number of students:\t");
    scanf("%d",&limit);
    stud s[i];

    for(i=0;i<limit;i++)
    {
        //system("cls");
        in(&s[i]);
    }
    for(i=0;i<limit;i++)
    {
        //system("cls");
        out(&s[i]);
        //getch();
    }

}
