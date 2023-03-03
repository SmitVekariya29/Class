#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter value: ");
	scanf("%d %d",&x,&y);

	if(x<=2000 || x>=3000)
	{
		printf("X: %d",x);
	}
	if(y>100 && y<500)
	{
		printf("\nY: %d",y);
	}
	getch();
}

