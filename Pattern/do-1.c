#include<stdio.h>
void main()
{
	int a,b;
	a=1;
	do
	{
		b=1;
		do
		{
			printf("%d ",a);
			b++;
		}while(b<=5);
		printf("\n");
		a++;
	}while(a<=5);
}