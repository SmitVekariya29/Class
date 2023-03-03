#include<stdio.h>
void main()
{
	int a,b;
	
	a=1;
	while(a<=5)
	{
		b=1;
		while(b<=a)
		{
			printf("%d ",b);
			b++;
		}
		printf("\n");
		a++;
	}
}