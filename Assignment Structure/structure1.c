#include<stdio.h>

struct student
{
    int rollno,marks,age;
    char name[10];
};
void main()
{
    int n,i,j;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    printf("\nEnter the Details of Students:------------\n");
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d--\n",i+1);
        printf("Name:\t");
        scanf("%s",s[i].name);
        printf("RollNo:\t");
        scanf("%d",&s[i].rollno);
        printf("Age:\t");
        scanf("%d",&s[i].age);
        printf("Marks:\t");
        scanf("%d",&s[i].marks);
    }
    printf("\n\nDetails of students are:---------");
    for(i=0;i<n;i++)
    {
        printf("\n\nStudent %d---",i+1);
        printf("\nName:\t%s",s[i].name);
        printf("\nRollNo:\t%d",s[i].rollno);
        printf("\nAge:\t%d",s[i].age);
        printf("\nMarks:\t%d",s[i].marks);
    }
}
