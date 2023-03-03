#include<stdio.h>
void  main()
{
	int a,b;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);

	int ch;
	printf("1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\nEnter choice: ");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
			printf("Addition of  A and B is: %d\n",a+b);
			break;
		case 2:
			printf("Substraction of  A and B is: %d\n",a-b);
			break;	
		case 3:
			printf("Multiplication of  A and B is: %d\n",a*b);
			break;	
		case 4:
			printf("Division of  A and B is: %d\n",a/b);
			break;	
			
		default:
			printf("Wrong Choice");
			break;
	}
}
//switch case