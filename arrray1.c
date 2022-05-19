#include<stdio.h>


void main()
{
    char str1[50],str2[50];
    printf("Enter the first string: \t");
    scanf("%s",str1);
    printf("Enter the second string:\t");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0)
    {
        printf("\nStrings are same\n");

    }
    else
    {
        printf("\nStrings are not same\n");
    }
}
