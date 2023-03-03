#include<stdio.h>
void main()
{
	int a=2,b,s=0;
	printf("Enter Number: ");
	scanf("%d",&b);
	
	while(a<=b)
	{
		s=s+a;
		printf("%d ",a);
		a+=2;
	}
	printf("\nTotal: %d",s);
}