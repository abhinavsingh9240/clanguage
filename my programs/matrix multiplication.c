#include<stdio.h>

void in(int[],int,int);
void out(int[],int,int);
void main()
{
    int mat1[10][10],r1,c1,mat2[10][10],r2,c2,mul[10][10];
    printf("\nEnter the row and column of matrix 1:\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the matrix 1:\n");
    in(mat1,r1,c1);
    printf("\nEnter the row and column of matrix 2:\n");
    scanf("%d%d",&r2,&c2);
    printf("\nEnter the matrix 2:\n");
    in(mat2,r2,c2);
    if(c1!=r2)
    {
        printf("\nMatrix cannot be multiplied\n");
    }
    else
    {
        int i,j;
        for(i=0;i<r1

    }

}
