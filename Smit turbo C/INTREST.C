#include<stdio.h>
#include<conio.h>
void main()
{
	float i,M,I,Y;  //M=amount,I=inrest,Y=year,i=final intrest
	clrscr();
	printf("Enter invest amount = ");
	scanf("%f",&M);

	printf("Enter intrest = ");
	scanf("%f",&I);

	printf("Enter time(year) = ");
	scanf("%f",&Y);

	i=M*I*Y/100;
	printf("Intrest amount = %.2f",i);
	getch();
}