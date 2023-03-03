#include<stdio.h>
float dollar()
{
	float a,A;
	printf("Enter USD:");
	scanf("%f",&a);
	
	//printf("Amount in USD: %.2f",a*82.60);
	A=a*82.60;
	return A;
}

void main()
{
	printf("Hii....\n");
	//dollar();
	float x=dollar();
	printf("INR: %.2f",x);
}