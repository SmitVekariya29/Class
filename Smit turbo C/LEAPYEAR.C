#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter year: ");
	scanf("%d",&a);

	if(a%4==0)
		printf("\n%d is Leap year",a);
	else
		printf("\n%d is not Leap year",a);
	getch();
}