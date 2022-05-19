#include<stdio.h>

struct length
{
    int inch,feet;
};

struct length add(struct length *p,struct length *q)
{
    struct length a;
    a.inch=p->inch+q->inch;
    a.feet=p->feet+q->feet;
    a.feet+=a.inch/12;
    a.inch=a.inch%12;
    return a;
}
void main()
{
    struct length l[3];
    printf("Enter the measurement 1:\n");
    printf("Feet:\t");
    scanf("%d",&l[0].feet);
    printf("Inches:\t");
    scanf("%d",&l[0].inch);
    printf("\nEnter the measurement 2:\n");
    printf("Feet:\t");
    scanf("%d",&l[1].feet);
    printf("Inches:\t");
    scanf("%d",&l[1].inch);
    l[2]=add(&l[0],&l[1]);
    printf("\nSum of the measurements:\n");
    printf("Feet:\t%d",l[2].feet);
    printf("\nInches:\t%d",l[2].inch);
}
