#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{   char str1[100],str2[100];
    int i,j,k,len;
    printf("Enter the sentence:\t");
    gets(str1);
    len=strlen(str1);
    i=len-i;
    k=0;
    while(i>=0)
    {
        if(str1[i-1]==' '||i==0)
        {   j=i;
            while(str1[j]!=' ' && str1[j]!='\0')
            {
                str2[k]=str1[j];
                k++;
                j++;
            }
            str2[k]=' ';
            k++;
        }
        i--;
    }
    printf("\nreversed sentece:\t%s",str2);
}

