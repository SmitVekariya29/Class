#include<stdio.h>
void main()
{
	int a[6];
	int i,e=0;
	
	for(i=0; i<6; i++)
	{
		printf("Enter:");
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<6; i++)
	{
		e=e+a[i];
	}
	printf(":%d",e);
}