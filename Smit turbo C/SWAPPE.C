#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	clrscr();
	printf("Enter value = ");
	scanf("%f %f",&a,&b);

	c=a;
	a=b;
	b=c;
	printf("Swapped value = %.2f, %.2f",a,b);
	getch();
}