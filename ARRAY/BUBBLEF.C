#include<stdio.h>
#include<conio.h>

void bubblesort(int *p,int s)
{       int *i,*j,*k,c,l=0;

	for(i=p;i<p+s;i++)
	{       l++;
		for(j=p;j<p+s-l;j++)
		{     k=j+1;
		      if(*j>*k)
		      {    c=*j;
			   *j=*k;
			   *k=c;
		       }
		}
	}


}

void show(int arr[],int n)
{       int i;
	for(i=0;i<n;i++)
	{     printf(" %d",arr[i]);
	}
}

void main()
{       int arr[]={12,35,56,23,5,32},i,j,n=6;
	clrscr();
	printf("\nunsorted array");
	show(arr,n);
	bubblesort(arr,n);
	printf("\nsorted array");
	show(arr,n);

	getch();

}