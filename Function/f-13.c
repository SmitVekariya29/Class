#include<stdio.h>
#define n 10
int display(int a[])
{
	int max,min;
	max=a[0];
	min=a[0];
	for(int i=0; i<n; i++)
	{
		if(max <= a[i])
		{
			max=a[i];
		}
	}
	printf("\nlargest number is = %d",max);
	for(int i=0; i<n; i++)
	{
		if(min >= a[i])
		{
			min=a[i];
		}
	}
	printf("\nsmallest number is = %d",min);
	
	for(int i=0; i<n; i++)
	{
		printf("\n%d",a[i]);
		//printf("\n%d",a[n]);
	}
	
}
int main()
{
	int a[n],i;
	
	for(i=0; i<n; i++)
	{ 
		printf("enter = ");
		scanf("%d",&a[i]);
	}
	
	display(a);
}