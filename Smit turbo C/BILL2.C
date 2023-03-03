#include<stdio.h>
#include<conio.h>
void main()
{
	float U,a,b,c,d;
	clrscr();
	printf("Enter Used Units: ");
	scanf("%f",&U);

	if (U<=100)
	{
		a=(U*0.6)+50;
		printf("Total Bill: %.2f Rs.",a);
	}
	else if (U>100 && U<=300)
	{
		b=((U-100)*0.8)+50+60;
		printf("Total Bill: %.2f Rs.",b);
	}
	else
	{
		c=((U-300)*0.9)+50+60+160;
		printf("Total Bill: %.2f Rs.",c);
	}
	if(c>300)
	{
		d=(c*15/100)+c;
		printf("\nBill with Surcharge: %.2f",d);
	}
	getch();
}