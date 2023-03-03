#include<stdio.h>
int main()
{
	int a=20, *p, **q;
	p= &a; 
	q= &p;
	
	printf("value  of A is: %d\n",a);
	printf("address of A is: %u\n",&a);
	printf("address of A using P is: %d\n",p);
	printf("address of P is: %u\n",&p);
	printf("value of  A using  P is: %d\n",*p);
	
	printf("address of P using Q is:%d\n",q);
	printf("address of Q is: %u\n",&q);
	printf("value of A using  Q is: %d\n",**q);
}
