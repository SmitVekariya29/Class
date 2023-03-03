#include<stdio.h>
#include<conio.h>
void main()
{
	int maths=71,che=71,eng=69,com=80,total;
	float per;
	clrscr();
	printf("Maths     =%d",maths);
	printf("\nChemistry =%d",che);
	printf("\nEnglish   =%d",eng);
	printf("\nComputer  =%d",com);
	total= maths+che+eng+com;
	printf("\nTotal     =%d",total);
	per= (float) total/4;
	printf("\nPer       =%f",per);
	getch();
}