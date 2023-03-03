#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=5; a>=1; a--)
	{
		for(b=5; b>=a; b--)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
	getch();
}
