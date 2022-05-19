#include <stdio.h>

struct student
{
    char name[100];
    int rollno,age,marks;
};

void main()
{
    int i,j;
    //struct student s[i];
    printf("\nenter the size of student: ");
    scanf("%d",&i);
    struct student s[i];
    printf("\nenter the information: ");

    for(j=0;j<i;j++)
    {
        printf("\nenter the name of student: ");
        scanf("%s",s[j].name);
        printf("\nenter the roll number: ");
        scanf("%d",&s[j].rollno);
        printf("\nenter age: ");
        scanf("%d",&s[j].age);
        printf("\nenter marks out of 500: ");
        scanf("%d",&s[j].marks);
    }

    printf("\n--------------entered info--------------------\n\n");

    for(j=0;j<i;j++)
    {
        printf("\nname of student: \n%s",s[j].name);
        printf("\nroll number: \n%d",s[j].rollno);
        printf("\nage: \n%d",s[j].age);
        printf("\nmarks out of 500: \n%d",s[j].marks);
    }
}
