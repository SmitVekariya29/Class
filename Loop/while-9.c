#include<stdio.h>
void main()
{
	float i,a=0.5;
	i=0.5;
	while(i<=8)
	{
		printf("%.1f ",a);
		a=a+i;
		i++;
	}
}