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
void matt(int arr1[][10],int row,int col,int arr[][10])
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			arr[i][j]=arr1[j][i];
		}
	}

}

void main()
{	int x[10][10],c,r,z[10][10];
	clrscr();
	printf("Enter column and row of the matrix:\n");
	scanf("%d%d",&r,&c);
	clrscr();
	printf("Enter the matrix:\n");
	matin(x,r,c);
	clrscr();
	printf("Entered matrix is:-\n");
	matout(x,r,c);
	printf("Transpose of the matix is:\n");
	matt(x,r,c,z);
	matout(z,c,r);


getch();

}