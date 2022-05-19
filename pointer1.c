#include<stdio.h>

void main()
{
    int i,j;
    int *p=&i,*q=&j;
    printf("Enter the numbers:\n");
    scanf("%d%d",p,q);
    printf("\nSum of the numbers:\t%d",*p+*q);
}
