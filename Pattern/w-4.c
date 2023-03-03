#include<stdio.h>
void main()
{
	int a,b;
	
	a=1;
	while(a<=10)
	{
		b=1;
		while(b<=5)
		{
			printf("%d ",a);
			b++;
		}
		printf("\n");
		a+=2;
	}
}