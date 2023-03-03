#include<stdio.h>
float R()
{
	float r,a;
	printf("Enter Radius:");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("\nArea of circle: %.2f",a);
	//return a;
}

void main()
{
	//float x=R();
	//printf("\nArea of circle: %.2f",x);
	R();
}