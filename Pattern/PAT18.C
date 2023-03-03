#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=97;
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			if(b%2==1)
			{
				printf("%c ",c);
			}
			else
			{
				printf("%c ",c-32);
			}
			c++;
		}
		printf("\n");
	}
	getch();
}














































































































