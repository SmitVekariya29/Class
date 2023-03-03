#include<stdio.h>
void main()
{
	int a=1,b,s=0;
	
	printf("Enter Value: ");
	scanf("%d",&b);
	
	do
	{	s=s+a;	
		printf("%d ",a);
		a+=2;
	}while(a<=b);
	printf("Total: %d",s);
}