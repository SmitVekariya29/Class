#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=65; a<='E'; a++)
	{
		for(b=1; b<=5; b++)
		{
			printf("%c ",a);
		}
		printf("\n");
	}

	getch();
}