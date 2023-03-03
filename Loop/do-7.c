#include<stdio.h>
void main()
{
	int a=1,b;
	printf("Enter Value: ");
	scanf("%d",&b);
	
	do
	{
		printf("%d  ",a*a);
		a++;
	}while(a<=b);
}
