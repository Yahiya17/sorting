#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("\033[1;36m");
	int i,j,temp,n,arr[20];
	printf("Enter the size of array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter data  ");
		scanf("%d",&arr[i]);
	}
	printf("\nARRAY BEFORE SORTING\n");
		for(i=0;i<n;i++)
	{
		
		printf("%d\t",arr[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		printf("\nARRAY AFTER BUBBLE SORT\n");
		for(i=0;i<n;i++)
	{
		
		printf("%d\t",arr[i]);
	}
	getch();
}
