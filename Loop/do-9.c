#include<stdio.h>
void main()
{
	int i,a=1,b=0,c;
	i=1;
	do
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
		i++;
	}while(i<=20);
}