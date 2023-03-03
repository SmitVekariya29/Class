#include<stdio.h>
#include<conio.h>
void main()
{
	float A,L;       //A=area,L=lenth
	clrscr();
	printf("Enter lenth of square = ");
	scanf("%f",&L);
	A=L*L ;
	printf("Area of Square = %.2f",A);
	getch();
}