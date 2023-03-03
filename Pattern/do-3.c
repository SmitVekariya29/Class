#include<stdio.h>
void main()
{
	int a,b,c=11;
	a=1;
	do
	{
		b=1;
		do
		{
			printf("%d ",c++);
			b++;
			
		}while(b<=5);
		
		printf("\n");
		c+=5;
		a++;
	}while(a<=5);

}