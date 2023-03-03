#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter Value: ");
	scanf("%d",&b);
	a=1;
	while(a<=b)
	{
		
		if(a%2==0)
		{
			printf("%d ",a*a);
		}
		else
		{
			printf("%d ",a);
		}
		a++;
	}
}