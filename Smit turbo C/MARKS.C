#include<stdio.h>
#include<conio.h>
void main()
{
	float m;
	clrscr();
	printf("Enter Your Marks:");
	scanf("%f",&m);

	if(m>75)
	{
		printf("You have Grade-A");
	}
	else if(m<60 && m>=75)
	{
		printf("You have Grade-B");
	}
	else if(m<45 && m>=60)
	{
		printf("You have Grade-C");
	}
	else if(m<=35 && m<=45)
	{
		printf("You have Grade-D");
	}
	else if(m<35)
	{
		printf("Better Luck Next TIME");
	}
	getch();
}






























































