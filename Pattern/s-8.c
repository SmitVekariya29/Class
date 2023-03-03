#include<stdio.h>
void main()
{
	int a,b;
	
	a=1;
	do
	{
		b=1;
		do
		{
			if (a==1||a==5|| b==1||b==5)
			printf("* ");
			
			else
			printf("  ");
			b++;
		}while(b<=5);
		a++;
		printf("\n");
	}while(a<=5);
}