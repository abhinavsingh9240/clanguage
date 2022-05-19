#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[50];
    printf("Enter the first string :\t");
    scanf("%s",str1);
    printf("Enter the second string :\t");
    scanf("%s",str2);
    fflush(stdin);
    strcat(str1,str2);
    printf("After concatenation first string is : %s",str1);
}
