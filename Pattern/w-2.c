#include<stdio.h>
void main()
{
	int a,b,c=1;
	a=1;
	while(a<=5)
	{
		b=1;
		while(b<=5)
		{
			printf("%d ",c);
			c+=1;
			b++;
		}
		a++;
		printf("\n");
	}
}