#include<stdio.h>
#include<conio.h>

int det(int[][10],int);

void minor(int arr[][10],int ord,int col,int arr2[][10])
{
    int i,j,k;
    for(i=1;i<ord;i++)
    {   k=0;
        for(j=0;j<ord;j++)
        {
            if(col!=j)
            {
                arr2[i-1][k]=arr[i][j];
                k++;
            }
        }
    }
}
show(int arr[][10],int o)
{   int i,j;
    for(i=0;i<o;i++)
	{	for(j=0;j<o;j++)
		{	//printf("arr[%d][%d]=",i,j);
		    printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{       int i,j,arr[10][10],o;
	//clrscr();
	printf("Enter the matrix order:\t");
	scanf("%d",&o);
	printf("order of the matrix is %d",o);
	printf("\nEnter the matrix:\n");
	for(i=0;i<o;i++)
	{	for(j=0;j<o;j++)
		{
		    printf("matrix[%d][%d]=",i,j);
		    scanf("%d",&arr[i][j]);
		}
	}
	printf("\nmatrix is:-\n\n");
	show(arr,o);
	printf("\n\nDeterminant of the matrix is %d",det(arr,o));
	getch();
return 0;
}
int det(int arr[][10],int n)
{   int i,j,k,l,sign=1,arr2[10][10],res=0,a;
    if(n<2)
    {   //printf("\n-----%d",arr[0][0]);
        return arr[0][0];
    }
    else
    {
        for(i=0;i<n;i++)
        {   minor(arr,n,i,arr2);
            a=sign*arr[1][j]*det(arr2,n-1);
            res+=a;
            //printf("\na=%d",a);
            sign*=-1;
        }
        return res;
    }

}
