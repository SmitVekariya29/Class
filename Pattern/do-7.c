#include<stdio.h>
void main()
{
	int a,b,c=0;
	a=1;
	do
	{
		b=1;
		do
		{
			c+=1;
			printf("%d ",c);
			b++;
		}while(b<=a);
		printf("\n");
		
		a++;
	}while(a<=5);
}