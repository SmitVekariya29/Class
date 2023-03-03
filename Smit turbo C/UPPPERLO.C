#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter value: ");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90)
	{       ch=ch+32;
		printf("lower case: %c",ch);
	}
	else if (ch>=97 && ch<=122 )
	{       ch=ch-32;
		printf("Upper case: %c",ch);
	}
	getch();
}



































































