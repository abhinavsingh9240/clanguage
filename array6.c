#include<stdio.h>

void main()
{
    int i,sum=0;
    char str[100];
    printf("enter the string:\t");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum+=str[i]-'0';
        }
    }
    printf("Sum of the digits are :\t%d",sum);
}
