#include<stdio.h>
int A(int x, int y)
{
	return x*y;
}
void main()
{
	int a,b,x;
	printf("Enter A and B:");
	scanf("%d %d",&a,&b);
	x=A(a,b);
	printf("X=%d",x);
}