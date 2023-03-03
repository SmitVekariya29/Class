#include<stdio.h>
void main()
{
	int a,b,c=65;
	
	a=1;
	do
	{
		b=1; 
		do
		{
			printf("%c ",c++);
			b++;
		}while(b<=5);
		a++;
		printf("\n");
	}while(a<=5);
}