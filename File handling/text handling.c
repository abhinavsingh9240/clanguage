#include<stdio.h>
#include<conio.h>
void main()
{   char in;
    FILE *f;

    printf("Enter that you want to write:-\t");
    while(1)
    {
        f=fopen("abhinav.txt","a");
        in=getche();
        putc(in,f);
        fclose(f);
    }

}
