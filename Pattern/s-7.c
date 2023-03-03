#include<stdio.h>
void main()
{
	int a,b,s=30;
	
	a=1;
	while(a<=5)
	{
		b=1;
		while(b<=s)
		{
			printf(" ");
			b++;
		}
		
		b=1;
		while(b<=a)
		{
			if(a==5 || b==1 || a==b)
			printf("* ");
		
			else
			printf("  ");
			b++;
		}
		a++;
		s--;
		printf("\n");
	}
}