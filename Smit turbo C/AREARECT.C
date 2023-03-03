#include<stdio.h>
#include<conio.h>
void main()
{
	float L,W,A;   //L=lenth,W=width,A=area
	clrscr();
	printf("Enter lenth = ");
	scanf("%f",&L);

	printf("Enter width = ");
	scanf("%f",&W);
	A=L*W;
	printf("Area of Rectangle = %.2f",A);
	getch();
}