#include<stdio.h>

void main()
{
        int i,j;
        int *p=&i,*q=&j;
        printf("Enter the two numbers:-\n");
        scanf("%d%d",p,q);
        if(*p>*q)
        {
            printf("\nFirst number(%d) is greater\n",*p);
        }
        else if(*p<*q)
        {
            printf("\nSecond number(%d) is greater\n",*q);

        }
        else
        {
            printf("\nBoth numbers are equal\n");
        }
}
