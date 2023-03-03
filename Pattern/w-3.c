#include<stdio.h>
void main()
{
	int a,b;
	
	a=5;
	while(a>=1)
	{
		b=1;
		while(b<=5)
		{
			printf("%d ",a);
			b++;
		}
		a--;
		printf("\n");
	}
}