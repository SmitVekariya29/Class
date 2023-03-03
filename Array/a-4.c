#include<stdio.h>
void main()
{
	int a[6];
	int i,e=0,o=0;
	
	for(i=0; i<6; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<6; i++)
	{
		if(a[i]%2==0)
		{
			e=e+a[i];
		}
		
		else
			o=o+a[i];
	}
	
	for(i=0; i<1; i++)
	{
		printf("Even: %d",e);
		printf("\nOdd:  %d",o);
	}
}