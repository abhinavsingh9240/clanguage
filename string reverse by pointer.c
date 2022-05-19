#include<stdio.h>


void rev(char *p)
{   int i,len=0;
    char *q=p,c;
    for(;*q!='\0';q++)
        len++;
    for(i=0;i<len/2;i++)
    {
        c=*(p+i);
        *(p+i)=*(p+len-i-1);
        *(p+len-i-1)=c;
    }
}

void main()
{
    char str[100];
    printf("Enter the string:\t");
    scanf("%s",str);
    rev(str);
    printf("%s",str);
}
