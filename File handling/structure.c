#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student{
    char name[100];
    int regno,rollno;
};

void main()
{       int i,limit;
        printf("Enter the number of students:\t");
        scanf("%d",&limit);
        system("cls");
        struct student stud[limit];
        for(i=0;i<limit;i++)
        {   //printf("value of i is %d",i);
            printf("Enter the details:----------");
            printf("\n1.Name:\t");
            scanf("\n");
            scanf("%[^\n]%*c",stud[i].name);
            printf("2.RegNo:\t");
            scanf("%d",&stud[i].regno);
            printf("3.RollNo:\t");
            scanf("%d",&stud[i].rollno);
            system("cls");
        }
        for(i=0;i<limit;i++)
        {   system("cls");
            printf("Details of the students are--------------");
            printf("\nName:\t%s",stud[i].name);
            printf("\nRollNo:\t%d",stud[i].rollno);
            printf("\nRegNo:\t%d",stud[i].regno);
            getch();
        }

}
