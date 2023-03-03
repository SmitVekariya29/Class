#include<stdio.h>

	int fun(int n)
	{
		printf("inside function: %d\n",n);
		
		if(n<110)
		{
			fun(++n);
		}
		
		printf("After condition: %d\n",n);
	}
	
	void main()
	{
		fun(1);
	}
	

//recursive	
