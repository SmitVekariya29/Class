#include<stdio.h>
void main()
{
	int a,b;
	a=1;
	while(a<=5)
	{
		b=1;
		while(b<=5)
		{
			printf("%d ",b);
			b++;
		}
		a++;
		printf("\n");
	}
}