#include<stdio.h>
void main()
{
	int a,b;
	a=65;
	do
	{
		b=1;
		do
		{
			printf("%c ",a);
			b++;
		}while(b<=5);
		printf("\n");
		a++;
	}while(a<='E');
}