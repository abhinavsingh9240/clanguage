#include<stdio.h>

void main()
{
    int len,i;
    printf("Enter the length of array:\t");
    scanf("%d",&len);
    int arr[len],sum=0;
    printf("Enter the array:\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    printf("\nEntered array is");
    for(;p<len+arr;p++)
    {
        printf(" %d",*p);
        sum+=*p;
    }
    printf("\n\nSum of the array is %d",sum);

}
