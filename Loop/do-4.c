#include<stdio.h>
void main()
{
	int a=2,n;
	printf("Enter Value: ");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",a);
		a+=2;
	}while(a<=n);
}