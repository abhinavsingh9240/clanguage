#include<stdio.h>

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

int det(int arr[][10],int ord)
{   int res=0,sign=1,i,arr2[10][10];
    if(ord<2)
    {
        return arr[0][0];
    }
    else
    {
        for(i=0;i<ord;i++)
        {
            minor(arr,ord,i,arr2);
            res+=sign*arr[1][i]*det(arr2,ord-1);
            printf("%d",res);
            sign=sign*(-1);
        }
        return res;
    }
}

int main()
{
    int i,j,arr[10][10],ord;
    printf("Enter the order of matrix: ");        //Taking order of matrix from the user
    scanf("%d",&ord);

    printf("\nEnter the matrix:\n");                //Taking matrix from the user
    for(i=0;i<ord;i++)
        for(j=0;j<ord;j++)
            scanf("%d",&arr[i][j]);

    printf("\n\nEntered matrix is :\n");                // Showing the stored matrix
    for(i=0;i<ord;i++)
    {
        for(j=0;j<ord;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    printf("\n\nDeterminant of th matrix is %d",det(arr,ord));
    /*int arr2[10][10],col=1;

    minor(arr,ord,col,arr2);                                //calculating minor

    printf("\n\nminor of the matrix is:\n");           //printing minor stored in arr2 of order --> ord -1
    for(i=0;i<ord-1;i++)
        {
            for(j=0;j<ord-1;j++)
                printf("%d ",arr2[i][j]);
            printf("\n");
        }*/
    return 0;
}

