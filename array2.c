#include<stdio.h>
#include<string.h>
void main()
{   char arr[100];
    int i,j,count,max=0,maxindex=0;
    printf("Enter the string:\t");
    scanf("%s",arr);
    i=0;
    int remain=(strlen(arr));
    while(remain>0)
    {       count=0;
            for(j=0;arr[j]!='\0';j++)
            {
               if(arr[i]==arr[j] && i>j)
               {
                   break;
               }
               else if(arr[i]==arr[j])
               {
                   count++;
               }

            }
            if(count!=0 && count>max)
            {
                maxindex=i;
                max=count;
            }

            i++;
            remain-=count;
    }


    printf("\n\nmaximum ocurring character is %c (ocuured %d times)\n\n ",arr[maxindex],max);
}
