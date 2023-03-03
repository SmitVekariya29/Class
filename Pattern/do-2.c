#include<stdio.h>
void main()
{
	int a,b;
	a=2;
	do
	{
		b=1;
		do
		{
			printf("%d ",a);
			b++;
		}while(b<=5);
		printf("\n");
		a+=2;
	}while(a<=10);
}