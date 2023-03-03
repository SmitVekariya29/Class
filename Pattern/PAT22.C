#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a='A'; a<='E'; a++)
	{
		for(b=a; b>='A'; b--)
		{
			printf("%c ",b);
		}
		printf("\n");
	}
	getch();
}