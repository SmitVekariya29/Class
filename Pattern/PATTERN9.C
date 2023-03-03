#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=11;
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=5; b++)
		{
			printf("%d ",c++);
			c=c+5;
		}
		printf("\n");
	}

	getch();
}