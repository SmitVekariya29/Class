#include<stdio.h>
#include<conio.h>
void main()
{
	float H,B,A;
	clrscr();
	printf("Enter Height = ");
	scanf("%f",&H);

	printf("Enter Base = ");
	scanf("%f",&B);

	A=H*B/2;
	printf("\nArea of Triangle = %.2f",A);
	getch();
}