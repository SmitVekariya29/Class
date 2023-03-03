#include<stdio.h>
#include<conio.h>
void main()
{
	float b,a;
	clrscr();
	printf("Enter marks of student = ");
	scanf("%f %f",&a,&b);

	if (a>=33)
		printf("\nStudent is Pass");
	else
		printf("\nStudent is Fail");

	getch();
}