#include<stdio.h>

void main()
{

    char str[100];
    int i;
    printf("Enter the string:\t");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>96 && str[i]<=122)
            {
                str[i]-=32;
            }
    }
    printf("Now the string is :\t%s",str);
}
