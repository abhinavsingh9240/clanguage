#include<stdio.h>

void main()
{   A:
    char a[100],address[]="C:\\users\\mist\\Documents\\",dat[500];
    int choice;
    printf("ABHINAV: TEXT EDITOR");
    printf("\n1.Create new file");
    printf("\n2.Edit file");
    printf("\n\nEnter the choice:\t");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the file name:\t");
        scanf("%s",a);
        strcat(address,a);
        FILE *f=fopen(address,"a+");
        printf("-------------------------------------------------------------------------------------")
        scanf("%[^\n]%*c",dat);
        for(i=0;dat[i]!='\0';i++)
        {
                putc
        }



    default:
        goto A:
    }

}

