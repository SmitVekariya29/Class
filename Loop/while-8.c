#include<stdio.h>
void main()
{
	int i,a=1;
	i=1;
	while(i<=10)
	{
		printf("%d ",i*a);
		a=a*2;
		
		i++;
	}
}