#include<stdio.h>
int fun(int n)
{
	if(n==0)
		return 0;
	
	else if(n==1)
			return 1;
		
	else 
		return fun(n-1)+fun(n-2);
}
int main()
{
	int n,i;
	printf("Enter the nu: ");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)  
	{
		printf("%d ",fun(i));
	}
	return 0;
}

//fibonaki
