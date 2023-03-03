#include<stdio.h>
#include<conio.h>
void main()
{
	float A,R;
	clrscr();
	printf("Enter radius of circle = ");
	scanf("%f",&R);
	A=R*R*3.14;
	printf("Area of circle = %.2f",A);
	getch();
}