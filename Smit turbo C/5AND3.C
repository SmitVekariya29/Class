#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter value of Divisible = ");
	scanf("%d",&a);

	if(a%15==0)
	{
		printf("\n%d is Divbisible by 5 and 3",a);
	}
	else
	{
		printf("\n%d is not DIvisible by 5 and 3",a);
	}
	getch();
}