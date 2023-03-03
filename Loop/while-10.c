#include<stdio.h>
void main()
{
	int a=65;
	
	while(a<=90)
	{
		if(a%4==1)
		{
			printf("%c ",a);
		}
		else
		{
			printf("%c ",a+32);
		}
		a=a+2;
	}
}