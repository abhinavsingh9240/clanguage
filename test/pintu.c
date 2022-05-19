#include <stdio.h>
struct Complex
{
   int real_no,imaginary_no;
};
int main()
{
    struct complex a,b,result;
    int choice;
    printf("\n press 1 for addition");
    printf("\n press 2 for subtracton");
    printf("\n press 3 for multiplication");
    printf("\n enter your choice");
    scanf("\n %d",&choice);

    printf("\n enter the 1st real nu.:");
    scanf("\n %d",&a.real_no);
    printf("\n enter the  1st imaginary nu.:");
    scanf("\n %d",&a.imaginary_no);

    printf("\n enter the 2nd real nu.:");
    scanf("\n %d",&b.real_no);
    printf("\n enter the 2nd imaginary nu.:");
    scanf("\n %d",&b.imaginary_no);

    switch(choice)
    {
        case 1:
        result.real_no=a.real_no+b.real_no;
        result.imaginary_no=a.imaginary_no+b.imaginary_no;
        printf("\n the result is:%d+(i%d)",result.real_no,result.imaginary_no);
        break;

        case 2:
        result.real_no=a.real_no-b.real_no;
        result.imaginary_no=a.imaginary_no-b.imaginary_no;
        printf("\n the result is:%d+(i%d)",result.real_no,result.imaginary_no);
        break;

        case 3:
        result.real_no=a.real_no*b.real_no-a.imaginary_no*b.imaginary_no;
        result.imaginary_no=a.real_no*b.imaginary_no+a.imaginary_no*b.real_no;
        printf("\n the result is:%d+(i%d)",result.real_no,result.imaginary_no);
        break;

        default:
        printf("\n your choice is not within the limits");
        break;
    }
    return 0;
}
