#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s=5;
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=s; b++)
		{
			printf(" ");
		}
		for(b=1; b<=a; b++)
		{
			printf("* ");
		}
		s--;
		printf("\n");
	}
	for(a=1; a<=4; a++)
	{
		for(b=-1; b<=s; b++)
		{
			printf(" ");
		}
		for(b=a; b<=4; b++)
		{
			printf("* ");
		}
		s++;
		printf("\n");
	}
	getch();
}