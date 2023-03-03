#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=1;
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			if(c%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
			c++;
		}
		printf("\n");
	}
       // printf("\n");
	getch();
}