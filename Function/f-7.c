#include<stdio.h>
int p(int i)
{
	return i;
}

void main()
{
	int a,j,k;
	
	a=1;
	while(a<=5)
	{
		j=1;
		while(a<=5)
		{
			printf("%d ",j);
			
		}
		printf("\n");
			
	}
	k= p(int i);
	
	printf("%d",k);
}