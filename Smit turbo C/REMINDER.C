#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter Divisor  = ");
	scanf("%d",&a);
	printf("Enter Dividend = ");
	scanf("%d",&b);

	c=a/b;
	d=a%b;
	printf("Quotient = %d",c);
	printf("\nReminder = %d",d);
	getch();
}