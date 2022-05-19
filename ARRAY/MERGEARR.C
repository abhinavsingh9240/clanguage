#include<stdio.h>
#include<conio.h>

void show(int arr[],int s)
{       int i;
	for(i=0;i<s;i++)
	{	printf("%d ",arr[i]);
	}

}
void main()
{     int a1[]={12,34,54,63,73,111,122},a2[]={1,21,34,44,62,88,93},arr[100],s1=7,s2=7,i,j,k;

	clrscr();

	printf("initial arrays are\n");
	show(a1,s1);
	printf("\n\n");
	show(a2,s2);


	for(i=0,j=0,k=0;i<s1&&j<s2;)
	{
		if(a1[i]<a2[j])
		{
			arr[k]=a1[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=a2[j];
			j++;
			k++;
		}
	}
	if(j==s2)
	{	while(i<s1)
		{     arr[k]=a1[i];
			k++;
			i++;
		}
	}
	else
	{	while(j<s2)
		{ 	arr[k]=a2[j];
			k++;
			i++;

		}

	}
	printf("\n\nMerged array is\n");
	show(arr,k);

getch();
}