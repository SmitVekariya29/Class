#include<stdio.h>
void main()
{
	int a,b,s=30;
	a=1;
	do
	{
		b=1;
		do
		{
			printf("  ");
			b++;			
		}while(b<=s);
	
		b=1;
		do
		{
			printf("* ");
			b++;
		}while(b<=a);
		
		a++;
		s--;
		printf("\n");
		}while(a<=5);
}