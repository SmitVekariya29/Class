#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("enter: ");
	scanf("%d",&n);
	for(i=1; i<=n; i=i+2)
	{
		printf("%d\t",i);
	}


	getch();

}