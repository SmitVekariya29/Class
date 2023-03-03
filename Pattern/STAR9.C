#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s=30;                //a=ROW , b=COLUMN
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=s; b++)
		{
			printf(" ");
		}
		for(b=1; b<=a; b++)
		{
		if(a==5 || b==1 || b==a)
		{
			printf("* ");
		}
		else
		{
			printf("  ");
		}
	}
		s--;
		printf("\n");
	}
	getch();
}