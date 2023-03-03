#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	clrscr();
	printf("Enter two value =");
	scanf("%f %f",&a,&b);

	if(a>b)

		printf("Smallest number is %.1f",b);

	else

		printf("Smallest number  is %.1f",a);

	getch();
}