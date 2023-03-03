#include<stdio.h>
float F()
{
	float c,f;
	printf("`C : ");
	scanf("%f",&c);
	f=(c*9)/5+32;
	printf("`F : %.2f",f);
	//return f;
}
void main()
{
	//float x=F();
	//printf("`F : %.2f",x);
	F();
}