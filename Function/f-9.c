#include<stdio.h>
int fun(int n)
{
	if(n==1)
		return 1;
	
	else
		return n*fun(n-1);
}

void main()
{
	printf("Factorial is: %d",fun(10));	
}