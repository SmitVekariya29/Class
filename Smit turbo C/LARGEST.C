#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter value = ");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b)
		if (a>c)
			printf("Largest number is %d",a);
		else
			printf("Largest number is %d",a);
	else

		if(b>c)
			printf("Largest number is %d",b);
		else
			printf("largest number is %d",c);
	getch();

}