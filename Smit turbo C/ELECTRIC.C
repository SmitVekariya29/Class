#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,a,b,c,d;
	clrscr();
	printf("Enter used Units: ");
	scanf("%f",&unit);

	a=(unit*0.6);
	b=a+((unit-100)*0.8);
	c=b+((unit-300)*0.9);
	//d=(*15/100)+;
	if (unit<=100)
	{
		printf("Amount of Charges: %.2f Rs.",a+50);
	}
	else
	{
		if(unit>100 && unit<=300)
		{
			printf("Amount of Chrges: %.2f Rs.",b+50);
		}
		else
		{
			if(unit>300)
			{
			printf("Amount of Charges: %.2f Rs.",c+50);
			}
			if(c>300)
			{
			printf("\nAmount of Surcharges: %.2f Rs.",d);
			}
		}
	}


	getch();
}
