#include<stdio.h>
#include<conio.h>



void matin(int arr[][10],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{	for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
}

void matout(int arr[][10],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{	for(j=0;j<col;j++)
		{   printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void matmulti(int arr1[][10],int arr2[][10],int row1,int col1,int row2,int col2,int arr[][10])
{
	int i,j,k;
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{       arr[i][j]=0;
			for(k=0;k<col1;k++)
			{
				arr[i][j]+=(arr1[i][k]*arr2[k][j]);

			}
				}
	}

}

void main()
{	int x[10][10],y[10][10],c1,r1,c2,r2,z[10][10];
	clrscr();
	printf("Enter column and row of first matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter column and row of second matrix:\n");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\nDue to different size matrices can`t be added");
	}

	else
	{       clrscr();
		printf("\nEnter the first matrix\n");
		matin(x,r1,c1);
		clrscr();
	       printf("\nEnter the second matrix\n");
	       matin(y,r2,c2);
	       clrscr();
	       printf("\n\nMatrix 1:-\n");
	       matout(x,r1,c1);
	       printf("\n\nMatrix 2:-\n");
	       matout(y,r2,c2);
	       matmulti(x,y,r1,c1,r2,c2,z);
	       printf("\n\nMultiplication of the matrices is\n");
	       matout(z,r1,c2);


	}
getch();

}