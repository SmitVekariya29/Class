#include<stdio.h>
void main()
{
	int a=1,n;
	printf("Enter value:");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",a);
		a++;
	}while(a<=n);
}