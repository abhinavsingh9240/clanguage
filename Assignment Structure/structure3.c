#include<stdio.h>

typedef struct complex
{
    int r,i;
}complex;

complex add(complex,complex);
complex sub(complex,complex);
complex mul(complex,complex);

void main()
{
    struct complex a,b,result;
    printf("Enter the first complex number:\nReal:\t");
    scanf("%d",&a.r);
    printf("Img:\t");
    scanf("%d",&a.i);
    printf("\nEnter the second complex number:\nReal:\t");
    scanf("%d",&b.r);
    printf("Img:\t");
    scanf("%d",&b.i);
    result=add(a,b);
    printf("\nAddition:\t(%d)+i(%d)\tReal:%d  Img:%d",result.r,result.i,result.r,result.i);
    result=sub(a,b);
    printf("\nSubtraction:\t(%d)+i(%d)\tReal:%d  Img:%d",result.r,result.i,result.r,result.i);
    result=mul(a,b);
    printf("\nMultiplication:\t(%d)+i(%d)\tReal:%d  Img:%d",result.r,result.i,result.r,result.i);
}
complex add(complex x,complex y)
{   complex z;
    z.r=x.r+y.r;
    z.i=x.i+y.i;
    return z;
}
complex sub(complex x,complex y)
{   complex z;
    z.r=x.r-y.r;
    z.i=x.i-y.i;
    return z;
}
complex mul(complex x,complex y)
{
    complex z;
    z.r=(x.r*y.r)-(x.i*y.i);
    z.i=(x.r*y.i)+(x.i*y.r);
    return z;
}
