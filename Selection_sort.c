#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],n,i,j,min,temp;
	printf("Enter the size of array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter data ");
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted array is \n");
		for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
		printf("\nSorted array is \n");
		for(i=0;i<n;i++)
	{
		
		printf("%d\t",a[i]);
	}
	getch();
}
