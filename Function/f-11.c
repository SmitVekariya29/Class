#include<stdio.h>
int a,b,c,t;
float p;

void e()
{
	
	printf("Enter Maths mark: ");
	scanf("%d",&a);
	
	printf("Enter Science mark: ");
	scanf("%d",&b);
	
	printf("Enter English mark: ");
	scanf("%d",&c);

}

void cal()
{
	
	t= a+b+c;
	p= (float) t/3;
	
}

void dis()
{
	
	printf("Math\t Sci.\t Eng.\t Total\t Per.\t");
	printf("\n%d\t %d\t %d\t %d\t %.2f\t",a,b,c,t,p);
}

int main()
{
	e();
	cal();
	dis();
	
}