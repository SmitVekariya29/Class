#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0;
	clrscr();

	for(i=1; i<=5; i++)
	{       a=a+i;
		printf("%d\t",i);
	}
	printf("total: %d",a);

	getch();
}