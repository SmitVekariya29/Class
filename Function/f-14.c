#include<stdio.h>
int i;

int	e(int a[])
{	
	for(i=0; i<=4; i++)
	{
		if(i==0)
		printf("\n%d ",a[i]);
		
		else	
		printf("\n%d \t%d",a[i],a[i]+a[i-1]);
	}
}

int main()
{
	int a[5];
	
	
	for(i=0; i<5; i++)
	{
		printf("Enter : ");
		scanf("%d",&a[i]);
	}
	e(a);
}	