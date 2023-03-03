#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0;
	clrscr();

	for(i=1; i<=50; i=i+2)
	{       a=a+i;
		printf("%d\t",i);
	}
	printf("\ntotal: %d",a);

	getch();
}