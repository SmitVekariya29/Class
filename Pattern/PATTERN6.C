#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=1; a<=10; a=a+2)
	{
		for(b=1; b<=5; b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}

	getch();
}