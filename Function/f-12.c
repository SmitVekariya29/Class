#include<stdio.h>
void display(int a, int b, int c, int total, float per)
{
	printf("Maths markes = %d\n",a);
	printf("Science markes = %d\n",b);
	printf("English markes = %d\n",c);
	printf("\nTotal markes = %d\n",total);
	if(per<36 || a<36 || b<36 || c<36)
		printf("Percentage = -- \n");
	else
		printf("Percentage = %.2f\n",per);	
}
void calc(int a, int b, int c)
{ 
	float per;
    int total;
		
	total=a+b+c;
	per=(float)total/3;
	
	display(a,b,c,total,per);
	{	
	    if(a<36 || b<36 || c<36)
		{
			printf("fail\n");
		}
		else if(per>80)
		{
			printf("grade A\n");
		}
		else if(per>60 && per<=80)
		{
			printf("grade B\n");
		}
		else if(per>36 && per<=60)
		{
			printf("grade C\n");
		}
	}
}


void sub()
{   
	int a,b,c;
	
	printf("Maths Marks: \n");
	scanf("%d",&a);
	
	printf("Science Marks: \n");
	scanf("%d",&b);
	
	printf("English Marks: \n");
	scanf("%d",&c);
	
	calc(a,b,c);
}

int main ()
{
	sub();
}