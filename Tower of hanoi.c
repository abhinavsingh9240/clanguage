#include<stdio.h>

void toh(int,char,char,char);

void main()
{
    int i;
    printf("Enter the number of the disks:\t");
    scanf("%d",&i);
    toh(i,'A','B','C');

}

void toh(int n,char source,char aux,char target)
{
    if(n>0)
    {
        toh(n-1,source,target,aux);
        printf("\n%d : %c to %c",n,source,target);
        toh(n-1,aux,source,target);
    }
}
