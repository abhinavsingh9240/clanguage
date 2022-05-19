#include<conio.h>
#include<stdio.h>

void main(){
int n,i,total=0;
printf("enter the length of array:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);
    total+=arr[i];
    }
printf("sum is %d\n elements of array are\n",total);

for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
getch();


}
