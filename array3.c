#include<stdio.h>

void main()
{   char arr[100];
    int i,vowel=0,consonent=0;
    printf("Enter the string:\t");
    scanf("%s",arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
        {
            vowel++;
        }
        else
        {
            consonent++;
        }

    }
    printf("\nVowel in the string are %d",vowel);
    printf("\nconsonent in the string are %d\n ",consonent);
}

