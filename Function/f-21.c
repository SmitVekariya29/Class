#include<stdio.h>
void main()
{
	int  i=1,n;
	printf("Enter  n:");
	scanf("%d",&n);
	label:
		if(i<=10)
		{
			printf("%d*%d = %d\n",n,i++,n*i);
			goto label;
		}
}	
//goto