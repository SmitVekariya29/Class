#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();

	for(i=65; i<=90; i++)
	{
		printf("%c-%c\t",i,i+32);
	}


	getch();
}