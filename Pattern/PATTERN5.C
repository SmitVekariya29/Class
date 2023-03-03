#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=5; b++)
		{
			printf("%d ",a*2);
		}
		printf("\n");
	}

	getch();
}



