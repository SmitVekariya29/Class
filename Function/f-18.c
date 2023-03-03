#include<stdio.h>
void main()
{
	int a=10,b=55,c,*x,*y;
	x = &a;
	y = &b;
	
	c=*x;
	*x=*y;
	*y=c;
	
	printf("A: %d\n",a);
	printf("B: %d",b);
}
//swapping using pointer