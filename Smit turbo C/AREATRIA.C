#include<stdio.h>
#include<conio.h>
void main()
{
	float A,L;
	clrscr();
	printf("Enter lenth = ");
	scanf("%f",&L);
	A=(1.73/4)*L*L;
	printf("Area of Triangle = %.2f",A);
	getch();
}